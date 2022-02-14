
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int dummy; } ;
struct tcf_proto {scalar_t__ protocol; int (* classify ) (struct sk_buff*,struct tcf_proto*,struct tcf_result*) ;struct tcf_proto* next; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ tc_verd; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct tcf_proto*,struct tcf_result*) ;

int FUNC_3(struct sk_buff *VAR_2, struct tcf_proto *VAR_3,
         struct tcf_result *VAR_4)
{
 __be16 VAR_5 = VAR_2->protocol;
 int VAR_6 = 0;

 for (; VAR_3; VAR_3 = VAR_3->next) {
  if ((VAR_3->protocol == VAR_5 ||
       VAR_3->protocol == FUNC_1(VAR_0)) &&
      (VAR_6 = VAR_3->classify(VAR_2, VAR_3, VAR_4)) >= 0) {




   return VAR_6;
  }
 }
 return -1;
}
