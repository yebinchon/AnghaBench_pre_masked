
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_obj_pool {size_t numclusters; size_t _clustentries; int _clustsize; int _objsize; int name; TYPE_1__* lut; } ;
typedef int ssize_t ;
struct TYPE_2__ {void* vaddr; } ;


 int FUNC_0 (struct netmap_obj_pool*,size_t) ;
 int FUNC_1 (char*,void*,int ) ;

__attribute__((used)) static void
FUNC_2(struct netmap_obj_pool *VAR_0, void *VAR_1)
{
 u_int VAR_2, VAR_3, VAR_4 = VAR_0->numclusters;

 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_4; VAR_2++, VAR_3 += VAR_0->_clustentries) {
  void *VAR_5 = VAR_0->lut[VAR_2 * VAR_0->_clustentries].vaddr;
  ssize_t VAR_6 = (ssize_t) VAR_1 - (ssize_t) VAR_5;


  if (VAR_5 == ((void*)0) || VAR_1 < VAR_5 || VAR_6 >= VAR_0->_clustsize)
   continue;

  VAR_3 = VAR_3 + VAR_6 / VAR_0->_objsize;

  FUNC_0(VAR_0, VAR_3);
  return;
 }
 FUNC_1("address %p is not contained inside any cluster (%s)",
     VAR_1, VAR_0->name);
}
