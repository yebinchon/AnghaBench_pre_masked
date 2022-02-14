
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct vring_desc {size_t next; int flags; int len; int addr; } ;
struct virtqueue {int dummy; } ;
struct sglist_seg {int ss_len; int ss_paddr; } ;
struct sglist {struct sglist_seg* sg_segs; } ;


 int FUNC_0 (struct virtqueue*,int,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint16_t
FUNC_1(struct virtqueue *VAR_3, struct vring_desc *VAR_4,
    uint16_t VAR_5, struct sglist *VAR_6, int VAR_7, int VAR_8)
{
 struct sglist_seg *VAR_9;
 struct vring_desc *VAR_10;
 int VAR_11, VAR_12;
 uint16_t VAR_13;

 VAR_12 = VAR_7 + VAR_8;

 for (VAR_11 = 0, VAR_13 = VAR_5, VAR_9 = VAR_6->sg_segs;
      VAR_11 < VAR_12;
      VAR_11++, VAR_13 = VAR_10->next, VAR_9++) {
  FUNC_0(VAR_3, VAR_13 != VAR_0,
      "premature end of free desc chain");

  VAR_10 = &VAR_4[VAR_13];
  VAR_10->addr = VAR_9->ss_paddr;
  VAR_10->len = VAR_9->ss_len;
  VAR_10->flags = 0;

  if (VAR_11 < VAR_12 - 1)
   VAR_10->flags |= VAR_1;
  if (VAR_11 >= VAR_7)
   VAR_10->flags |= VAR_2;
 }

 return (VAR_13);
}
