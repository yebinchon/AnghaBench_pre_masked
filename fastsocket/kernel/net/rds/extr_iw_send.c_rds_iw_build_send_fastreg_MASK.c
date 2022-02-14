
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int length; int page_list_len; int iova_start; int access_flags; int page_shift; TYPE_1__* page_list; int rkey; } ;
struct TYPE_8__ {TYPE_2__ fast_reg; } ;
struct TYPE_9__ {TYPE_3__ wr; int opcode; } ;
struct rds_iw_send_work {int s_remap_count; TYPE_5__* s_mr; TYPE_4__ s_wr; TYPE_1__* s_page_list; } ;
struct rds_iw_device {int dummy; } ;
struct rds_iw_connection {int dummy; } ;
struct TYPE_10__ {int rkey; } ;
struct TYPE_6__ {int max_page_list_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_2(struct rds_iw_device *VAR_3, struct rds_iw_connection *VAR_4, struct rds_iw_send_work *VAR_5, int VAR_6, int VAR_7, u64 VAR_8)
{
 FUNC_0(VAR_6 > VAR_5->s_page_list->max_page_list_len);





 VAR_5->s_wr.opcode = VAR_1;
 VAR_5->s_wr.wr.fast_reg.length = VAR_7;
 VAR_5->s_wr.wr.fast_reg.rkey = VAR_5->s_mr->rkey;
 VAR_5->s_wr.wr.fast_reg.page_list = VAR_5->s_page_list;
 VAR_5->s_wr.wr.fast_reg.page_list_len = VAR_6;
 VAR_5->s_wr.wr.fast_reg.page_shift = VAR_2;
 VAR_5->s_wr.wr.fast_reg.access_flags = VAR_0;
 VAR_5->s_wr.wr.fast_reg.iova_start = VAR_8;

 FUNC_1(VAR_5->s_mr, VAR_5->s_remap_count++);
}
