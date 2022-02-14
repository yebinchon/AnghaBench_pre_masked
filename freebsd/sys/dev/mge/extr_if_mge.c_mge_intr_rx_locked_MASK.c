
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct mge_softc {size_t rx_desc_curr; int mge_desc_dtag; int mge_rx_dtag; struct mge_desc_wrapper* mge_rx_desc; struct ifnet* ifp; } ;
struct mge_desc_wrapper {int desc_dmap; TYPE_3__* mge_desc; TYPE_1__* buffer; int buffer_dmap; } ;
struct TYPE_5__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_data; TYPE_2__ m_pkthdr; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_6__ {int cmd_status; scalar_t__ byte_count; int buff_size; } ;
struct TYPE_4__ {int m_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mge_softc*) ;
 int FUNC_1 (struct mge_softc*) ;
 int FUNC_2 (struct mge_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 struct mbuf* FUNC_5 (int ,scalar_t__,int ,struct ifnet*,int *) ;
 int FUNC_6 (struct ifnet*,struct mbuf*,int,int ) ;
 int FUNC_7 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_8(struct mge_softc *VAR_9, int VAR_10)
{
 struct ifnet *VAR_11 = VAR_9->ifp;
 uint32_t VAR_12;
 uint16_t VAR_13;
 struct mge_desc_wrapper* VAR_14;
 struct mbuf *VAR_15;
 int VAR_16 = 0;

 FUNC_1(VAR_9);

 while (VAR_10 != 0) {
  VAR_14 = &VAR_9->mge_rx_desc[VAR_9->rx_desc_curr];
  FUNC_3(VAR_9->mge_desc_dtag, VAR_14->desc_dmap,
      VAR_0);


  VAR_12 = VAR_14->mge_desc->cmd_status;
  VAR_13 = VAR_14->mge_desc->buff_size;
  if ((VAR_12 & VAR_5) != 0)
   break;

  if (VAR_14->mge_desc->byte_count &&
      ~(VAR_12 & VAR_6)) {

   FUNC_3(VAR_9->mge_rx_dtag, VAR_14->buffer_dmap,
       VAR_0);

   VAR_15 = FUNC_5(VAR_14->buffer->m_data,
       VAR_14->mge_desc->byte_count - VAR_3,
       0, VAR_11, ((void*)0));

   if (VAR_15 == ((void*)0))

    break;

   VAR_15->m_len -= 2;
   VAR_15->m_pkthdr.len -= 2;
   VAR_15->m_data += 2;

   VAR_15->m_pkthdr.rcvif = VAR_11;

   FUNC_6(VAR_11, VAR_15, VAR_12,
       VAR_13);

   FUNC_2(VAR_9);
   (*VAR_11->if_input)(VAR_11, VAR_15);
   FUNC_0(VAR_9);
   VAR_16++;
  }

  VAR_14->mge_desc->byte_count = 0;
  VAR_14->mge_desc->cmd_status = VAR_8 | VAR_5;
  VAR_9->rx_desc_curr = (++VAR_9->rx_desc_curr % VAR_7);
  FUNC_3(VAR_9->mge_desc_dtag, VAR_14->desc_dmap,
      VAR_1 | VAR_2);

  if (VAR_10 > 0)
   VAR_10 -= 1;
 }

 FUNC_4(VAR_11, VAR_4, VAR_16);

 return (VAR_16);
}
