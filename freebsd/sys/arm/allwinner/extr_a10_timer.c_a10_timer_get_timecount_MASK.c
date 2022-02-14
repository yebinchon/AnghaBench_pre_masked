
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timecounter {int * tc_priv; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static u_int
FUNC_1(struct timecounter *VAR_0)
{

 if (VAR_0->tc_priv == ((void*)0))
  return (0);

 return ((u_int)FUNC_0(VAR_0->tc_priv));
}
