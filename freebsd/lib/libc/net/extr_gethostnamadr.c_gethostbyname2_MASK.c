
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
struct hostdata {int data; int host; } ;


 struct hostdata* FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int,int *,int ,int,struct hostent**,int*) ;

struct hostent *
FUNC_2(const char *VAR_0, int VAR_1)
{
 struct hostdata *VAR_2;
 struct hostent *VAR_3;
 int VAR_4;

 if ((VAR_2 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_0, VAR_1, &VAR_2->host, VAR_2->data, sizeof(VAR_2->data),
     &VAR_3, &VAR_4) != 0)
  return (((void*)0));
 return (VAR_3);
}
