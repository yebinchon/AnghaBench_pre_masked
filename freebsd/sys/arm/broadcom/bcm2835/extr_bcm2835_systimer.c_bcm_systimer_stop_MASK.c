
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct systimer {scalar_t__ enabled; } ;
struct eventtimer {struct systimer* et_priv; } ;



__attribute__((used)) static int
FUNC_0(struct eventtimer *VAR_0)
{
 struct systimer *VAR_1 = VAR_0->et_priv;
 VAR_1->enabled = 0;

 return (0);
}
