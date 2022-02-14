
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct Qdisc_ops {int owner; int id; struct Qdisc_ops* next; } ;


 scalar_t__ FUNC_0 (struct nlattr*,int ) ;
 struct Qdisc_ops* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct Qdisc_ops *FUNC_4(struct nlattr *VAR_2)
{
 struct Qdisc_ops *VAR_3 = ((void*)0);

 if (VAR_2) {
  FUNC_1(&VAR_1);
  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next) {
   if (FUNC_0(VAR_2, VAR_3->id) == 0) {
    if (!FUNC_3(VAR_3->owner))
     VAR_3 = ((void*)0);
    break;
   }
  }
  FUNC_2(&VAR_1);
 }
 return VAR_3;
}
