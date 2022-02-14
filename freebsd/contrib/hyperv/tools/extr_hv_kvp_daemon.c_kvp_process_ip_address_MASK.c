
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int,int *,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_5,
    int VAR_6, char *VAR_7,
    int VAR_8, int *VAR_9)
{
 struct sockaddr_in *VAR_10;
 struct sockaddr_in6 *VAR_11;
 int VAR_12;
 char VAR_13[50];
 const char *VAR_14;

 if (VAR_6 == VAR_0) {
  VAR_10 = (struct sockaddr_in *)VAR_5;
  VAR_14 = FUNC_0(VAR_6, &VAR_10->sin_addr, VAR_13, 50);
  VAR_12 = VAR_3;
 } else {
  VAR_11 = (struct sockaddr_in6 *)VAR_5;
  VAR_14 = FUNC_0(VAR_6, &VAR_11->sin6_addr.s6_addr, VAR_13, 50);
  VAR_12 = VAR_2;
 }

 if ((VAR_8 - *VAR_9) < VAR_12 + 1) {
  return (VAR_1);
 }
 if (VAR_14 == ((void*)0)) {
  FUNC_2(VAR_7, "inet_ntop failed\n", VAR_8);
  return (VAR_4);
 }
 if (*VAR_9 == 0) {
  FUNC_2(VAR_7, VAR_13, VAR_8);
 } else{
  FUNC_1(VAR_7, VAR_13, VAR_8);
 }
 FUNC_1(VAR_7, ";", VAR_8);

 *VAR_9 += FUNC_3(VAR_14) + 1;
 return (0);
}
