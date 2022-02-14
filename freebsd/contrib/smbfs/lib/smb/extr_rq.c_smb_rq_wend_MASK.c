
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mb_count; } ;
struct smb_rq {int rq_wcount; TYPE_1__ rq_rq; } ;


 int FUNC_0 (char*,int ) ;

void
FUNC_1(struct smb_rq *VAR_0)
{
 if (VAR_0->rq_rq.mb_count & 1)
  FUNC_0("smbrq_wend: odd word count\n", 0);
 VAR_0->rq_wcount = VAR_0->rq_rq.mb_count / 2;
 VAR_0->rq_rq.mb_count = 0;
}
