
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int sa_family_t ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int,struct sockaddr*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr_storage*,char,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,int ,int ) ;

int
FUNC_7(int *VAR_5, sa_family_t VAR_6)
{
 struct sockaddr_storage VAR_7;
 struct sockaddr *VAR_8;
 u_int16_t *VAR_9;
 int VAR_10;
 socklen_t VAR_11;

 FUNC_4(&VAR_7, '\0', sizeof VAR_7);
 VAR_8 = (struct sockaddr *)&VAR_7;

 switch (VAR_6) {
 case 129:
  VAR_11 = sizeof(struct sockaddr_in);
  VAR_9 = &((struct sockaddr_in *)VAR_8)->sin_port;
  break;
 case 128:
  VAR_11 = sizeof(struct sockaddr_in6);
  VAR_9 = &((struct sockaddr_in6 *)VAR_8)->sin6_port;
  break;
 default:
  VAR_4 = VAR_1;
  return (-1);
 }
 VAR_8->sa_family = VAR_6;

 VAR_10 = FUNC_6(VAR_6, VAR_3, 0);
 if (VAR_10 < 0)
  return (-1);

 *VAR_9 = FUNC_3(*VAR_5);
 if (*VAR_5 < VAR_2 - 1) {
  if (FUNC_0(VAR_10, VAR_8, VAR_11) >= 0)
   return (VAR_10);
  if (VAR_4 != VAR_0) {
   (void)FUNC_2(VAR_10);
   return (-1);
  }
 }

 *VAR_9 = 0;
 VAR_8->sa_family = VAR_6;
 if (FUNC_1(VAR_10, VAR_8) == -1) {
  (void)FUNC_2(VAR_10);
  return (-1);
 }
 *VAR_5 = FUNC_5(*VAR_9);
 return (VAR_10);
}
