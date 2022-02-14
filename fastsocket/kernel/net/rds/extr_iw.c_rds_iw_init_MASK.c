
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (int *) ;

int FUNC_9(void)
{
 int VAR_5;

 FUNC_0(&VAR_2);

 VAR_5 = FUNC_1(&VAR_1);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_7();
 if (VAR_5)
  goto out_ibreg;

 VAR_5 = FUNC_5();
 if (VAR_5)
  goto out_sysctl;

 VAR_5 = FUNC_8(&VAR_4);
 if (VAR_5)
  goto out_recv;

 FUNC_3(VAR_0, VAR_3);

 goto out;

out_recv:
 FUNC_4();
out_sysctl:
 FUNC_6();
out_ibreg:
 FUNC_2(&VAR_1);
out:
 return VAR_5;
}
