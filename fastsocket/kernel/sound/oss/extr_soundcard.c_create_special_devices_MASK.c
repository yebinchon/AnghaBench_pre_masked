
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_1,VAR_2;
 VAR_1=FUNC_0(&VAR_0, 1);
 if(VAR_1==-1)
  goto bad;
 VAR_2=FUNC_0(&VAR_0, 8);
 if(VAR_2!=-1)
  return 0;
 FUNC_1(1);
bad:
 return -1;
}
