
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto_ops {int owner; int kind; struct tcf_proto_ops* next; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nlattr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tcf_proto_ops* VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct tcf_proto_ops *FUNC_4(struct nlattr *VAR_2)
{
 struct tcf_proto_ops *VAR_3 = ((void*)0);

 if (VAR_2) {
  FUNC_1(&VAR_0);
  for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
   if (FUNC_0(VAR_2, VAR_3->kind) == 0) {
    if (!FUNC_3(VAR_3->owner))
     VAR_3 = ((void*)0);
    break;
   }
  }
  FUNC_2(&VAR_0);
 }
 return VAR_3;
}
