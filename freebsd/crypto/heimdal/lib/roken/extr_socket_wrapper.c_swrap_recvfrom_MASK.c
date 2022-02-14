
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int un_addr ;
struct socket_info {int family; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;


 int VAR_0 ;
 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_un*,int ,int) ;
 int FUNC_2 (int,void*,size_t,int,struct sockaddr*,int*) ;
 int FUNC_3 (struct socket_info*,struct sockaddr_un*,int,int ,struct sockaddr*,int*) ;
 int FUNC_4 (struct socket_info*,struct sockaddr*,int ,void*,int) ;

ssize_t FUNC_5(int VAR_1, void *VAR_2, size_t VAR_3, int VAR_4, struct sockaddr *VAR_5, socklen_t *VAR_6)
{
 struct sockaddr_un VAR_7;
 socklen_t VAR_8 = sizeof(VAR_7);
 int VAR_9;
 struct socket_info *VAR_10 = FUNC_0(VAR_1);

 if (!VAR_10) {
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }


 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, (struct sockaddr *)&VAR_7, &VAR_8);
 if (VAR_9 == -1)
  return VAR_9;

 if (FUNC_3(VAR_10, &VAR_7, VAR_8,
         VAR_10->family, VAR_5, VAR_6) == -1) {
  return -1;
 }

 FUNC_4(VAR_10, VAR_5, VAR_0, VAR_2, VAR_9);

 return VAR_9;
}
