
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size_sym {scalar_t__ size; int minisym; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int *,int *,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_8 (bfd *VAR_1, bfd_boolean VAR_2,
      struct size_sym *VAR_3, long VAR_4,
      bfd *VAR_5)
{
  asymbol *VAR_6;
  struct size_sym *VAR_7, *VAR_8;

  VAR_6 = FUNC_4 (VAR_1);
  if (VAR_6 == ((void*)0))
    FUNC_0 (FUNC_1 (VAR_1));

  VAR_7 = VAR_3;
  VAR_8 = VAR_7 + VAR_4;
  for (; VAR_7 < VAR_8; VAR_7++)
    {
      asymbol *VAR_9;
      bfd_vma VAR_10;

      VAR_9 = FUNC_5 (VAR_1, VAR_2, VAR_7->minisym, VAR_6);
      if (VAR_9 == ((void*)0))
 FUNC_0 (FUNC_1 (VAR_1));


      if (FUNC_2 (VAR_1) == VAR_0)
 VAR_10 = VAR_7->size;
      else
 VAR_10 = VAR_7->size - FUNC_6 (VAR_1, FUNC_3 (VAR_9));

      FUNC_7 (VAR_1, VAR_9, VAR_10, VAR_5);
    }
}
