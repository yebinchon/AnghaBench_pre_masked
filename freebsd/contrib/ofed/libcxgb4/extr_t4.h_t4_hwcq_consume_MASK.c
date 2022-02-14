
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct t4_status_page {size_t host_cidx; } ;
struct t4_cq {size_t cidx; int cidx_inc; int size; int cqid; int qid_mask; int gen; TYPE_1__* queue; int ugts; int bits_type_ts; } ;
struct TYPE_2__ {int bits_type_ts; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static inline void FUNC_5(struct t4_cq *VAR_1)
{
 VAR_1->bits_type_ts = VAR_1->queue[VAR_1->cidx].bits_type_ts;
 if (++VAR_1->cidx_inc == (VAR_1->size >> 4) || VAR_1->cidx_inc == VAR_0) {
  uint32_t VAR_2;

  VAR_2 = FUNC_2(0) | FUNC_0(VAR_1->cidx_inc) | FUNC_3(7) |
   FUNC_1(VAR_1->cqid & VAR_1->qid_mask);
  FUNC_4(VAR_2, VAR_1->ugts);
  VAR_1->cidx_inc = 0;
 }
 if (++VAR_1->cidx == VAR_1->size) {
  VAR_1->cidx = 0;
  VAR_1->gen ^= 1;
 }
 ((struct t4_status_page *)&VAR_1->queue[VAR_1->size])->host_cidx = VAR_1->cidx;
}
