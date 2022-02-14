
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pt_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {int pm_type; } ;





 int FUNC_0 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static __inline pt_entry_t
FUNC_1(pmap_t VAR_1)
{
 pt_entry_t VAR_2;

 switch (VAR_1->pm_type) {
 case 128:
  VAR_2 = VAR_0;
  break;
 case 129:
 case 130:
  VAR_2 = 0;
  break;
 default:
  FUNC_0("pmap_global_bit: invalid pm_type %d", VAR_1->pm_type);
 }

 return (VAR_2);
}
