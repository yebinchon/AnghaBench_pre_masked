
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int (* hspan ) (struct termp const*,struct roffsu const*) ;} ;
struct roffsu {int dummy; } ;


 int FUNC_0 (struct termp const*,struct roffsu const*) ;

int
FUNC_1(const struct termp *VAR_0, const struct roffsu *VAR_1)
{

 return (*VAR_0->hspan)(VAR_0, VAR_1);
}
