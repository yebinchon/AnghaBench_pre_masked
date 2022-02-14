
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;


 int VAR_0 ;
 struct hostent* FUNC_0 (char const*,int) ;
 struct hostent* FUNC_1 (char const*,int,int ,int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct hostent *
FUNC_2(const char *VAR_3, int VAR_4)
{
 struct hostent *VAR_5;
 int VAR_6;

 if (VAR_2) {
  VAR_6 = 0;
  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_1, &VAR_6);
  if (VAR_5 == ((void*)0))
   VAR_0 = VAR_6;
 } else
  VAR_5 = FUNC_0(VAR_3, VAR_4);

 return (VAR_5);
}
