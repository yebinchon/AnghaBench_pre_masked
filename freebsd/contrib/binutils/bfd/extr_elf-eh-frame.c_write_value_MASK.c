
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_0, bfd_byte *VAR_1, bfd_vma VAR_2, int VAR_3)
{
  switch (VAR_3)
    {
    case 2: FUNC_1 (VAR_0, VAR_2, VAR_1); break;
    case 4: FUNC_2 (VAR_0, VAR_2, VAR_1); break;
    case 8: FUNC_3 (VAR_0, VAR_2, VAR_1); break;
    default: FUNC_0 ();
    }
}
