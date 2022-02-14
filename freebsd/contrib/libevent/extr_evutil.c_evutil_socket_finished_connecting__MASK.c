
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;
typedef int ev_socklen_t ;
typedef int e ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ,void*,int*) ;

int
FUNC_3(evutil_socket_t VAR_2)
{
 int VAR_3;
 ev_socklen_t VAR_4 = sizeof(VAR_3);

 if (FUNC_2(VAR_2, VAR_0, VAR_1, (void*)&VAR_3, &VAR_4) < 0)
  return -1;

 if (VAR_3) {
  if (FUNC_0(VAR_3))
   return 0;
  FUNC_1(VAR_3);
  return -1;
 }

 return 1;
}
