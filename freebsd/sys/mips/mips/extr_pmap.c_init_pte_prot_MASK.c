
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef int pt_entry_t ;
struct TYPE_3__ {int oflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static pt_entry_t
FUNC_0(vm_page_t VAR_5, vm_prot_t VAR_6, vm_prot_t VAR_7)
{
 pt_entry_t VAR_8;

 if (!(VAR_7 & VAR_3))
  VAR_8 = VAR_2 | VAR_1;
 else if ((VAR_5->oflags & VAR_4) == 0) {
  if ((VAR_6 & VAR_3) != 0)
   VAR_8 = VAR_2 | VAR_0;
  else
   VAR_8 = VAR_2;
 } else

  VAR_8 = VAR_2 | VAR_0;
 return (VAR_8);
}
