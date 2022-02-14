
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {scalar_t__ capacity; int * entries; } ;
struct ck_hs_iterator {scalar_t__ offset; } ;
struct ck_hs {int mode; } ;


 void* FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static bool
FUNC_2(struct ck_hs *VAR_3, struct ck_hs_map *VAR_4, struct ck_hs_iterator *VAR_5, void **VAR_6)
{
 void *VAR_7;
 if (VAR_5->offset >= VAR_4->capacity)
  return 0;

 do {
  VAR_7 = FUNC_0(VAR_4->entries[VAR_5->offset]);
  if (VAR_7 != VAR_0 && VAR_7 != VAR_2) {




   (void)VAR_3;

   VAR_5->offset++;
   *VAR_6 = VAR_7;
   return 1;
  }
 } while (++VAR_5->offset < VAR_4->capacity);

 return 0;
}
