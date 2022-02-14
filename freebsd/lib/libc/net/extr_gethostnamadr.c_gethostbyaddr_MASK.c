
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
struct hostdata {int data; int host; } ;
typedef int socklen_t ;


 struct hostdata* FUNC_0 () ;
 scalar_t__ FUNC_1 (void const*,int ,int,int *,int ,int,struct hostent**,int*) ;

struct hostent *
FUNC_2(const void *VAR_0, socklen_t VAR_1, int VAR_2)
{
 struct hostdata *VAR_3;
 struct hostent *VAR_4;
 int VAR_5;

 if ((VAR_3 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3->host, VAR_3->data,
     sizeof(VAR_3->data), &VAR_4, &VAR_5) != 0)
  return (((void*)0));
 return (VAR_4);
}
