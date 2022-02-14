
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct netmap_obj_pool {unsigned int* bitmap; int objtotal; int bitmap_slots; int objfree; int name; scalar_t__ invalid_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 unsigned int* FUNC_2 (int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct netmap_obj_pool *VAR_4)
{
 u_int VAR_5, VAR_6;

 if (VAR_4->bitmap == ((void*)0)) {

  VAR_5 = (VAR_4->objtotal + 31) / 32;
  VAR_4->bitmap = FUNC_2(sizeof(VAR_4->bitmap[0]) * VAR_5);
  if (VAR_4->bitmap == ((void*)0)) {
   FUNC_3("Unable to create bitmap (%d entries) for allocator '%s'", (int)VAR_5,
       VAR_4->name);
   return VAR_0;
  }
  VAR_4->bitmap_slots = VAR_5;
 } else {
  FUNC_0(VAR_4->bitmap, 0, VAR_4->bitmap_slots * sizeof(VAR_4->bitmap[0]));
 }

 VAR_4->objfree = 0;





 for (VAR_6 = 0; VAR_6 < VAR_4->objtotal; VAR_6++) {
  if (VAR_4->invalid_bitmap && FUNC_1(VAR_4->invalid_bitmap, VAR_6)) {
   if (VAR_2 & VAR_1)
    FUNC_4("skipping %s %d", VAR_4->name, VAR_6);
   continue;
  }
  VAR_4->bitmap[ (VAR_6>>5) ] |= ( 1U << (VAR_6 & 31U) );
  VAR_4->objfree++;
 }

 if (VAR_3)
  FUNC_4("%s free %u", VAR_4->name, VAR_4->objfree);
 if (VAR_4->objfree == 0) {
  if (VAR_3)
   FUNC_3("%s: no objects available", VAR_4->name);
  return VAR_0;
 }

 return 0;
}
