
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int hwbuf_max; int hwbuf_size; int swbuf_size; int hw_fragsize; int flags; scalar_t__ hwstate; scalar_t__ swstate; int const swb_i_avail; int swb_i_idx; int byte_count; int frame_size; int frag_count; int lock; int queue; scalar_t__ MSC_offset; int chan; } ;
typedef TYPE_1__ vwsnd_port_t ;
typedef scalar_t__ vwsnd_port_swstate_t ;
typedef scalar_t__ vwsnd_port_hwstate_t ;
struct TYPE_11__ {TYPE_1__ wport; } ;
typedef TYPE_2__ vwsnd_dev_t ;
struct TYPE_12__ {scalar_t__ msc; } ;
typedef TYPE_3__ ustmsc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_2__*,int,int) ;
 int FUNC_2 (char*,int const,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (TYPE_1__*,int,int,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(vwsnd_dev_t *VAR_9, int VAR_10, int VAR_11)
{
 vwsnd_port_t *VAR_12 = &VAR_9->wport;
 const int VAR_13 = VAR_12->hwbuf_max;
 const int VAR_14 = VAR_12->hwbuf_size;
 const int VAR_15 = VAR_12->swbuf_size;
 const int VAR_16 = VAR_12->hw_fragsize;
 unsigned long VAR_17;

 FUNC_1("(devc=0x%p, erflown=%d, nb=%d)\n", VAR_9, VAR_10, VAR_11);
 FUNC_14(&VAR_12->lock, VAR_17);
 if (VAR_10)
  VAR_12->flags |= VAR_1;
 (void) FUNC_6(VAR_12, VAR_11);
 if (VAR_12->flags & VAR_2) {
  FUNC_15(&VAR_12->lock, VAR_17);
  FUNC_3("returning: HW BUSY\n");
  return;
 }
 if (VAR_12->flags & VAR_0) {
  FUNC_15(&VAR_12->lock, VAR_17);
  FUNC_3("returning: DISABLED\n");
  return;
 }
 VAR_12->flags |= VAR_2;
 while (1) {
  int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
  vwsnd_port_hwstate_t VAR_23 = VAR_12->hwstate;
  vwsnd_port_swstate_t VAR_24 = VAR_12->swstate;
  int VAR_25;
  ustmsc_t VAR_26;

  VAR_19 = FUNC_10(&VAR_12->chan);
  VAR_18 = FUNC_11(&VAR_12->chan);
  VAR_25 = (VAR_18 - VAR_19 + VAR_14) % VAR_14;
  VAR_20 = (VAR_13 - VAR_25) & -VAR_16;
  VAR_21 = VAR_12->swb_i_avail & -VAR_16;
  if (VAR_21 && VAR_24 == VAR_8) {
   if (VAR_12->flags & VAR_1) {
    VAR_12->flags &= ~VAR_1;
   }
  } else if (VAR_24 == VAR_6 ||
    VAR_24 == VAR_7 ||
    (VAR_24 == VAR_5 &&
     !VAR_21 &&
     (VAR_12->flags & VAR_1))) {
   FUNC_2("stopping.  hwstate = %d\n", VAR_23);
   if (VAR_23 != VAR_4) {
    FUNC_8(&VAR_12->chan);
    VAR_12->hwstate = VAR_4;
   }
   FUNC_16(&VAR_12->queue);
   break;
  }
  if (!VAR_21 || !VAR_20)
   break;
  FUNC_15(&VAR_12->lock, VAR_17);







  VAR_22 = VAR_12->swb_i_idx;
  VAR_11 = VAR_20;
  if (VAR_11 > VAR_21)
   VAR_11 = VAR_21;
  if (VAR_11 > VAR_14 - VAR_18)
   VAR_11 = VAR_14 - VAR_18;
  if (VAR_11 > VAR_15 - VAR_22)
   VAR_11 = VAR_15 - VAR_22;
  FUNC_0(VAR_11 > 0);
  if (VAR_11 % VAR_16) {
   FUNC_2("nb = %d, fragsize = %d\n", VAR_11, VAR_16);
   FUNC_2("hw_avail = %d\n", VAR_20);
   FUNC_2("sw_avail = %d\n", VAR_21);
   FUNC_2("hwsize = %d, swptr = %d\n", VAR_14, VAR_18);
   FUNC_2("swsize = %d, swidx = %d\n", VAR_15, VAR_22);
  }
  FUNC_0(!(VAR_11 % VAR_16));
  FUNC_3("copying swb[%d..%d] to hwb[%d..%d]\n",
        VAR_22, VAR_22 + VAR_11, VAR_18, VAR_18 + VAR_11);
  FUNC_13(VAR_12, VAR_22, VAR_18, VAR_11);
  FUNC_12(&VAR_12->chan, (VAR_18 + VAR_11) % VAR_14);
  FUNC_14(&VAR_12->lock, VAR_17);
  if (VAR_23 == VAR_4) {
   FUNC_3("starting\n");
   FUNC_7(&VAR_12->chan);
   VAR_12->hwstate = VAR_3;
   FUNC_9(&VAR_12->chan, &VAR_26);
   FUNC_0(VAR_12->byte_count % VAR_12->frame_size == 0);
   VAR_12->MSC_offset = VAR_26.msc - VAR_12->byte_count / VAR_12->frame_size;
  }
  FUNC_5(VAR_12, VAR_11);
  VAR_12->byte_count += VAR_11;
  VAR_12->frag_count += VAR_11 / VAR_16;
  FUNC_0(VAR_11 % VAR_16 == 0);
  FUNC_16(&VAR_12->queue);
 }
 VAR_12->flags &= ~VAR_2;
 FUNC_15(&VAR_12->lock, VAR_17);
 FUNC_4();
}
