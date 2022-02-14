
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (scalar_t__,int *,char*,int) ;
 char** VAR_3 ;

const char *
FUNC_1(struct sockaddr *VAR_4)
{
 static int VAR_5 = 0;


 VAR_5 = (VAR_5 + 1) % VAR_2;
 VAR_3[VAR_5][0] = '\0';

 if (VAR_4->sa_family == VAR_0) {
  struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_4;

  return (FUNC_0(VAR_0, &VAR_6->sin_addr, VAR_3[VAR_5],
      sizeof VAR_3[0]));
 }

 if (VAR_4->sa_family == VAR_1) {
  struct sockaddr_in6 *VAR_7 = (struct sockaddr_in6 *)VAR_4;

  return (FUNC_0(VAR_1, &VAR_7->sin6_addr, VAR_3[VAR_5],
      sizeof VAR_3[0]));
 }

 return (((void*)0));
}
