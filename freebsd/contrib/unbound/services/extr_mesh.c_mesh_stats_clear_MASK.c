
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct mesh_area {scalar_t__ ans_nodata; int * ans_rcode; scalar_t__ ans_bogus; scalar_t__ ans_secure; int histogram; scalar_t__ stats_dropped; scalar_t__ stats_jostled; TYPE_1__ replies_sum_wait; scalar_t__ replies_sent; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct mesh_area* VAR_0)
{
 if(!VAR_0)
  return;
 VAR_0->replies_sent = 0;
 VAR_0->replies_sum_wait.tv_sec = 0;
 VAR_0->replies_sum_wait.tv_usec = 0;
 VAR_0->stats_jostled = 0;
 VAR_0->stats_dropped = 0;
 FUNC_1(VAR_0->histogram);
 VAR_0->ans_secure = 0;
 VAR_0->ans_bogus = 0;
 FUNC_0(&VAR_0->ans_rcode[0], 0, sizeof(size_t)*16);
 VAR_0->ans_nodata = 0;
}
