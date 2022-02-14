
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {scalar_t__ capacity; } ;
struct ck_rhs_iterator {scalar_t__ offset; } ;
struct ck_rhs {int mode; struct ck_rhs_map* map; } ;


 void* FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (struct ck_rhs_map*,scalar_t__) ;

bool
FUNC_3(struct ck_rhs *VAR_2, struct ck_rhs_iterator *VAR_3, void **VAR_4)
{
 struct ck_rhs_map *VAR_5 = VAR_2->map;
 void *VAR_6;

 if (VAR_3->offset >= VAR_5->capacity)
  return 0;

 do {
  VAR_6 = FUNC_0(FUNC_2(VAR_5, VAR_3->offset));
  if (VAR_6 != VAR_0) {




   VAR_3->offset++;
   *VAR_4 = VAR_6;
   return 1;
  }
 } while (++VAR_3->offset < VAR_5->capacity);

 return 0;
}
