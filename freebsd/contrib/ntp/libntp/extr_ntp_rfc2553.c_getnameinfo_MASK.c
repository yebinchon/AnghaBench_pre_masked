
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct hostent {int h_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hostent* FUNC_0 (char const*,int,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int ,size_t) ;

int
FUNC_2 (const struct sockaddr *VAR_6, u_int VAR_7, char *VAR_8,
 size_t VAR_9, char *VAR_10, size_t VAR_11, int VAR_12)
{
 struct hostent *VAR_13;

 if (VAR_6->sa_family != VAR_0)
  return (VAR_3);
 VAR_13 = FUNC_0(
     (const char *)&((const struct sockaddr_in *)VAR_6)->sin_addr,
     4, VAR_0);
 if (VAR_13 == ((void*)0)) {
  if (VAR_5 == VAR_4)
   return (VAR_1);
  else
   return (VAR_2);
 }
 if (VAR_8 != ((void*)0) && VAR_9 > 0)
  FUNC_1(VAR_8, VAR_13->h_name, VAR_9);
 return (0);
}
