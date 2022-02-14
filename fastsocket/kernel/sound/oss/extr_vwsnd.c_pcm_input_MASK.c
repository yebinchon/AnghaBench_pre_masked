
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hwbuf_max; int hwbuf_size; int swbuf_size; int hw_fragsize; int flags; scalar_t__ hwstate; scalar_t__ swstate; int const swb_i_avail; int swb_i_idx; int byte_count; int frag_count; int lock; int queue; int chan; int swbuf; } ;
typedef TYPE_1__ vwsnd_port_t ;
typedef scalar_t__ vwsnd_port_swstate_t ;
typedef scalar_t__ vwsnd_port_hwstate_t ;
struct TYPE_9__ {TYPE_1__ rport; } ;
typedef TYPE_2__ vwsnd_dev_t ;


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
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_1__*,int,int,int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(vwsnd_dev_t *VAR_5, int VAR_6, int VAR_7)
{
 vwsnd_port_t *VAR_8 = &VAR_5->rport;
 const int VAR_9 = VAR_8->hwbuf_max;
 const int VAR_10 = VAR_8->hwbuf_size;
 const int VAR_11 = VAR_8->swbuf_size;
 const int VAR_12 = VAR_8->hw_fragsize;
 unsigned long VAR_13;

 FUNC_1("(devc=0x%p, erflown=%d, nb=%d)\n", VAR_5, VAR_6, VAR_7);

 FUNC_12(&VAR_8->lock, VAR_13);
 if (VAR_6)
  VAR_8->flags |= VAR_1;
 (void) FUNC_6(VAR_8, VAR_7);
 if (VAR_8->flags & VAR_2 || !VAR_8->swbuf) {
  FUNC_13(&VAR_8->lock, VAR_13);
  FUNC_3("returning: HW BUSY or !swbuf\n");
  return;
 }
 if (VAR_8->flags & VAR_0) {
  FUNC_13(&VAR_8->lock, VAR_13);
  FUNC_3("returning: DISABLED\n");
  return;
 }
 VAR_8->flags |= VAR_2;
 while (1) {
  int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
  vwsnd_port_hwstate_t VAR_19 = VAR_8->hwstate;
  vwsnd_port_swstate_t VAR_20 = VAR_8->swstate;

  VAR_15 = FUNC_8(&VAR_8->chan);
  VAR_14 = FUNC_9(&VAR_8->chan);
  VAR_16 = (VAR_15 - VAR_14 + VAR_10) % VAR_10 & -VAR_12;
  if (VAR_16 > VAR_9)
   VAR_16 = VAR_9;
  VAR_17 = VAR_8->swb_i_avail & -VAR_12;
  if (VAR_20 != VAR_4) {
   FUNC_2("stopping.  hwstate = %d\n", VAR_19);
   if (VAR_19 != VAR_3) {
    FUNC_7(&VAR_8->chan);
    VAR_8->hwstate = VAR_3;
   }
   FUNC_14(&VAR_8->queue);
   break;
  }
  if (!VAR_17 || !VAR_16)
   break;
  FUNC_13(&VAR_8->lock, VAR_13);







  VAR_18 = VAR_8->swb_i_idx;
  VAR_7 = VAR_16;
  if (VAR_7 > VAR_17)
   VAR_7 = VAR_17;
  if (VAR_7 > VAR_10 - VAR_14)
   VAR_7 = VAR_10 - VAR_14;
  if (VAR_7 > VAR_11 - VAR_18)
   VAR_7 = VAR_11 - VAR_18;
  FUNC_0(VAR_7 > 0);
  if (VAR_7 % VAR_12) {
   FUNC_2("nb = %d, fragsize = %d\n", VAR_7, VAR_12);
   FUNC_2("hw_avail = %d\n", VAR_16);
   FUNC_2("sw_avail = %d\n", VAR_17);
   FUNC_2("hwsize = %d, swptr = %d\n", VAR_10, VAR_14);
   FUNC_2("swsize = %d, swidx = %d\n", VAR_11, VAR_18);
  }
  FUNC_0(!(VAR_7 % VAR_12));
  FUNC_3("copying hwb[%d..%d] to swb[%d..%d]\n",
        VAR_14, VAR_14 + VAR_7, VAR_18, VAR_18 + VAR_7);
  FUNC_11(VAR_8, VAR_18, VAR_14, VAR_7);
  FUNC_10(&VAR_8->chan, (VAR_14 + VAR_7) % VAR_10);
  FUNC_12(&VAR_8->lock, VAR_13);
  FUNC_5(VAR_8, VAR_7);
  VAR_8->byte_count += VAR_7;
  VAR_8->frag_count += VAR_7 / VAR_12;
  FUNC_0(VAR_7 % VAR_12 == 0);
  FUNC_14(&VAR_8->queue);
 }
 VAR_8->flags &= ~VAR_2;
 FUNC_13(&VAR_8->lock, VAR_13);
 FUNC_4();
}
