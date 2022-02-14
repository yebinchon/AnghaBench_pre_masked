
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int reloc_howto_type ;
typedef int bfd_reloc_code_real_type ;
typedef int bfd ;
struct TYPE_2__ {int bits_per_address; } ;


 int FUNC_0 () ;

 TYPE_1__* FUNC_1 (int *) ;
 int VAR_0 ;

reloc_howto_type *
FUNC_2 (bfd *VAR_1, bfd_reloc_code_real_type VAR_2)
{
  switch (VAR_2)
    {
    case 128:


      switch (FUNC_1 (VAR_1)->bits_per_address)
 {
 case 64:
   FUNC_0 ();
 case 32:
   return &VAR_0;
 case 16:
   FUNC_0 ();
 default:
   FUNC_0 ();
 }
    default:
      FUNC_0 ();
    }
  return ((void*)0);
}
