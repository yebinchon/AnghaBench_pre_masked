
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct reference {size_t ref; int * object; } ;
struct TYPE_2__ {size_t index_mask; size_t first_free; size_t last_free; struct reference* entries; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(u32 VAR_2)
{
 struct reference *VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 if (!VAR_1.entries) {
  FUNC_0("Reference table not found during discard attempt\n");
  return;
 }

 VAR_5 = VAR_1.index_mask;
 VAR_4 = VAR_2 & VAR_5;
 VAR_3 = &(VAR_1.entries[VAR_4]);

 FUNC_1(&VAR_0);

 if (!VAR_3->object) {
  FUNC_0("Attempt to discard reference to non-existent object\n");
  goto exit;
 }
 if (VAR_3->ref != VAR_2) {
  FUNC_0("Attempt to discard non-existent reference\n");
  goto exit;
 }






 VAR_3->object = ((void*)0);
 VAR_3->ref = (VAR_2 & ~VAR_5) + (VAR_5 + 1);



 if (VAR_1.first_free == 0)
  VAR_1.first_free = VAR_4;
 else
  VAR_1.entries[VAR_1.last_free].ref |= VAR_4;
 VAR_1.last_free = VAR_4;

exit:
 FUNC_2(&VAR_0);
}
