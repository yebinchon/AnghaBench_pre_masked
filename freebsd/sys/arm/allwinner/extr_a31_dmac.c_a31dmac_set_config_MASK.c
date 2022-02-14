
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct sunxi_dma_config {int dst_width; int dst_burst_len; int src_width; int src_burst_len; unsigned int dst_wait_cyc; unsigned int src_wait_cyc; unsigned int dst_drqtype; unsigned int src_drqtype; scalar_t__ src_noincr; scalar_t__ dst_noincr; } ;
struct a31dmac_channel {TYPE_1__* desc; } ;
typedef int device_t ;
struct TYPE_2__ {void* para; void* config; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
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
 int VAR_18 ;
 unsigned int VAR_19 ;
 void* FUNC_0 (unsigned int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_20, void *VAR_21, const struct sunxi_dma_config *VAR_22)
{
 struct a31dmac_channel *VAR_23;
 uint32_t VAR_24, VAR_25;
 unsigned int VAR_26, VAR_27, VAR_28, VAR_29;
 unsigned int VAR_30, VAR_31, VAR_32, VAR_33;

 VAR_23 = VAR_21;

 switch (VAR_22->dst_width) {
 case 8:
  VAR_26 = VAR_9;
  break;
 case 16:
  VAR_26 = VAR_6;
  break;
 case 32:
  VAR_26 = VAR_7;
  break;
 case 64:
  VAR_26 = VAR_8;
  break;
 default:
  return (VAR_18);
 }
 switch (VAR_22->dst_burst_len) {
 case 1:
  VAR_27 = VAR_2;
  break;
 case 4:
  VAR_27 = VAR_4;
  break;
 case 8:
  VAR_27 = VAR_5;
  break;
 case 16:
  VAR_27 = VAR_3;
  break;
 default:
  return (VAR_18);
 }
 switch (VAR_22->src_width) {
 case 8:
  VAR_30 = VAR_9;
  break;
 case 16:
  VAR_30 = VAR_6;
  break;
 case 32:
  VAR_30 = VAR_7;
  break;
 case 64:
  VAR_30 = VAR_8;
 default:
  return (VAR_18);
 }
 switch (VAR_22->src_burst_len) {
 case 1:
  VAR_31 = VAR_2;
  break;
 case 4:
  VAR_31 = VAR_4;
  break;
 case 8:
  VAR_31 = VAR_5;
  break;
 case 16:
  VAR_31 = VAR_3;
  break;
 default:
  return (VAR_18);
 }
 VAR_29 = VAR_22->dst_noincr ? VAR_0 : VAR_1;
 VAR_33 = VAR_22->src_noincr ? VAR_0 : VAR_1;
 VAR_28 = VAR_22->dst_wait_cyc;
 VAR_32 = VAR_22->src_wait_cyc;
 if (VAR_28 != VAR_32)
  return (VAR_18);

 VAR_24 = (VAR_26 << VAR_12) |
   (VAR_27 << VAR_11) |
   (VAR_29 << VAR_10) |
   (VAR_22->dst_drqtype << VAR_13) |
   (VAR_30 << VAR_16) |
   (VAR_31 << VAR_15) |
   (VAR_33 << VAR_14) |
   (VAR_22->src_drqtype << VAR_17);
 VAR_25 = (VAR_28 << VAR_19);

 VAR_23->desc->config = FUNC_0(VAR_24);
 VAR_23->desc->para = FUNC_0(VAR_25);

 return (0);
}
