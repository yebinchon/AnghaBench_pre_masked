
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int boolean_t ;
struct TYPE_3__ {int pm_type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(pmap_t VAR_3, boolean_t VAR_4)
{
 int VAR_5;

 switch (VAR_3->pm_type) {
 case 128:
 case 129:
  VAR_5 = VAR_4 ? VAR_1 : VAR_2;
  break;
 case 130:
  VAR_5 = VAR_0 | FUNC_0(0x7);
  break;
 default:
  FUNC_1("pmap_cache_mask: invalid pm_type %d", VAR_3->pm_type);
 }

 return (VAR_5);
}
