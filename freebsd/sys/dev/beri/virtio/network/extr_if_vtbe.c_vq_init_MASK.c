
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct vtbe_softc {size_t vs_curq; int beri_mem_offset; struct vqueue_info* vs_queues; } ;
struct vring_used {int dummy; } ;
struct vring_desc {int dummy; } ;
struct vring_avail {int dummy; } ;
struct vqueue_info {int vq_qsize; int vq_pfn; scalar_t__ vq_last_avail; int vq_flags; struct vring_used* vq_used; struct vring_avail* vq_avail; struct vring_desc* vq_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtbe_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (uintptr_t,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(struct vtbe_softc *VAR_5)
{
 struct vqueue_info *VAR_6;
 uint8_t *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_6 = &VAR_5->vs_queues[VAR_5->vs_curq];
 VAR_6->vq_qsize = VAR_0;

 VAR_9 = FUNC_0(VAR_5, VAR_2);
 VAR_10 = FUNC_1(VAR_9);
 VAR_6->vq_pfn = VAR_10;

 VAR_8 = FUNC_4(VAR_6->vq_qsize, VAR_4);
 VAR_7 = FUNC_2(VAR_5->beri_mem_offset,
  (VAR_10 << VAR_1), VAR_8);


 VAR_6->vq_desc = (struct vring_desc *)VAR_7;
 VAR_7 += VAR_6->vq_qsize * sizeof(struct vring_desc);


 VAR_6->vq_avail = (struct vring_avail *)VAR_7;
 VAR_7 += (2 + VAR_6->vq_qsize + 1) * sizeof(uint16_t);


 VAR_7 = (uint8_t *)FUNC_3((uintptr_t)VAR_7, VAR_4);


 VAR_6->vq_used = (struct vring_used *)VAR_7;


 VAR_6->vq_flags = VAR_3;
 VAR_6->vq_last_avail = 0;

 return (0);
}
