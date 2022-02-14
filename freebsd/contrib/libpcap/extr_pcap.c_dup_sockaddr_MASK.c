
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 struct sockaddr* FUNC_0 (size_t) ;
 struct sockaddr* FUNC_1 (struct sockaddr*,struct sockaddr*,size_t) ;

__attribute__((used)) static struct sockaddr *
FUNC_2(struct sockaddr *VAR_0, size_t VAR_1)
{
 struct sockaddr *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0))
  return (((void*)0));
 return (FUNC_1(VAR_2, VAR_0, VAR_1));
}
