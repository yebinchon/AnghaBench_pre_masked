
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ evutil_socket_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 short *VAR_5 = VAR_4;
 if (!VAR_0)
  VAR_1 = 1;
 *VAR_5 = VAR_3;
 FUNC_0(("Recorded %d on socket %d", (int)VAR_3, (int)VAR_2));
}
