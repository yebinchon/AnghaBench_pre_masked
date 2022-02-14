
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,void*,size_t) ;

ssize_t
FUNC_2(int VAR_1, void *VAR_2, size_t VAR_3, off_t VAR_4) {
 off_t VAR_5;
 ssize_t VAR_6;

 if ((VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_0)) == -1)
  return -1;

 if ((VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3)) == -1)
  return -1;

 if (FUNC_0(VAR_1, VAR_5, VAR_0) == -1)
  return -1;

 return VAR_6;
}
