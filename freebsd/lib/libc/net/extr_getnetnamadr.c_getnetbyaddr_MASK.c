
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct netent {int dummy; } ;
struct netdata {int data; int net; } ;


 struct netdata* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int,int *,int ,int,struct netent**,int*) ;

struct netent *
FUNC_2(uint32_t VAR_0, int VAR_1)
{
 struct netdata *VAR_2;
 struct netent *VAR_3;
 int VAR_4;

 if ((VAR_2 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_0, VAR_1, &VAR_2->net, VAR_2->data, sizeof(VAR_2->data),
     &VAR_3, &VAR_4) != 0)
  return (((void*)0));
 return (VAR_3);
}
