
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(void)
{
 int VAR_5 = -VAR_0;

 VAR_1 = FUNC_0(VAR_4, VAR_2);
 if (VAR_1 == ((void*)0))
  goto out;

 VAR_5 = FUNC_1(&VAR_3);
 if (VAR_5)
  goto err_pernet;
out:
 return VAR_5;

err_pernet:
 FUNC_2(VAR_1);
 goto out;
}
