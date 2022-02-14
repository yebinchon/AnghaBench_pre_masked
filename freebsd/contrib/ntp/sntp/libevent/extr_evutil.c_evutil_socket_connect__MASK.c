
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
typedef scalar_t__ evutil_socket_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

int
FUNC_7(evutil_socket_t *VAR_1, struct sockaddr *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (*VAR_1 < 0) {
  if ((*VAR_1 = FUNC_6(VAR_2->sa_family, VAR_0, 0)) < 0)
   goto err;
  VAR_4 = 1;
  if (FUNC_4(*VAR_1) < 0) {
   goto err;
  }
 }

 if (FUNC_2(*VAR_1, VAR_2, VAR_3) < 0) {
  int VAR_5 = FUNC_5(*VAR_1);
  if (FUNC_1(VAR_5))
   return 0;
  if (FUNC_0(VAR_5))
   return 2;
  goto err;
 } else {
  return 1;
 }

err:
 if (VAR_4) {
  FUNC_3(*VAR_1);
  *VAR_1 = -1;
 }
 return -1;
}
