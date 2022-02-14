
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct sunxi_dma_config {int dst_width; int dst_burst_len; int src_width; int src_burst_len; unsigned int dst_drqtype; unsigned int src_drqtype; int dst_blksize; int dst_wait_cyc; int src_blksize; int src_wait_cyc; scalar_t__ src_noincr; scalar_t__ dst_noincr; } ;
struct a10dmac_channel {scalar_t__ ch_type; } ;
typedef int device_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_0 (struct a10dmac_channel*,int ,unsigned int) ;
 int VAR_26 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_27, void *VAR_28, const struct sunxi_dma_config *VAR_29)
{
 struct a10dmac_channel *VAR_30 = VAR_28;
 uint32_t VAR_31;
 unsigned int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 unsigned int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;

 switch (VAR_29->dst_width) {
 case 8:
  VAR_32 = VAR_15;
  break;
 case 16:
  VAR_32 = VAR_13;
  break;
 case 32:
  VAR_32 = VAR_14;
  break;
 default:
  return (VAR_26);
 }
 switch (VAR_29->dst_burst_len) {
 case 1:
  VAR_33 = VAR_10;
  break;
 case 4:
  VAR_33 = VAR_11;
  break;
 case 8:
  VAR_33 = VAR_12;
  break;
 default:
  return (VAR_26);
 }
 switch (VAR_29->src_width) {
 case 8:
  VAR_37 = VAR_15;
  break;
 case 16:
  VAR_37 = VAR_13;
  break;
 case 32:
  VAR_37 = VAR_14;
  break;
 default:
  return (VAR_26);
 }
 switch (VAR_29->src_burst_len) {
 case 1:
  VAR_38 = VAR_10;
  break;
 case 4:
  VAR_38 = VAR_11;
  break;
 case 8:
  VAR_38 = VAR_12;
  break;
 default:
  return (VAR_26);
 }

 VAR_31 = (VAR_32 << VAR_17) |
       (VAR_33 << VAR_16) |
       (VAR_29->dst_drqtype << VAR_18) |
       (VAR_37 << VAR_20) |
       (VAR_38 << VAR_19) |
       (VAR_29->src_drqtype << VAR_21);

 if (VAR_30->ch_type == VAR_25) {
  if (VAR_29->dst_noincr)
   VAR_31 |= VAR_22;
  if (VAR_29->src_noincr)
   VAR_31 |= VAR_24;

  FUNC_0(VAR_30, VAR_23, VAR_31);
 } else {
  VAR_36 = VAR_29->dst_noincr ? VAR_0 :
      VAR_1;
  VAR_41 = VAR_29->src_noincr ? VAR_0 :
      VAR_1;

  VAR_31 |= (VAR_36 << VAR_2);
  VAR_31 |= (VAR_41 << VAR_4);

  FUNC_0(VAR_30, VAR_3, VAR_31);

  VAR_34 = VAR_29->dst_blksize - 1;
  VAR_35 = VAR_29->dst_wait_cyc - 1;
  VAR_39 = VAR_29->src_blksize - 1;
  VAR_40 = VAR_29->src_wait_cyc - 1;

  FUNC_0(VAR_30, VAR_7,
      (VAR_34 << VAR_5) |
      (VAR_35 << VAR_6) |
      (VAR_39 << VAR_8) |
      (VAR_40 << VAR_9));
 }

 return (0);
}
