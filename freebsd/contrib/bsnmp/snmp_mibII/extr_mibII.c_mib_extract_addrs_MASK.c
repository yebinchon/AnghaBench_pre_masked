
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sockaddr {int sa_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

void
FUNC_1(int VAR_1, u_char *VAR_2, struct sockaddr **VAR_3)
{
 u_int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if ((VAR_1 & (1 << VAR_4)) != 0) {
   *VAR_3 = (struct sockaddr *)(void *)VAR_2;
   VAR_2 += FUNC_0((*VAR_3)->sa_len, sizeof(long));
  } else
   *VAR_3 = ((void*)0);
  VAR_3++;
 }
}
