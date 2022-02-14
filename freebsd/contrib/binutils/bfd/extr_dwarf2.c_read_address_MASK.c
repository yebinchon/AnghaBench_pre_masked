
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comp_unit {int addr_size; int abfd; } ;
typedef int bfd_uint64_t ;
typedef int bfd_byte ;
struct TYPE_2__ {int sign_extend_vma; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 TYPE_1__* FUNC_7 (int ) ;

__attribute__((used)) static bfd_uint64_t
FUNC_8 (struct comp_unit *VAR_0, bfd_byte *VAR_1)
{
  int VAR_2 = FUNC_7 (VAR_0->abfd)->sign_extend_vma;

  if (VAR_2)
    {
      switch (VAR_0->addr_size)
 {
 case 8:
   return FUNC_6 (VAR_0->abfd, VAR_1);
 case 4:
   return FUNC_5 (VAR_0->abfd, VAR_1);
 case 2:
   return FUNC_4 (VAR_0->abfd, VAR_1);
 default:
   FUNC_0 ();
 }
    }
  else
    {
      switch (VAR_0->addr_size)
 {
 case 8:
   return FUNC_3 (VAR_0->abfd, VAR_1);
 case 4:
   return FUNC_2 (VAR_0->abfd, VAR_1);
 case 2:
   return FUNC_1 (VAR_0->abfd, VAR_1);
 default:
   FUNC_0 ();
 }
    }
}
