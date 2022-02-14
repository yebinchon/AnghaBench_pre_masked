
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct reference {size_t ref; int lock; void* object; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int first_free; size_t index_mask; scalar_t__ init_point; scalar_t__ capacity; size_t start_mask; struct reference* entries; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u32 FUNC_5(void *VAR_2, spinlock_t **VAR_3)
{
 struct reference *VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 if (!VAR_2) {
  FUNC_0("Attempt to acquire reference to non-existent object\n");
  return 0;
 }
 if (!VAR_1.entries) {
  FUNC_0("Reference table not found during acquisition attempt\n");
  return 0;
 }



 FUNC_3(&VAR_0);
 if (VAR_1.first_free) {
  VAR_5 = VAR_1.first_free;
  VAR_4 = &(VAR_1.entries[VAR_5]);
  VAR_6 = VAR_1.index_mask;

  FUNC_1(&VAR_4->lock);
  VAR_7 = VAR_4->ref;
  VAR_1.first_free = VAR_7 & VAR_6;
  VAR_8 = (VAR_7 & ~VAR_6) + VAR_5;
  VAR_4->ref = VAR_8;
  VAR_4->object = VAR_2;
  *VAR_3 = &VAR_4->lock;
 }
 else if (VAR_1.init_point < VAR_1.capacity) {
  VAR_5 = VAR_1.init_point++;
  VAR_4 = &(VAR_1.entries[VAR_5]);
  FUNC_2(&VAR_4->lock);
  FUNC_1(&VAR_4->lock);
  VAR_8 = VAR_1.start_mask + VAR_5;
  VAR_4->ref = VAR_8;
  VAR_4->object = VAR_2;
  *VAR_3 = &VAR_4->lock;
 }
 else {
  VAR_8 = 0;
 }
 FUNC_4(&VAR_0);

 return VAR_8;
}
