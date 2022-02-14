
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 struct hostent* FUNC_0 (void const*,int ,int) ;
 struct hostent* FUNC_1 (void const*,int ,int,int*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct hostent *
FUNC_2(const void *VAR_2, socklen_t VAR_3, int VAR_4)
{
 struct hostent *VAR_5;
 int VAR_6;

 if (VAR_1) {
  VAR_6 = 0;
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6);
  if (VAR_5 == ((void*)0))
   VAR_0 = VAR_6;
 } else
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
