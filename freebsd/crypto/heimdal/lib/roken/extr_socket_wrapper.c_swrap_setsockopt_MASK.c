
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int family; } ;
typedef int socklen_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (int,int,int,void const*,int ) ;

int FUNC_2(int VAR_3, int VAR_4, int VAR_5, const void *VAR_6, socklen_t VAR_7)
{
 struct socket_info *VAR_8 = FUNC_0(VAR_3);

 if (!VAR_8) {
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }

 if (VAR_4 == VAR_1) {
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }

 switch (VAR_8->family) {
 case 128:
  return 0;
 default:
  VAR_2 = VAR_0;
  return -1;
 }
}
