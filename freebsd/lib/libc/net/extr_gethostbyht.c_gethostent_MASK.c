
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
struct hostdata {int data; int host; } ;


 struct hostdata* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int,struct hostent**,int*) ;

struct hostent *
FUNC_2(void)
{
 struct hostdata *VAR_0;
 struct hostent *VAR_1;
 int VAR_2;

 if ((VAR_0 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 if (FUNC_1(&VAR_0->host, VAR_0->data, sizeof(VAR_0->data), &VAR_1,
     &VAR_2) != 0)
  return (((void*)0));
 return (VAR_1);
}
