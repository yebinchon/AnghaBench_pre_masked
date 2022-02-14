
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opts; int timeout; int max_terminate; int max_configure; int max_failure; int their_mru; int mru; scalar_t__ protos; scalar_t__ magic; } ;
struct sppp {int * ch; TYPE_1__ lcp; scalar_t__* pp_rseq; scalar_t__* pp_seq; scalar_t__* fail_counter; int * state; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct sppp *VAR_5)
{
 VAR_5->lcp.opts = (1 << VAR_1);
 VAR_5->lcp.magic = 0;
 VAR_5->state[VAR_0] = VAR_3;
 VAR_5->fail_counter[VAR_0] = 0;
 VAR_5->pp_seq[VAR_0] = 0;
 VAR_5->pp_rseq[VAR_0] = 0;
 VAR_5->lcp.protos = 0;
 VAR_5->lcp.mru = VAR_5->lcp.their_mru = VAR_2;


 VAR_5->lcp.timeout = 3 * VAR_4;
 VAR_5->lcp.max_terminate = 2;
 VAR_5->lcp.max_configure = 10;
 VAR_5->lcp.max_failure = 10;
  FUNC_0(&VAR_5->ch[VAR_0], 1);
}
