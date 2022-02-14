
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(evutil_socket_t VAR_2)
{



 if (FUNC_2(VAR_2, VAR_0, VAR_1) == -1) {
  FUNC_0("fcntl(%d, F_SETFL)", VAR_2);
  return -1;
 }
 return 0;

}
