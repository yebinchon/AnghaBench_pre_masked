
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {unsigned long* dirty_bitmap; } ;
struct kvm_dirty_log {size_t slot; int dirty_bitmap; } ;
struct kvm {TYPE_1__* memslots; } ;
struct TYPE_2__ {struct kvm_memory_slot* memslots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned long*,unsigned long) ;
 unsigned long FUNC_1 (struct kvm_memory_slot*) ;

int FUNC_2(struct kvm *VAR_4,
   struct kvm_dirty_log *VAR_5, int *VAR_6)
{
 struct kvm_memory_slot *VAR_7;
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11 = 0;

 VAR_8 = -VAR_1;
 if (VAR_5->slot >= VAR_3)
  goto out;

 VAR_7 = &VAR_4->memslots->memslots[VAR_5->slot];
 VAR_8 = -VAR_2;
 if (!VAR_7->dirty_bitmap)
  goto out;

 VAR_10 = FUNC_1(VAR_7);

 for (VAR_9 = 0; !VAR_11 && VAR_9 < VAR_10/sizeof(long); ++VAR_9)
  VAR_11 = VAR_7->dirty_bitmap[VAR_9];

 VAR_8 = -VAR_0;
 if (FUNC_0(VAR_5->dirty_bitmap, VAR_7->dirty_bitmap, VAR_10))
  goto out;

 if (VAR_11)
  *VAR_6 = 1;

 VAR_8 = 0;
out:
 return VAR_8;
}
