
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int pending_u; int sending_u; int max_slots; int bklog_u; int req_u; int bad_xids; int recvs; int sends; int connect_time; int connect_count; int bind_count; } ;
struct rpc_xprt {TYPE_1__ stat; scalar_t__ last_used; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,long,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_2(struct rpc_xprt *VAR_2, struct seq_file *VAR_3)
{
 long VAR_4 = 0;

 if (FUNC_1(VAR_2))
  VAR_4 = (long)(VAR_1 - VAR_2->last_used) / VAR_0;

 FUNC_0(VAR_3, "\txprt:\tlocal %lu %lu %lu %ld %lu %lu %lu "
   "%llu %llu %lu %llu %llu\n",
   VAR_2->stat.bind_count,
   VAR_2->stat.connect_count,
   VAR_2->stat.connect_time,
   VAR_4,
   VAR_2->stat.sends,
   VAR_2->stat.recvs,
   VAR_2->stat.bad_xids,
   VAR_2->stat.req_u,
   VAR_2->stat.bklog_u,
   VAR_2->stat.max_slots,
   VAR_2->stat.sending_u,
   VAR_2->stat.pending_u);
}
