
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct hostent {scalar_t__ h_addrtype; scalar_t__ h_length; char** h_addr_list; } ;
typedef int align ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*) ;

void
FUNC_1(struct hostent *VAR_4, char **VAR_5, char *VAR_6) {
 char **VAR_7;

 if (VAR_4->h_addrtype != VAR_0 || VAR_4->h_length != VAR_3)
  return;
 VAR_4->h_addrtype = VAR_1;
 VAR_4->h_length = VAR_2;
 for (VAR_7 = VAR_4->h_addr_list; *VAR_7; VAR_7++) {
  int VAR_8 = (u_long)*VAR_5 % sizeof(align);

  if (VAR_8 != 0)
   VAR_8 = sizeof(align) - VAR_8;

  if ((VAR_6 - *VAR_5) < (VAR_8 + VAR_2)) {

   *VAR_7 = ((void*)0);
   return;
  }
  *VAR_5 += VAR_8;
  FUNC_0(*VAR_7, *VAR_5);
  *VAR_7 = *VAR_5;
  *VAR_5 += VAR_2;
 }
}
