
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int family; } ;
struct xfrm_userpolicy_info {int share; int action; int dir; TYPE_1__ sel; } ;




 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct xfrm_userpolicy_info *VAR_2)
{
 switch (VAR_2->share) {
 case 131:
 case 130:
 case 128:
 case 129:
  break;

 default:
  return -VAR_1;
 }

 switch (VAR_2->action) {
 case 133:
 case 132:
  break;

 default:
  return -VAR_1;
 }

 switch (VAR_2->sel.family) {
 case 135:
  break;

 case 134:



  return -VAR_0;


 default:
  return -VAR_1;
 }

 return FUNC_0(VAR_2->dir);
}
