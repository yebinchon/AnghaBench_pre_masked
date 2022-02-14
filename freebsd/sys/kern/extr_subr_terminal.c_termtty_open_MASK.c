
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct terminal {TYPE_1__* tm_class; } ;
struct TYPE_2__ {int (* tc_opened ) (struct terminal*,int) ;} ;


 int FUNC_0 (struct terminal*,int) ;
 struct terminal* FUNC_1 (struct tty*) ;

__attribute__((used)) static int
FUNC_2(struct tty *VAR_0)
{
 struct terminal *VAR_1 = FUNC_1(VAR_0);

 VAR_1->tm_class->tc_opened(VAR_1, 1);
 return (0);
}
