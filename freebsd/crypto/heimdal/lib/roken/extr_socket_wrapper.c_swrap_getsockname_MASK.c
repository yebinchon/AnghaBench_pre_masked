
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int myname_len; int myname; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,int ,int ) ;
 int FUNC_2 (int,struct sockaddr*,int *) ;

int FUNC_3(int VAR_0, struct sockaddr *VAR_1, socklen_t *VAR_2)
{
 struct socket_info *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3) {
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 }

 FUNC_1(VAR_1, VAR_3->myname, VAR_3->myname_len);
 *VAR_2 = VAR_3->myname_len;

 return 0;
}
