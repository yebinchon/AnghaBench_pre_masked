
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_offset_t ;
struct TYPE_12__ {scalar_t__ elion; scalar_t__ bpid; scalar_t__ liodn; } ;
typedef TYPE_3__ t_DpaaFD ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; scalar_t__ m_data; } ;
struct dtsec_softc {int sc_tx_fqr_full; int sc_tx_fqr; TYPE_2__* sc_ifnet; TYPE_1__* sc_mii; } ;
struct dtsec_rm_frame_info {int * fi_sgt; struct mbuf* fi_mbuf; } ;
struct TYPE_11__ {int if_drv_flags; int if_snd; } ;
struct TYPE_10__ {int mii_media_status; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 unsigned int VAR_0 ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct dtsec_softc*) ;
 int FUNC_12 (struct dtsec_softc*) ;
 unsigned int VAR_1 ;
 int FUNC_13 (struct dtsec_softc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int *,struct mbuf*) ;
 int FUNC_15 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct dtsec_rm_frame_info* FUNC_16 (struct dtsec_softc*) ;
 int FUNC_17 (struct dtsec_softc*,struct dtsec_rm_frame_info*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (struct mbuf*) ;
 scalar_t__ FUNC_19 (int ,int ,TYPE_3__*) ;
 unsigned int FUNC_20 (int ,int ,int ) ;

void
FUNC_21(struct dtsec_softc *VAR_9)
{
 vm_size_t VAR_10, VAR_11, VAR_12;
 struct dtsec_rm_frame_info *VAR_13;
 unsigned int VAR_14, VAR_15;
 struct mbuf *VAR_16, *VAR_17;
 vm_offset_t VAR_18;
 t_DpaaFD VAR_19;

 FUNC_12(VAR_9);


 if ((VAR_9->sc_mii->mii_media_status & VAR_4) == 0)
  return;

 if ((VAR_9->sc_ifnet->if_drv_flags & VAR_3) != VAR_3)
  return;

 while (!FUNC_15(&VAR_9->sc_ifnet->if_snd)) {

  VAR_14 = FUNC_20(VAR_9->sc_tx_fqr, 0,
      VAR_8);

  if (VAR_14 >= VAR_1) {
   VAR_9->sc_tx_fqr_full = 1;
   return;
  }

  VAR_13 = FUNC_16(VAR_9);
  if (VAR_13 == ((void*)0))
   return;

  FUNC_14(&VAR_9->sc_ifnet->if_snd, VAR_16);
  if (VAR_16 == ((void*)0)) {
   FUNC_17(VAR_9, VAR_13);
   return;
  }

  VAR_15 = 0;
  VAR_17 = VAR_16;
  VAR_11 = 0;
  VAR_10 = 0;
  VAR_13->fi_mbuf = VAR_16;
  while (VAR_17 && VAR_15 < VAR_0) {
   if (VAR_17->m_len == 0)
    continue;





   FUNC_5(&VAR_13->fi_sgt[VAR_15], (void *)VAR_13);
   FUNC_9(&VAR_13->fi_sgt[VAR_15], 0);

   FUNC_7(&VAR_13->fi_sgt[VAR_15], 0);
   FUNC_8(&VAR_13->fi_sgt[VAR_15], 0);
   FUNC_6(&VAR_13->fi_sgt[VAR_15], 0);
   FUNC_10(&VAR_13->fi_sgt[VAR_15], 0);
   VAR_15++;

   VAR_10 = VAR_17->m_len;
   VAR_18 = (vm_offset_t)VAR_17->m_data;
   while (VAR_10 > 0 && VAR_15 < VAR_0) {
    VAR_12 = VAR_6 - (VAR_18 & VAR_5);
    if (VAR_17->m_len < VAR_12)
     VAR_12 = VAR_17->m_len;

    FUNC_5(&VAR_13->fi_sgt[VAR_15],
        (void *)VAR_18);
    FUNC_9(&VAR_13->fi_sgt[VAR_15], VAR_12);

    FUNC_7(&VAR_13->fi_sgt[VAR_15], 0);
    FUNC_8(&VAR_13->fi_sgt[VAR_15], 0);
    FUNC_6(&VAR_13->fi_sgt[VAR_15], 0);
    FUNC_10(&VAR_13->fi_sgt[VAR_15], 0);

    VAR_10 -= VAR_12;
    VAR_18 += VAR_12;
    VAR_11 += VAR_12;
    VAR_15++;
   }

   if (VAR_10 > 0)
    break;

   VAR_17 = VAR_17->m_next;
  }


  if (VAR_17 != ((void*)0) || VAR_10 != 0) {
   FUNC_17(VAR_9, VAR_13);
   FUNC_18(VAR_16);
   continue;
  }

  FUNC_8(&VAR_13->fi_sgt[VAR_15-1], 1);

  FUNC_0(&VAR_19, VAR_13->fi_sgt);
  FUNC_2(&VAR_19, VAR_11);
  FUNC_1(&VAR_19, VAR_7);

  VAR_19.liodn = 0;
  VAR_19.bpid = 0;
  VAR_19.elion = 0;
  FUNC_3(&VAR_19, 0);
  FUNC_4(&VAR_19, 0);

  FUNC_13(VAR_9);
  if (FUNC_19(VAR_9->sc_tx_fqr, 0, &VAR_19) != VAR_2) {
   FUNC_17(VAR_9, VAR_13);
   FUNC_18(VAR_16);
  }
  FUNC_11(VAR_9);
 }
}
