
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int dummy; } ;
struct protodata {int data; int proto; } ;


 struct protodata* FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int *,int ,int,struct protoent**) ;

struct protoent *
FUNC_2(const char *VAR_0)
{
 struct protodata *VAR_1;
 struct protoent *VAR_2;

 if ((VAR_1 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_0, &VAR_1->proto, VAR_1->data, sizeof(VAR_1->data),
     &VAR_2) != 0)
  return (((void*)0));
 return (VAR_2);
}
