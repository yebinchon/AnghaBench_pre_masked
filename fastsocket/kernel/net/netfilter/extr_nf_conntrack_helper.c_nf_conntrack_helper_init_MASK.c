
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(void)
{
 int VAR_5;

 VAR_3 = 1;
 VAR_2 = FUNC_0(&VAR_3,
        &VAR_4, 0);
 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_1);
 if (VAR_5 < 0)
  goto err1;

 return 0;

err1:
 FUNC_2(VAR_2, VAR_4,
        VAR_3);
 return VAR_5;
}
