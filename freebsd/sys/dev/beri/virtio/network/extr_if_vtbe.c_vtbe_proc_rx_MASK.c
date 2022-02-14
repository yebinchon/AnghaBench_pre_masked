
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtbe_softc {scalar_t__ hdrsize; int beri_mem_offset; struct ifnet* ifp; } ;
struct vqueue_info {int dummy; } ;
struct uio {int uio_resid; int uio_iovcnt; int uio_rw; int uio_segflg; struct iovec* uio_iov; } ;
struct TYPE_2__ {struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct iovec {scalar_t__ iov_len; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vtbe_softc*) ;
 int FUNC_4 (struct vtbe_softc*) ;
 int FUNC_5 (struct iovec*,int ) ;
 struct iovec* FUNC_6 (struct iovec*,int) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 struct mbuf* FUNC_8 (struct uio*,int ,int ,int ,int ) ;
 int FUNC_9 (struct ifnet*,struct mbuf*) ;
 int FUNC_10 (int ,struct vqueue_info*,struct iovec*,int,int *) ;
 int FUNC_11 (struct vqueue_info*,struct iovec*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct vtbe_softc *VAR_9, struct vqueue_info *VAR_10)
{
 struct iovec VAR_11[VAR_0];
 struct iovec *VAR_12;
 struct ifnet *VAR_13;
 struct uio VAR_14;
 struct mbuf *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_13 = VAR_9->ifp;

 VAR_18 = FUNC_10(VAR_9->beri_mem_offset, VAR_10, VAR_11,
  VAR_0, ((void*)0));

 FUNC_2(VAR_18 >= 1 && VAR_18 <= VAR_0,
  ("wrong n %d", VAR_18));

 VAR_12 = FUNC_6(VAR_11, VAR_18);

 VAR_16 = 0;
 for (VAR_17 = 1; VAR_17 < VAR_18; VAR_17++) {
  VAR_16 += VAR_11[VAR_17].iov_len;
 }

 VAR_14.uio_resid = VAR_16;
 VAR_14.uio_iov = &VAR_12[1];
 VAR_14.uio_segflg = VAR_7;
 VAR_14.uio_iovcnt = (VAR_18 - 1);
 VAR_14.uio_rw = VAR_8;

 if ((VAR_15 = FUNC_8(&VAR_14, VAR_5, 0, VAR_1,
     VAR_6)) == ((void*)0)) {
  FUNC_7(VAR_13, VAR_2, 1);
  goto done;
 }

 VAR_15->m_pkthdr.rcvif = VAR_13;

 FUNC_7(VAR_13, VAR_3, 1);

 FUNC_1(VAR_13->if_vnet);
 FUNC_4(VAR_9);
 (*VAR_13->if_input)(VAR_13, VAR_15);
 FUNC_3(VAR_9);
 FUNC_0();

done:
 FUNC_5(VAR_12, VAR_4);
 FUNC_11(VAR_10, VAR_11, VAR_18, VAR_16 + VAR_9->hdrsize);
}
