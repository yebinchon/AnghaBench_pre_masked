
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ntb_transport_qp {unsigned int mw_count; int qp_count; int link_is_up; int link_work; int link_width; int link_speed; scalar_t__ client_ready; struct ntb_transport_qp* qp_vec; int dev; struct ntb_transport_mw* mw_vec; scalar_t__ compact; } ;
struct ntb_transport_mw {int tx_size; int rx_size; int buff_size; int dma_addr; int xlat_align_size; } ;
struct ntb_transport_ctx {unsigned int mw_count; int qp_count; int link_is_up; int link_work; int link_width; int link_speed; scalar_t__ client_ready; struct ntb_transport_ctx* qp_vec; int dev; struct ntb_transport_mw* mw_vec; scalar_t__ compact; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int,void (*) (void*),struct ntb_transport_qp*) ;
 int VAR_12 ;
 int FUNC_2 (struct ntb_transport_qp*,unsigned int) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,unsigned int,int ,int) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int,char*,...) ;
 void FUNC_7 (void*) ;
 int FUNC_8 (struct ntb_transport_qp*,unsigned int,int) ;
 int FUNC_9 (int ,scalar_t__,int*) ;
 int FUNC_10 (struct ntb_transport_qp*,unsigned int) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static void
FUNC_12(void *VAR_13)
{
 struct ntb_transport_ctx *VAR_14 = VAR_13;
 struct ntb_transport_mw *VAR_15;
 device_t VAR_16 = VAR_14->dev;
 struct ntb_transport_qp *VAR_17;
 uint64_t VAR_18, VAR_19;
 uint32_t VAR_20;
 unsigned VAR_21;
 int VAR_22;


 if (VAR_14->compact) {
  for (VAR_21 = 0; VAR_21 < VAR_14->mw_count; VAR_21++) {
   VAR_19 = VAR_14->mw_vec[VAR_21].tx_size;
   FUNC_0(VAR_19 <= VAR_11, ("size too big (%jx)", VAR_19));
   FUNC_5(VAR_16, VAR_0 + VAR_21, VAR_19);
  }
  FUNC_5(VAR_16, VAR_2, 0);
  FUNC_5(VAR_16, VAR_1,
      (VAR_14->qp_count << 24) | (VAR_14->mw_count << 16) |
      VAR_10);
 } else {
  for (VAR_21 = 0; VAR_21 < VAR_14->mw_count; VAR_21++) {
   VAR_19 = VAR_14->mw_vec[VAR_21].tx_size;
   FUNC_5(VAR_16, VAR_3 + (VAR_21 * 2),
       VAR_19 >> 32);
   FUNC_5(VAR_16, VAR_4 + (VAR_21 * 2), VAR_19);
  }
  FUNC_5(VAR_16, VAR_5, VAR_14->mw_count);
  FUNC_5(VAR_16, VAR_6, VAR_14->qp_count);
  FUNC_5(VAR_16, VAR_7, 0);
  FUNC_5(VAR_16, VAR_8, VAR_10);
 }


 VAR_20 = 0;
 if (VAR_14->compact) {
  FUNC_9(VAR_16, VAR_1, &VAR_20);
  if (VAR_20 != ((VAR_14->qp_count << 24) | (VAR_14->mw_count << 16) |
      VAR_10))
   goto out;
 } else {
  FUNC_9(VAR_16, VAR_8, &VAR_20);
  if (VAR_20 != VAR_10)
   goto out;

  FUNC_9(VAR_16, VAR_6, &VAR_20);
  if (VAR_20 != VAR_14->qp_count)
   goto out;

  FUNC_9(VAR_16, VAR_5, &VAR_20);
  if (VAR_20 != VAR_14->mw_count)
   goto out;
 }

 for (VAR_21 = 0; VAR_21 < VAR_14->mw_count; VAR_21++) {
  if (VAR_14->compact) {
   FUNC_9(VAR_16, VAR_0 + VAR_21, &VAR_20);
   VAR_18 = VAR_20;
  } else {
   FUNC_9(VAR_16, VAR_3 + (VAR_21 * 2), &VAR_20);
   VAR_18 = (uint64_t)VAR_20 << 32;

   FUNC_9(VAR_16, VAR_4 + (VAR_21 * 2), &VAR_20);
   VAR_18 |= VAR_20;
  }

  VAR_15 = &VAR_14->mw_vec[VAR_21];
  VAR_15->rx_size = VAR_18;
  VAR_18 = FUNC_11(VAR_18, VAR_15->xlat_align_size);
  if (VAR_15->buff_size != VAR_18) {

   VAR_22 = FUNC_8(VAR_14, VAR_21, VAR_18);
   if (VAR_22 != 0) {
    FUNC_6(0, "link up set mw%d fails, rc %d\n",
        VAR_21, VAR_22);
    goto free_mws;
   }


   VAR_22 = FUNC_4(VAR_14->dev, VAR_21, VAR_15->dma_addr,
       VAR_15->buff_size);
   if (VAR_22 != 0) {
    FUNC_6(0, "link up mw%d xlat fails, rc %d\n",
         VAR_21, VAR_22);
    goto free_mws;
   }
  }
 }

 VAR_14->link_is_up = 1;
 FUNC_6(1, "transport link up\n");

 for (VAR_21 = 0; VAR_21 < VAR_14->qp_count; VAR_21++) {
  VAR_17 = &VAR_14->qp_vec[VAR_21];

  FUNC_10(VAR_14, VAR_21);

  if (VAR_17->client_ready)
   FUNC_1(&VAR_17->link_work, 0, FUNC_7, VAR_17);
 }

 return;

free_mws:
 for (VAR_21 = 0; VAR_21 < VAR_14->mw_count; VAR_21++)
  FUNC_2(VAR_14, VAR_21);
out:
 if (FUNC_3(VAR_16, &VAR_14->link_speed, &VAR_14->link_width))
  FUNC_1(&VAR_14->link_work,
      VAR_9 * VAR_12 / 1000, FUNC_12, VAR_14);
}
