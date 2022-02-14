
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (int,void const*,size_t,int) ;
 int FUNC_2 (struct socket_info*,int *,int ,void const*,int) ;

ssize_t FUNC_3(int VAR_2, const void *VAR_3, size_t VAR_4, int VAR_5)
{
 int VAR_6;
 struct socket_info *VAR_7 = FUNC_0(VAR_2);

 if (!VAR_7) {
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_6 == -1) {
  FUNC_2(VAR_7, ((void*)0), VAR_0, VAR_3, VAR_4);
  FUNC_2(VAR_7, ((void*)0), VAR_1, ((void*)0), 0);
 } else {
  FUNC_2(VAR_7, ((void*)0), VAR_0, VAR_3, VAR_6);
 }

 return VAR_6;
}
