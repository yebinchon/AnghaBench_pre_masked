
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (int,void*,size_t,int) ;
 int FUNC_2 (struct socket_info*,int *,int ,void*,int) ;

ssize_t FUNC_3(int VAR_5, void *VAR_6, size_t VAR_7, int VAR_8)
{
 int VAR_9;
 struct socket_info *VAR_10 = FUNC_0(VAR_5);

 if (!VAR_10) {
  return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
 }

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9 == -1 && VAR_4 != VAR_0 && VAR_4 != VAR_1) {
  FUNC_2(VAR_10, ((void*)0), VAR_3, ((void*)0), 0);
 } else if (VAR_9 == 0) {
  FUNC_2(VAR_10, ((void*)0), VAR_3, ((void*)0), 0);
 } else {
  FUNC_2(VAR_10, ((void*)0), VAR_2, VAR_6, VAR_9);
 }

 return VAR_9;
}
