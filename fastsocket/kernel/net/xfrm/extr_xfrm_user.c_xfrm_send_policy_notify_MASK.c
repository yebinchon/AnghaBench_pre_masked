
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy {int dummy; } ;
struct km_event {int event; } ;







 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct xfrm_policy*,int,struct km_event*) ;
 int FUNC_2 (struct xfrm_policy*,int,struct km_event*) ;
 int FUNC_3 (struct km_event*) ;

__attribute__((used)) static int FUNC_4(struct xfrm_policy *VAR_0, int VAR_1, struct km_event *VAR_2)
{

 switch (VAR_2->event) {
 case 130:
 case 128:
 case 132:
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 case 131:
  return FUNC_3(VAR_2);
 case 129:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 default:
  FUNC_0("xfrm_user: Unknown Policy event %d\n", VAR_2->event);
 }

 return 0;

}
