
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

int
FUNC_4(void)
{
 int VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(&VAR_1);
 if (VAR_4)
  goto out1;
 VAR_4 = FUNC_0(&VAR_2);
 if (VAR_4)
  goto out2;
 return 0;
out2:
 FUNC_1(&VAR_1);
out1:
 FUNC_3(VAR_0);
 return VAR_4;
}
