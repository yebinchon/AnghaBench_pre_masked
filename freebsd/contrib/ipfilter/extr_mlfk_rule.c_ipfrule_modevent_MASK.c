
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_2__ {int ipf_refcnt; } ;


 int VAR_0 ;


 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(module_t VAR_2, int VAR_3, void *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_3)
 {
 case 129 :
  VAR_5 = FUNC_0();
  if (!VAR_5)
   VAR_1.ipf_refcnt++;
  break;
 case 128 :
  VAR_5 = FUNC_1();
  if (!VAR_5)
   VAR_1.ipf_refcnt--;
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }
 return VAR_5;
}
