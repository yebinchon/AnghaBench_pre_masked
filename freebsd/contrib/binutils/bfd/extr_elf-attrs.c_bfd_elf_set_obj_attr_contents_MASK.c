
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int,int) ;

void
FUNC_3 (bfd *VAR_2, bfd_byte *VAR_3, bfd_vma VAR_4)
{
  bfd_byte *VAR_5;
  int VAR_6;
  bfd_vma VAR_7;

  VAR_5 = VAR_3;
  *(VAR_5++) = 'A';
  VAR_7 = 1;
  for (VAR_6 = VAR_0; VAR_6 <= VAR_1; VAR_6++)
    {
      bfd_vma VAR_8 = FUNC_1 (VAR_2, VAR_6);
      if (VAR_8)
 FUNC_2 (VAR_2, VAR_5, VAR_8, VAR_6);
      VAR_5 += VAR_8;
      VAR_7 += VAR_8;
    }

  if (VAR_4 != VAR_7)
    FUNC_0 ();
}
