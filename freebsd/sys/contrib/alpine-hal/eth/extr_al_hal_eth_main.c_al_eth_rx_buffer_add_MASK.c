
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf1_ptr; void* len_ctrl; void* buf2_ptr_lo; } ;
union al_udma_desc {TYPE_2__ rx; } ;
typedef int uint64_t ;
typedef int uint32_t ;
struct al_udma_q {TYPE_1__* udma; int qid; } ;
struct al_buf {int len; int addr; } ;
struct TYPE_3__ {scalar_t__ rev_id; int name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct al_udma_q*) ;
 union al_udma_desc* FUNC_5 (struct al_udma_q*) ;
 int FUNC_6 (struct al_udma_q*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct al_udma_q *VAR_10,
         struct al_buf *VAR_11, uint32_t VAR_12,
         struct al_buf *VAR_13)
{
 uint64_t VAR_14 = ((uint64_t)VAR_12 & VAR_0) <<
  VAR_7;
 uint32_t VAR_15 = VAR_12 & ~VAR_0;
 union al_udma_desc *VAR_16;

 FUNC_3("[%s %d]: add rx buffer.\n", VAR_10->udma->name, VAR_10->qid);


 if (FUNC_9(FUNC_4(VAR_10) < 1)) {
  FUNC_3("[%s]: rx q (%d) has no enough free descriptor",
    VAR_10->udma->name, VAR_10->qid);
  return -VAR_9;
 }

 VAR_16 = FUNC_5(VAR_10);

 VAR_15 |= FUNC_6(VAR_10) << VAR_6;
 VAR_15 |= VAR_11->len & VAR_5;

 if (VAR_12 & VAR_1) {
  FUNC_2(VAR_13 != ((void*)0));
  FUNC_2((VAR_10->udma->rev_id >= VAR_8) ||
   (FUNC_0(VAR_11->addr) == FUNC_0(VAR_13->addr)));

  VAR_15 |= ((VAR_13->len >> VAR_2)
   << VAR_4) & VAR_3;
  VAR_16->rx.buf2_ptr_lo = FUNC_7(FUNC_1(VAR_13->addr));
 }
 VAR_16->rx.len_ctrl = FUNC_7(VAR_15);
 VAR_16->rx.buf1_ptr = FUNC_8(VAR_11->addr | VAR_14);

 return 0;
}
