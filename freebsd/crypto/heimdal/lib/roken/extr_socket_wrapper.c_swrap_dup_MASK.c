
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int fd; } ;


 int FUNC_0 (struct socket_info*,int) ;
 struct socket_info* FUNC_1 (int) ;
 int FUNC_2 (int) ;

int FUNC_3(int VAR_0)
{
 struct socket_info *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0))
  return FUNC_2(VAR_0);

 VAR_2 = FUNC_2(VAR_1->fd);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_1, VAR_2);
}
