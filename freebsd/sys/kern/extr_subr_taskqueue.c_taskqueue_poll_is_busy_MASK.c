
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqueue {int dummy; } ;
struct task {scalar_t__ ta_pending; } ;


 int FUNC_0 (struct taskqueue*) ;
 int FUNC_1 (struct taskqueue*) ;
 scalar_t__ FUNC_2 (struct taskqueue*,struct task*) ;

int
FUNC_3(struct taskqueue *VAR_0, struct task *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = VAR_1->ta_pending > 0 || FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);

 return (VAR_2);
}
