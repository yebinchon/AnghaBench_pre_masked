
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int dummy; } ;


 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

int FUNC_2(int VAR_0, int VAR_1)
{
 int VAR_2;
 struct socket_info *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3) {
  return FUNC_1(VAR_0, VAR_1);
 }

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 return VAR_2;
}
