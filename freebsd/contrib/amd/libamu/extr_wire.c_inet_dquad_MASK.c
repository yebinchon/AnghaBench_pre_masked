
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int) ;

char *
FUNC_2(char *VAR_0, size_t VAR_1, u_long VAR_2)
{
  VAR_2 = FUNC_0(VAR_2);
  FUNC_1(VAR_0, VAR_1, "%ld.%ld.%ld.%ld",
     ((VAR_2 >> 24) & 0xff),
     ((VAR_2 >> 16) & 0xff),
     ((VAR_2 >> 8) & 0xff),
     ((VAR_2 >> 0) & 0xff));
  return VAR_0;
}
