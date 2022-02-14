
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int fd; } ;


 int FUNC_0 (struct socket_info*,int) ;
 struct socket_info* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_0, int VAR_1)
{
 struct socket_info *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_1 == VAR_0)
     return VAR_1;

 VAR_3 = FUNC_1(VAR_0);
 VAR_2 = FUNC_1(VAR_1);

 if (VAR_3 == ((void*)0) && VAR_2 == ((void*)0))
  return FUNC_2(VAR_0, VAR_1);

 VAR_4 = FUNC_2(VAR_3->fd, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;


 if (VAR_2)
         FUNC_3(VAR_1);

 return FUNC_0(VAR_3, VAR_4);
}
