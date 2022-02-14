
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct vring_used_elem {void* len; void* id; } ;
struct vring_used {int idx; struct vring_used_elem* ring; } ;
struct vqueue_info {size_t vq_qsize; int vq_last_avail; TYPE_1__* vq_avail; struct vring_used* vq_used; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_2__ {int * ring; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (void*,int ) ;

void
FUNC_4(struct vqueue_info *VAR_0, struct iovec *VAR_1, int VAR_2, uint32_t VAR_3)
{
 volatile struct vring_used_elem *VAR_4;
 volatile struct vring_used *VAR_5;
 uint16_t VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_8 = VAR_0->vq_qsize - 1;
 VAR_5 = VAR_0->vq_used;
 VAR_6 = FUNC_0(VAR_0->vq_avail->ring[VAR_0->vq_last_avail++ & VAR_8]);

 VAR_7 = FUNC_0(VAR_5->idx);
 VAR_4 = &VAR_5->ring[VAR_7++ & VAR_8];
 VAR_4->id = FUNC_2(VAR_6);

 VAR_4->len = FUNC_2(VAR_3);
 VAR_5->idx = FUNC_1(VAR_7);


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  FUNC_3((void *)VAR_1[VAR_9].iov_base, VAR_1[VAR_9].iov_len);
 }
}
