
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(void)
{
 int VAR_6;

 VAR_6 = FUNC_4();
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_12();
 if (VAR_6)
  goto out_conn;
 VAR_6 = FUNC_10();
 if (VAR_6)
  goto out_threads;
 VAR_6 = FUNC_8();
 if (VAR_6)
  goto out_sysctl;
 VAR_6 = FUNC_0(&VAR_3, 1);
 if (VAR_6)
  goto out_stats;
 VAR_6 = FUNC_13(&VAR_2);
 if (VAR_6)
  goto out_proto;

 FUNC_5(VAR_1, VAR_5);
 FUNC_5(VAR_0, VAR_4);

 goto out;

out_proto:
 FUNC_1(&VAR_3);
out_stats:
 FUNC_7();
out_sysctl:
 FUNC_9();
out_threads:
 FUNC_11();
out_conn:
 FUNC_3();
 FUNC_2();
 FUNC_6();
out:
 return VAR_6;
}
