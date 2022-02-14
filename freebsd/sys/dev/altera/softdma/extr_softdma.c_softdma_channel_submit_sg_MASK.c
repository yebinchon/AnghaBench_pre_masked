
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdma_sglist {scalar_t__ direction; int first; int last; int dst_addr; int src_addr; scalar_t__ len; } ;
struct xdma_channel {scalar_t__ chan; } ;
struct softdma_softc {int dummy; } ;
struct softdma_desc {int src_incr; int dst_incr; scalar_t__ direction; int len; int control; scalar_t__ reserved; scalar_t__ status; scalar_t__ transfered; int dst_addr; int src_addr; } ;
struct softdma_channel {size_t idx_head; int run; int descs_used_count; struct softdma_desc* descs; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int) ;
 struct softdma_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct softdma_softc*,int ,int ) ;
 int FUNC_3 (struct softdma_channel*,int) ;
 int FUNC_4 (struct softdma_channel*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, struct xdma_channel *VAR_7,
    struct xdma_sglist *VAR_8, uint32_t VAR_9)
{
 struct softdma_channel *VAR_10;
 struct softdma_desc *VAR_11;
 struct softdma_softc *VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 int VAR_17;

 VAR_12 = FUNC_1(VAR_6);

 VAR_10 = (struct softdma_channel *)VAR_7->chan;

 VAR_13 = 0;

 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  VAR_16 = (uint32_t)VAR_8[VAR_17].len;

  VAR_11 = &VAR_10->descs[VAR_10->idx_head];
  VAR_11->src_addr = VAR_8[VAR_17].src_addr;
  VAR_11->dst_addr = VAR_8[VAR_17].dst_addr;
  if (VAR_8[VAR_17].direction == VAR_5) {
   VAR_11->src_incr = 1;
   VAR_11->dst_incr = 0;
  } else {
   VAR_11->src_incr = 0;
   VAR_11->dst_incr = 1;
  }
  VAR_11->direction = VAR_8[VAR_17].direction;
  VAR_14 = VAR_8[VAR_17].direction;
  VAR_11->len = VAR_16;
  VAR_11->transfered = 0;
  VAR_11->status = 0;
  VAR_11->reserved = 0;
  VAR_11->control = 0;

  if (VAR_8[VAR_17].first == 1)
   VAR_11->control |= VAR_2;
  if (VAR_8[VAR_17].last == 1)
   VAR_11->control |= VAR_1;

  VAR_15 = VAR_10->idx_head;
  VAR_10->idx_head = FUNC_3(VAR_10, VAR_10->idx_head);
  FUNC_0(&VAR_10->descs_used_count, 1);
  VAR_11->control |= VAR_3;
  VAR_13 += 1;
 }

 if (VAR_13 == 0)
  return (0);

 if (VAR_14 == VAR_5) {
  VAR_10->run = 1;
  FUNC_4(VAR_10);
 } else
  FUNC_2(VAR_12,
      VAR_0,
      VAR_4);

 return (0);
}
