
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int peername_len; int peername; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,int ,int ) ;
 int FUNC_2 (int,struct sockaddr*,int *) ;

int FUNC_3(int VAR_2, struct sockaddr *VAR_3, socklen_t *VAR_4)
{
 struct socket_info *VAR_5 = FUNC_0(VAR_2);

 if (!VAR_5) {
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 }

 if (!VAR_5->peername)
 {
  VAR_1 = VAR_0;
  return -1;
 }

 FUNC_1(VAR_3, VAR_5->peername, VAR_5->peername_len);
 *VAR_4 = VAR_5->peername_len;

 return 0;
}
