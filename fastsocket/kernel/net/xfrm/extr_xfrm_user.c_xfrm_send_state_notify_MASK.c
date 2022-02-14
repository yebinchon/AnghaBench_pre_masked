
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct km_event {int event; } ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct xfrm_state*,struct km_event*) ;
 int FUNC_2 (struct xfrm_state*,struct km_event*) ;
 int FUNC_3 (struct xfrm_state*,struct km_event*) ;
 int FUNC_4 (struct km_event*) ;

__attribute__((used)) static int FUNC_5(struct xfrm_state *VAR_0, struct km_event *VAR_1)
{

 switch (VAR_1->event) {
 case 132:
  return FUNC_2(VAR_0, VAR_1);
 case 130:
  return FUNC_1(VAR_0, VAR_1);
 case 133:
 case 128:
 case 129:
  return FUNC_3(VAR_0, VAR_1);
 case 131:
  return FUNC_4(VAR_1);
 default:
   FUNC_0("xfrm_user: Unknown SA event %d\n", VAR_1->event);
   break;
 }

 return 0;

}
