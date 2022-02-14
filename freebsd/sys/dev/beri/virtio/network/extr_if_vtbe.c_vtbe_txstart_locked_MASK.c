
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtbe_softc {int hdrsize; int pio_send; int beri_mem_offset; struct ifnet* ifp; struct vqueue_info* vs_queues; } ;
struct vqueue_info {TYPE_1__* vq_used; int vq_save_used; } ;
struct virtio_net_hdr {int dummy; } ;
struct uio {int uio_resid; int uio_iovcnt; int uio_rw; scalar_t__ uio_offset; int uio_segflg; struct iovec* uio_iov; } ;
struct mbuf {int dummy; } ;
struct iovec {int iov_len; struct virtio_net_hdr* iov_base; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct TYPE_2__ {int idx; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct vtbe_softc*) ;
 int FUNC_5 (struct vtbe_softc*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct iovec*,int ) ;
 struct iovec* FUNC_8 (struct iovec*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*,int ,int) ;
 int FUNC_11 (struct mbuf*) ;
 int FUNC_12 (struct uio*,struct mbuf*,int ) ;
 int FUNC_13 (struct virtio_net_hdr*,int ,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,struct vqueue_info*,struct iovec*,int,int *) ;
 int FUNC_16 (struct vqueue_info*) ;
 int FUNC_17 (struct vqueue_info*,struct iovec*,int,int) ;
 int FUNC_18 (struct vqueue_info*) ;

__attribute__((used)) static void
FUNC_19(struct vtbe_softc *VAR_9)
{
 struct iovec VAR_10[VAR_0];
 struct virtio_net_hdr *VAR_11;
 struct vqueue_info *VAR_12;
 struct iovec *VAR_13;
 struct ifnet *VAR_14;
 struct mbuf *VAR_15;
 struct uio VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;

 FUNC_4(VAR_9);


 VAR_12 = &VAR_9->vs_queues[0];
 if (!FUNC_16(VAR_12)) {
  return;
 }

 VAR_14 = VAR_9->ifp;
 if (VAR_14->if_drv_flags & VAR_2) {
  return;
 }

 VAR_17 = 0;

 if (!FUNC_18(VAR_12))
  return;

 VAR_12->vq_save_used = FUNC_6(VAR_12->vq_used->idx);

 for (;;) {
  if (!FUNC_16(VAR_12)) {
   VAR_14->if_drv_flags |= VAR_2;
   break;
  }

  FUNC_1(&VAR_14->if_snd, VAR_15);
  if (VAR_15 == ((void*)0)) {
   break;
  }

  VAR_22 = FUNC_15(VAR_9->beri_mem_offset, VAR_12, VAR_10,
   VAR_0, ((void*)0));
  FUNC_2(VAR_22 == 2,
   ("Unexpected amount of descriptors (%d)", VAR_22));

  VAR_13 = FUNC_8(VAR_10, VAR_22);
  VAR_11 = VAR_10[0].iov_base;
  FUNC_13(VAR_11, 0, VAR_9->hdrsize);

  VAR_21 = VAR_10[1].iov_len;
  VAR_16.uio_resid = VAR_21;
  VAR_16.uio_iov = &VAR_13[1];
  VAR_16.uio_segflg = VAR_6;
  VAR_16.uio_iovcnt = 1;
  VAR_16.uio_offset = 0;
  VAR_16.uio_rw = VAR_5;

  VAR_19 = FUNC_12(&VAR_16, VAR_15, 0);
  if (VAR_19)
   FUNC_14("m_mbuftouio failed\n");

  VAR_18 = (VAR_21 - VAR_16.uio_resid + VAR_9->hdrsize);

  FUNC_7(VAR_13, VAR_3);
  FUNC_17(VAR_12, VAR_10, VAR_22, VAR_18);

  FUNC_10(VAR_14, VAR_1, 1);

  FUNC_0(VAR_14, VAR_15);
  FUNC_11(VAR_15);

  ++VAR_17;
 }

 if (VAR_17 != 0) {
  VAR_20 = FUNC_9(VAR_8);
  FUNC_5(VAR_9, VAR_7, VAR_20);

  FUNC_3(VAR_9->pio_send, VAR_4, 1);
 }
}
