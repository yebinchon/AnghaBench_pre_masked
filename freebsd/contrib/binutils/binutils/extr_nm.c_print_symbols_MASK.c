
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int *,int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_0, bfd_boolean VAR_1, void *VAR_2, long VAR_3,
        unsigned int VAR_4, bfd *VAR_5)
{
  asymbol *VAR_6;
  bfd_byte *VAR_7, *VAR_8;

  VAR_6 = FUNC_2 (VAR_0);
  if (VAR_6 == ((void*)0))
    FUNC_0 (FUNC_1 (VAR_0));

  VAR_7 = (bfd_byte *) VAR_2;
  VAR_8 = VAR_7 + VAR_3 * VAR_4;
  for (; VAR_7 < VAR_8; VAR_7 += VAR_4)
    {
      asymbol *VAR_9;

      VAR_9 = FUNC_3 (VAR_0, VAR_1, VAR_7, VAR_6);
      if (VAR_9 == ((void*)0))
 FUNC_0 (FUNC_1 (VAR_0));

      FUNC_4 (VAR_0, VAR_9, (bfd_vma) 0, VAR_5);
    }
}
