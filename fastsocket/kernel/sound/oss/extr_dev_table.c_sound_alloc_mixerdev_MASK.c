
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

int FUNC_1(void)
{
 int VAR_2 = FUNC_0(&VAR_1, -1);
 if(VAR_2==-1)
  return -1;
 VAR_2>>=4;
 if(VAR_2>=VAR_0)
  VAR_0 = VAR_2 + 1;
 return VAR_2;
}
