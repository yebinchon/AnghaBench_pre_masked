
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_ring_desc {int desc3; int desc2; void* desc1; void* desc0; } ;
struct TYPE_2__ {int packets; int bytes; } ;
struct xgbe_ring_data {int mbuf_len; struct xgbe_ring_desc* rdesc; TYPE_1__ tx; int mbuf_data_paddr; } ;
struct xgbe_packet_data {int tx_packets; int length; int rdesc_count; int tx_bytes; int attributes; } ;
struct xgbe_ring {int cur; int coalesce_count; int rdesc_count; int rdesc_map; int rdesc_dmat; int mbuf_map; int mbuf_dmat; struct xgbe_packet_data packet_data; } ;
struct xgbe_prv_data {int tx_frames; } ;
struct xgbe_channel {int name; struct xgbe_ring* tx_ring; struct xgbe_prv_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xgbe_channel*,struct xgbe_ring*) ;

__attribute__((used)) static void FUNC_9(struct xgbe_channel *VAR_15)
{
 struct xgbe_prv_data *VAR_16 = VAR_15->pdata;
 struct xgbe_ring *VAR_17 = VAR_15->tx_ring;
 struct xgbe_ring_data *VAR_18;
 struct xgbe_ring_desc *VAR_19;
 struct xgbe_packet_data *VAR_20 = &VAR_17->packet_data;
 unsigned int VAR_21;
 int VAR_22 = VAR_17->cur;
 int VAR_23 = VAR_17->cur;
 int VAR_24;

 FUNC_0("-->xgbe_dev_xmit\n");
 VAR_17->coalesce_count += VAR_20->tx_packets;
 if (!VAR_16->tx_frames)
  VAR_21 = 0;
 else if (VAR_20->tx_packets > VAR_16->tx_frames)
  VAR_21 = 1;
 else if ((VAR_17->coalesce_count % VAR_16->tx_frames) <
   VAR_20->tx_packets)
  VAR_21 = 1;
 else
  VAR_21 = 0;
 VAR_21 = 1;

 VAR_18 = FUNC_1(VAR_17, VAR_23);
 VAR_19 = VAR_18->rdesc;


 VAR_19->desc0 = FUNC_5(FUNC_6(VAR_18->mbuf_data_paddr));
 VAR_19->desc1 = FUNC_5(FUNC_7(VAR_18->mbuf_data_paddr));


 FUNC_3(VAR_19->desc2, VAR_12, VAR_6,
     VAR_18->mbuf_len);


 if (FUNC_2(VAR_20->attributes, VAR_14, VAR_10))
  FUNC_3(VAR_19->desc2, VAR_12, VAR_11, 1);


 FUNC_3(VAR_19->desc3, VAR_13, VAR_4, 1);


 FUNC_3(VAR_19->desc3, VAR_13, VAR_3, 0);


 if (VAR_23 != VAR_22)
  FUNC_3(VAR_19->desc3, VAR_13, VAR_9, 1);


 FUNC_3(VAR_19->desc3, VAR_13, VAR_2, 0);


 FUNC_3(VAR_19->desc3, VAR_13, VAR_5,
     VAR_20->length);

 for (VAR_24 = VAR_23 - VAR_22 + 1; VAR_24 < VAR_20->rdesc_count; VAR_24++) {
  VAR_23++;
  VAR_18 = FUNC_1(VAR_17, VAR_23);
  VAR_19 = VAR_18->rdesc;


  VAR_19->desc0 = FUNC_5(FUNC_6(VAR_18->mbuf_data_paddr));
  VAR_19->desc1 = FUNC_5(FUNC_7(VAR_18->mbuf_data_paddr));


  FUNC_3(VAR_19->desc2, VAR_12, VAR_6,
      VAR_18->mbuf_len);


  FUNC_3(VAR_19->desc3, VAR_13, VAR_9, 1);


  FUNC_3(VAR_19->desc3, VAR_13, VAR_3, 0);
 }


 FUNC_3(VAR_19->desc3, VAR_13, VAR_8, 1);


 if (VAR_21)
  FUNC_3(VAR_19->desc2, VAR_12, VAR_7, 1);


 VAR_18->tx.packets = VAR_20->tx_packets;
 VAR_18->tx.bytes = VAR_20->tx_bytes;


 FUNC_4(VAR_17->rdesc_dmat, VAR_17->rdesc_map,
     VAR_1);
 FUNC_4(VAR_17->mbuf_dmat, VAR_17->mbuf_map,
     VAR_1);







 VAR_18 = FUNC_1(VAR_17, VAR_22);
 VAR_19 = VAR_18->rdesc;
 FUNC_3(VAR_19->desc3, VAR_13, VAR_9, 1);


 FUNC_4(VAR_17->rdesc_dmat, VAR_17->rdesc_map,
     VAR_1 | VAR_0);

 VAR_17->cur = VAR_23 + 1;
 FUNC_8(VAR_15, VAR_17);

 FUNC_0("  %s: descriptors %u to %u written\n",
       VAR_15->name, VAR_22 & (VAR_17->rdesc_count - 1),
       (VAR_17->cur - 1) & (VAR_17->rdesc_count - 1));

 FUNC_0("<--xgbe_dev_xmit\n");
}
