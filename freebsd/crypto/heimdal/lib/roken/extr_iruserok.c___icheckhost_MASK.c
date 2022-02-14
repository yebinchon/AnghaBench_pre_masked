
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_long ;
struct hostent {char** h_addr_list; } ;


 struct hostent* FUNC_0 (char const*) ;
 unsigned int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned int*,char*,int) ;

__attribute__((used)) static
int
FUNC_4(unsigned VAR_0, const char *VAR_1)
{
 struct hostent *VAR_2;
 u_long VAR_3;
 char **VAR_4;


 if (FUNC_2((unsigned char)*VAR_1)
     && (long)(VAR_3 = FUNC_1(VAR_1)) != -1)
  return (VAR_0 == VAR_3);


 if ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0))
  return (0);


 for (VAR_4 = VAR_2->h_addr_list; *VAR_4; ++VAR_4)
         if (FUNC_3(&VAR_0, *VAR_4, sizeof(u_long)) == 0)
   return (1);


 return (0);
}
