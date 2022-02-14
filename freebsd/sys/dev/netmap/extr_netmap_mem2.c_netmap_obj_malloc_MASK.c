
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ u_int ;
struct netmap_obj_pool {scalar_t__ _objsize; scalar_t__ objfree; size_t bitmap_slots; size_t* bitmap; int name; TYPE_1__* lut; } ;
struct TYPE_2__ {void* vaddr; } ;


 int FUNC_0 (char*,int ,size_t,size_t,void*) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static void *
FUNC_2(struct netmap_obj_pool *VAR_0, u_int VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4 = 0;
 uint32_t VAR_5, VAR_6 = 0;
 void *VAR_7 = ((void*)0);

 if (VAR_1 > VAR_0->_objsize) {
  FUNC_1("%s request size %d too large", VAR_0->name, VAR_1);
  return ((void*)0);
 }

 if (VAR_0->objfree == 0) {
  FUNC_1("no more %s objects", VAR_0->name);
  return ((void*)0);
 }
 if (VAR_2)
  VAR_4 = *VAR_2;


 while (VAR_7 == ((void*)0) && VAR_4 < VAR_0->bitmap_slots) {
  uint32_t VAR_8 = VAR_0->bitmap[VAR_4];
  if (VAR_8 == 0) {
   VAR_4++;
   continue;
  }

  for (VAR_6 = 0, VAR_5 = 1; (VAR_8 & VAR_5) == 0; VAR_6++, VAR_5 <<= 1)
   ;

  VAR_0->bitmap[VAR_4] &= ~VAR_5;
  VAR_0->objfree--;

  VAR_7 = VAR_0->lut[VAR_4 * 32 + VAR_6].vaddr;
  if (VAR_3)
   *VAR_3 = VAR_4 * 32 + VAR_6;
 }
 FUNC_0("%s allocator: allocated object @ [%d][%d]: vaddr %p",VAR_0->name, VAR_4, VAR_6, VAR_7);

 if (VAR_2)
  *VAR_2 = VAR_4;
 return VAR_7;
}
