
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ll {int sll_ifindex; int sll_protocol; int sll_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sll ;
typedef int err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_7 ;
 int FUNC_1 (int,int ,int ,int*,int*) ;
 int FUNC_2 (struct sockaddr_ll*,int ,int) ;
 int FUNC_3 (char*,int ,int,char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_8, int VAR_9, char *VAR_10, int VAR_11)
{
 struct sockaddr_ll VAR_12;
 int VAR_13;
 socklen_t VAR_14 = sizeof(VAR_13);

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sll_family = VAR_0;
 VAR_12.sll_ifindex = VAR_9;
 VAR_12.sll_protocol = VAR_11;

 if (FUNC_0(VAR_8, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) == -1) {
  if (VAR_7 == VAR_1) {







   return VAR_4;
  } else {
   FUNC_3(VAR_10, VAR_2,
       VAR_7, "bind");
   return VAR_3;
  }
 }



 if (FUNC_1(VAR_8, VAR_5, VAR_6, &VAR_13, &VAR_14) == -1) {
  FUNC_3(VAR_10, VAR_2,
      VAR_7, "getsockopt");
  return 0;
 }

 if (VAR_13 == VAR_1) {







  return VAR_4;
 } else if (VAR_13 > 0) {
  FUNC_3(VAR_10, VAR_2,
      VAR_13, "bind");
  return 0;
 }

 return 1;
}
