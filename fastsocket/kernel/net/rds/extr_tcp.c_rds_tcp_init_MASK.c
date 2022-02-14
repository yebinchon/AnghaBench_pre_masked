
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_tcp_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_5;

 VAR_2 = FUNC_0("rds_tcp_connection",
           sizeof(struct rds_tcp_connection),
           0, 0, ((void*)0));
 if (!VAR_2) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_5();
 if (VAR_5)
  goto out_slab;

 VAR_5 = FUNC_6(&VAR_4);
 if (VAR_5)
  goto out_recv;

 VAR_5 = FUNC_3();
 if (VAR_5)
  goto out_register;

 FUNC_2(VAR_1, VAR_3);

 goto out;

out_register:
 FUNC_7(&VAR_4);
out_recv:
 FUNC_4();
out_slab:
 FUNC_1(VAR_2);
out:
 return VAR_5;
}
