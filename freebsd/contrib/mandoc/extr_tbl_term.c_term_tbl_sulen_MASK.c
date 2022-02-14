
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int dummy; } ;
struct roffsu {int dummy; } ;


 int FUNC_0 (struct termp const*,struct roffsu const*) ;

__attribute__((used)) static size_t
FUNC_1(const struct roffsu *VAR_0, void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0((const struct termp *)VAR_1, VAR_0);
 return VAR_2 > 0 ? VAR_2 : 0;
}
