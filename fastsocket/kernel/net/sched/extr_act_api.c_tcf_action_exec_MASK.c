
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct tc_action {struct tc_action* next; TYPE_1__* ops; } ;
struct sk_buff {int tc_verd; } ;
struct TYPE_2__ {int (* act ) (struct sk_buff*,struct tc_action*,struct tcf_result*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct sk_buff*,struct tc_action*,struct tcf_result*) ;

int FUNC_4(struct sk_buff *VAR_5, struct tc_action *VAR_6,
      struct tcf_result *VAR_7)
{
 struct tc_action *VAR_8;
 int VAR_9 = -1;

 if (VAR_5->tc_verd & VAR_4) {
  VAR_5->tc_verd = FUNC_1(VAR_5->tc_verd);
  VAR_9 = VAR_0;
  goto exec_done;
 }
 while ((VAR_8 = VAR_6) != ((void*)0)) {
repeat:
  if (VAR_8->ops && VAR_8->ops->act) {
   VAR_9 = VAR_8->ops->act(VAR_5, VAR_8, VAR_7);
   if (VAR_3 & VAR_5->tc_verd) {

    VAR_5->tc_verd = FUNC_2(VAR_5->tc_verd);
    VAR_5->tc_verd = FUNC_0(VAR_5->tc_verd);
   }
   if (VAR_9 == VAR_2)
    goto repeat;
   if (VAR_9 != VAR_1)
    goto exec_done;
  }
  VAR_6 = VAR_8->next;
 }
exec_done:
 return VAR_9;
}
