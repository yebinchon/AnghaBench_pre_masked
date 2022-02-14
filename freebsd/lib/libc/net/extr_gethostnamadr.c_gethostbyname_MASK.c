
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
struct hostdata {int data; int host; } ;


 struct hostdata* FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int *,int ,int,struct hostent**,int*) ;

struct hostent *
FUNC_2(const char *VAR_0)
{
 struct hostdata *VAR_1;
 struct hostent *VAR_2;
 int VAR_3;

 if ((VAR_1 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_0, &VAR_1->host, VAR_1->data, sizeof(VAR_1->data), &VAR_2,
     &VAR_3) != 0)
  return (((void*)0));
 return (VAR_2);
}
