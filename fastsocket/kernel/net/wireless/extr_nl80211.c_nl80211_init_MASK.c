
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(void)
{
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_1,
  VAR_4, FUNC_0(VAR_4));
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(&VAR_1, &VAR_0);
 if (VAR_8)
  goto err_out;

 VAR_8 = FUNC_2(&VAR_1, &VAR_6);
 if (VAR_8)
  goto err_out;

 VAR_8 = FUNC_2(&VAR_1, &VAR_5);
 if (VAR_8)
  goto err_out;

 VAR_8 = FUNC_2(&VAR_1, &VAR_2);
 if (VAR_8)
  goto err_out;







 VAR_8 = FUNC_4(&VAR_3);
 if (VAR_8)
  goto err_out;

 return 0;
 err_out:
 FUNC_3(&VAR_1);
 return VAR_8;
}
