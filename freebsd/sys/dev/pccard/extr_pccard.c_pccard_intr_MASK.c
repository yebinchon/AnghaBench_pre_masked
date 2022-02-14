
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_function {int intr_handler_arg; int (* intr_handler ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct pccard_function *VAR_1 = (struct pccard_function*) VAR_0;

 VAR_1->intr_handler(VAR_1->intr_handler_arg);
}
