
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct terminal {TYPE_1__* tm_class; } ;
struct TYPE_2__ {int (* tc_param ) (struct terminal*,int,unsigned int) ;} ;


 int FUNC_0 (struct terminal*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, int VAR_1, unsigned int VAR_2)
{
 struct terminal *VAR_3 = VAR_0;

 VAR_3->tm_class->tc_param(VAR_3, VAR_1, VAR_2);
}
