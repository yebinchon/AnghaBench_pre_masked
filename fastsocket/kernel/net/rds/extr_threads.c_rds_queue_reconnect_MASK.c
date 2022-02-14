
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {unsigned long c_reconnect_jiffies; int c_conn_w; int c_faddr; int c_laddr; int c_flags; } ;
typedef int rand ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,int) ;
 unsigned long FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct rds_connection *VAR_4)
{
 unsigned long VAR_5;

 FUNC_3("conn %p for %pI4 to %pI4 reconnect jiffies %lu\n",
   VAR_4, &VAR_4->c_laddr, &VAR_4->c_faddr,
   VAR_4->c_reconnect_jiffies);

 FUNC_4(VAR_0, &VAR_4->c_flags);
 if (VAR_4->c_reconnect_jiffies == 0) {
  VAR_4->c_reconnect_jiffies = VAR_2;
  FUNC_2(VAR_3, &VAR_4->c_conn_w, 0);
  return;
 }

 FUNC_0(&VAR_5, sizeof(VAR_5));
 FUNC_3("%lu delay %lu ceil conn %p for %pI4 -> %pI4\n",
   VAR_5 % VAR_4->c_reconnect_jiffies, VAR_4->c_reconnect_jiffies,
   VAR_4, &VAR_4->c_laddr, &VAR_4->c_faddr);
 FUNC_2(VAR_3, &VAR_4->c_conn_w,
      VAR_5 % VAR_4->c_reconnect_jiffies);

 VAR_4->c_reconnect_jiffies = FUNC_1(VAR_4->c_reconnect_jiffies * 2,
     VAR_1);
}
