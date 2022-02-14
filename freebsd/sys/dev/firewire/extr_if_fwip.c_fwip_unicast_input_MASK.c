
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_12__ {struct ifnet* rcvif; int len; } ;
struct mbuf {TYPE_5__ m_pkthdr; int m_len; } ;
struct m_tag {int dummy; } ;
struct ifnet {int if_bpf; } ;
struct TYPE_10__ {int fc; } ;
struct TYPE_8__ {struct ifnet* fwip_ifp; } ;
struct fwip_softc {TYPE_3__ fd; TYPE_1__ fw_softc; } ;
struct TYPE_13__ {int dest_lo; scalar_t__ tcode; int src; int len; scalar_t__ dest_hi; } ;
struct TYPE_14__ {TYPE_6__ wreqb; } ;
struct fw_pkt {TYPE_7__ mode; } ;
struct TYPE_9__ {struct fw_pkt hdr; } ;
struct fw_xfer {TYPE_2__ recv; struct mbuf* mbuf; scalar_t__ sc; } ;
struct TYPE_11__ {int lo; int hi; } ;
struct fw_device {TYPE_4__ eui; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*,struct mbuf*,int) ;
 struct fw_device* FUNC_2 (int ,int) ;
 int FUNC_3 (struct fwip_softc*,struct fw_xfer*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 struct m_tag* FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static void
FUNC_9(struct fw_xfer *VAR_10)
{
 uint64_t VAR_11;
 struct mbuf *VAR_12;
 struct m_tag *VAR_13;
 struct ifnet *VAR_14;
 struct fwip_softc *VAR_15;
 struct fw_pkt *VAR_16;

 int VAR_17;

 VAR_15 = (struct fwip_softc *)VAR_10->sc;
 VAR_14 = VAR_15->fw_softc.fwip_ifp;
 VAR_12 = VAR_10->mbuf;
 VAR_10->mbuf = 0;
 VAR_16 = &VAR_10->recv.hdr;





 VAR_11 = ((uint64_t)VAR_16->mode.wreqb.dest_hi << 32)
  | VAR_16->mode.wreqb.dest_lo;
 if (VAR_16->mode.wreqb.tcode != VAR_3) {
  VAR_17 = VAR_2;
 } else if (VAR_11 != VAR_6) {
  VAR_17 = VAR_1;
 } else {
  VAR_17 = VAR_0;
 }





 FUNC_3(VAR_15, VAR_10);




 if (VAR_17 != VAR_0) {
  FUNC_6(VAR_12);
  FUNC_5(VAR_14, VAR_4, 1);
  return;
 }

 if (FUNC_0(VAR_14->if_bpf)) {



  VAR_13 = FUNC_7(VAR_7, VAR_8,
      2*sizeof(uint32_t), VAR_9);
  if (VAR_13) {

   struct fw_device *VAR_18;
   uint32_t *VAR_19 = (uint32_t *) (VAR_13 + 1);
   VAR_18 = FUNC_2(VAR_15->fd.fc,
       VAR_16->mode.wreqb.src & 0x3f);
   if (VAR_18) {
    VAR_19[0] = FUNC_4(VAR_18->eui.hi);
    VAR_19[1] = FUNC_4(VAR_18->eui.lo);
   } else {
    VAR_19[0] = 0;
    VAR_19[1] = 0;
   }
   FUNC_8(VAR_12, VAR_13);
  }
 }






 VAR_12->m_len = VAR_12->m_pkthdr.len = VAR_16->mode.wreqb.len;
 VAR_12->m_pkthdr.rcvif = VAR_14;
 FUNC_1(VAR_14, VAR_12, VAR_16->mode.wreqb.src);
 FUNC_5(VAR_14, VAR_5, 1);
}
