
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_0;

 VAR_0 = FUNC_3();
 if (VAR_0)
  goto out;

 VAR_0 = FUNC_2();
 if (VAR_0)
  goto err_iw_init;

 VAR_0 = FUNC_0();
 if (VAR_0)
  goto err_ib_init;

 goto out;

err_ib_init:
 FUNC_1();
err_iw_init:
 FUNC_4();
out:
 return VAR_0;
}
