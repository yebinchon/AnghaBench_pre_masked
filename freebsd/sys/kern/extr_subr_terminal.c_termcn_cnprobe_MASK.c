
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct terminal {TYPE_1__* tm_class; struct consdev* consdev; } ;
struct consdev {int cn_pri; struct terminal* cn_arg; } ;
struct TYPE_2__ {int (* tc_cnprobe ) (struct terminal*,struct consdev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct terminal*,struct consdev*) ;
 int FUNC_1 (struct terminal*) ;

__attribute__((used)) static void
FUNC_2(struct consdev *VAR_1)
{
 struct terminal *VAR_2 = VAR_1->cn_arg;

 if (VAR_2 == ((void*)0)) {
  VAR_1->cn_pri = VAR_0;
  return;
 }

 VAR_2->consdev = VAR_1;
 FUNC_1(VAR_2);

 VAR_2->tm_class->tc_cnprobe(VAR_2, VAR_1);
}
