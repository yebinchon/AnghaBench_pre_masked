
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static bfd_vma
FUNC_7 (bfd *VAR_0, bfd_byte *VAR_1, int VAR_2, int VAR_3)
{
  bfd_vma VAR_4;

  switch (VAR_2)
    {
    case 2:
      if (VAR_3)
 VAR_4 = FUNC_4 (VAR_0, VAR_1);
      else
 VAR_4 = FUNC_1 (VAR_0, VAR_1);
      break;
    case 4:
      if (VAR_3)
 VAR_4 = FUNC_5 (VAR_0, VAR_1);
      else
 VAR_4 = FUNC_2 (VAR_0, VAR_1);
      break;
    case 8:
      if (VAR_3)
 VAR_4 = FUNC_6 (VAR_0, VAR_1);
      else
 VAR_4 = FUNC_3 (VAR_0, VAR_1);
      break;
    default:
      FUNC_0 ();
      return 0;
    }

  return VAR_4;
}
