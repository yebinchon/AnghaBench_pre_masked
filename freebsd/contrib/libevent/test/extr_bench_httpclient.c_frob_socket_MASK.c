
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linger {int l_onoff; scalar_t__ l_linger; } ;
typedef int one ;
typedef int l ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,void*,int) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_3)
{



 int VAR_4 = 1;
 if (FUNC_1(VAR_3, VAR_0, VAR_2, (void*)&VAR_4, sizeof(VAR_4))<0)
  FUNC_0("setsockopt(SO_REUSEADDR)");






}
