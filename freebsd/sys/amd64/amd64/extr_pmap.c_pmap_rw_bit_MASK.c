
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pt_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {int pm_type; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static __inline pt_entry_t
FUNC_2(pmap_t VAR_3)
{
 pt_entry_t VAR_4;

 switch (VAR_3->pm_type) {
 case 128:
 case 129:
  VAR_4 = VAR_2;
  break;
 case 130:
  if (FUNC_1(VAR_3))
   VAR_4 = VAR_0;
  else
   VAR_4 = VAR_1;
  break;
 default:
  FUNC_0("pmap_rw_bit: invalid pm_type %d", VAR_3->pm_type);
 }

 return (VAR_4);
}
