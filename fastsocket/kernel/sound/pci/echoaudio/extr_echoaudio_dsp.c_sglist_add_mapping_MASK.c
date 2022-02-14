
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_entry {void* size; void* addr; } ;
struct echoaudio {int dummy; } ;
struct TYPE_2__ {scalar_t__ area; } ;
struct audiopipe {int sglist_head; TYPE_1__ sgpage; } ;
typedef size_t dma_addr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(struct echoaudio *VAR_2, struct audiopipe *VAR_3,
    dma_addr_t VAR_4, size_t VAR_5)
{
 int VAR_6 = VAR_3->sglist_head;
 struct sg_entry *VAR_7 = (struct sg_entry *)VAR_3->sgpage.area;

 if (VAR_6 < VAR_1 - 1) {
  VAR_7[VAR_6].addr = FUNC_1(VAR_4);
  VAR_7[VAR_6].size = FUNC_1(VAR_5);
  VAR_3->sglist_head++;
 } else {
  FUNC_0(("SGlist: too many fragments\n"));
  return -VAR_0;
 }
 return 0;
}
