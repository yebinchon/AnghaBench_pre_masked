
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmci_doorbell_entry {int idx; int resource; } ;
struct TYPE_2__ {int lock; int * entries; } ;


 int FUNC_0 (struct vmci_doorbell_entry*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct vmci_doorbell_entry*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct vmci_doorbell_entry *VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;

 FUNC_0(VAR_7);

 FUNC_6(&VAR_7->resource);

 FUNC_3(&VAR_6.lock);
 if (VAR_4 < VAR_0 || VAR_5 < VAR_0) {
  if (VAR_2 < VAR_4 &&
      !FUNC_2(VAR_2)) {
   VAR_9 = VAR_2;
   VAR_2 = VAR_0;
  } else {
   bool VAR_10 = 0;
   VAR_9 = VAR_3;
   if (VAR_5 + 1 < VAR_4) {
    do {
     if (!FUNC_2(
         VAR_9)) {
      VAR_10 = 1;
      break;
     }
     VAR_9 = (VAR_9 + 1) %
         VAR_4;
    } while (VAR_9 !=
        VAR_2);
   }
   if (!VAR_10) {
    VAR_9 = VAR_4;
    VAR_4++;
   }
  }
 } else {
  VAR_9 = (VAR_3 + 1) % VAR_0;
 }
 VAR_3 = VAR_9;
 VAR_5++;

 VAR_7->idx = VAR_9;
 VAR_8 = FUNC_1(VAR_7->idx);
 FUNC_4(&VAR_6.entries[VAR_8], VAR_7,
     VAR_1);

 FUNC_5(&VAR_6.lock);
}
