
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct hapd_interfaces {int global_ctrl_dst; } ;
typedef int socklen_t ;


 int FUNC_0 (int *,struct sockaddr_storage*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct hapd_interfaces *VAR_0,
         struct sockaddr_storage *VAR_1,
         socklen_t VAR_2, char *VAR_3)
{
 return FUNC_0(&VAR_0->global_ctrl_dst, VAR_1, VAR_2,
     VAR_3);
}
