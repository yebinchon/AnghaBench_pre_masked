
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct terminal {TYPE_1__* tm_class; } ;
struct consdev {struct terminal* cn_arg; } ;
struct TYPE_2__ {int (* tc_cngrab ) (struct terminal*) ;} ;


 int FUNC_0 (struct terminal*) ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_0)
{
 struct terminal *VAR_1 = VAR_0->cn_arg;

 VAR_1->tm_class->tc_cngrab(VAR_1);
}
