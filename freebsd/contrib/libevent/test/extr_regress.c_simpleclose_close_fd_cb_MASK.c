
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 evutil_socket_t **VAR_4 = VAR_3;
 FUNC_0(("Closing"));
 FUNC_1(*VAR_4[0]);
 FUNC_1(*VAR_4[1]);
 *VAR_4[0] = -1;
 *VAR_4[1] = -1;
 VAR_0 = 1;
}
