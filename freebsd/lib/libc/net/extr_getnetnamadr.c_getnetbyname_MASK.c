
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netent {int dummy; } ;
struct netdata {int data; int net; } ;


 struct netdata* FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int *,int ,int,struct netent**,int*) ;

struct netent *
FUNC_2(const char *VAR_0)
{
 struct netdata *VAR_1;
 struct netent *VAR_2;
 int VAR_3;

 if ((VAR_1 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_0, &VAR_1->net, VAR_1->data, sizeof(VAR_1->data), &VAR_2,
     &VAR_3) != 0)
  return (((void*)0));
 return (VAR_2);
}
