
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int dummy; } ;
struct protodata {int data; int proto; } ;


 struct protodata* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int,struct protoent**) ;

struct protoent *
FUNC_2(void)
{
 struct protodata *VAR_0;
 struct protoent *VAR_1;

 if ((VAR_0 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 if (FUNC_1(&VAR_0->proto, VAR_0->data, sizeof(VAR_0->data), &VAR_1) != 0)
  return (((void*)0));
 return (VAR_1);
}
