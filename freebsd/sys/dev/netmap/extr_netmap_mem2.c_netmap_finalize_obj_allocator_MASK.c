
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_obj_pool {int numclusters; int _numclusters; int objtotal; int _objtotal; int alloc_done; size_t _clustsize; int _clustentries; size_t memtotal; int name; TYPE_1__* lut; int _objsize; } ;
struct TYPE_2__ {char* vaddr; int paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,size_t,int ) ;
 char* FUNC_1 (size_t,int ,int,size_t,unsigned long,int ,int ) ;
 int FUNC_2 (struct netmap_obj_pool*) ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,int,int,int,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct netmap_obj_pool *VAR_6)
{
 int VAR_7;
 size_t VAR_8;

 if (VAR_6->lut) {







  return 0;
 }


 VAR_6->numclusters = VAR_6->_numclusters;
 VAR_6->objtotal = VAR_6->_objtotal;
 VAR_6->alloc_done = 1;

 VAR_6->lut = FUNC_3(VAR_6->objtotal);
 if (VAR_6->lut == ((void*)0)) {
  FUNC_4("Unable to create lookup table for '%s'", VAR_6->name);
  goto clean;
 }





 VAR_8 = VAR_6->_clustsize;
 for (VAR_7 = 0; VAR_7 < (int)VAR_6->objtotal;) {
  int VAR_9 = VAR_7 + VAR_6->_clustentries;
  char *VAR_10;
  VAR_10 = FUNC_1(VAR_8, VAR_1, VAR_2 | VAR_3,
      (size_t)0, -1UL, VAR_4, 0);
  if (VAR_10 == ((void*)0)) {




   FUNC_4("Unable to create cluster at %d for '%s' allocator",
       VAR_7, VAR_6->name);
   if (VAR_7 < 2)
    goto out;
   VAR_9 = VAR_7 / 2;
   for (VAR_7--; VAR_7 >= VAR_9; VAR_7--) {
    if (VAR_7 % VAR_6->_clustentries == 0 && VAR_6->lut[VAR_7].vaddr)
     FUNC_0(VAR_6->lut[VAR_7].vaddr,
      VAR_8, VAR_1);
    VAR_6->lut[VAR_7].vaddr = ((void*)0);
   }
  out:
   VAR_6->objtotal = VAR_7;

   VAR_6->numclusters = (VAR_7 + VAR_6->_clustentries - 1) / VAR_6->_clustentries;
   break;
  }
  for (; VAR_7 < VAR_9; VAR_7++, VAR_10 += VAR_6->_objsize) {
   VAR_6->lut[VAR_7].vaddr = VAR_10;



  }
 }
 VAR_6->memtotal = (size_t)VAR_6->numclusters * (size_t)VAR_6->_clustsize;
 if (VAR_5)
  FUNC_5("Pre-allocated %d clusters (%d/%zuKB) for '%s'",
      VAR_6->numclusters, VAR_6->_clustsize >> 10,
      VAR_6->memtotal >> 10, VAR_6->name);

 return 0;

clean:
 FUNC_2(VAR_6);
 return VAR_0;
}
