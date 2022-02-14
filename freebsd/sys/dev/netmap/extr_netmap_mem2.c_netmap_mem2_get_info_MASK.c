
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct netmap_obj_pool {scalar_t__ _clustsize; scalar_t__ _numclusters; } ;
struct netmap_mem_d {int flags; int nm_id; struct netmap_obj_pool* pools; scalar_t__ nm_totalsize; } ;
typedef int nm_memid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netmap_mem_d*) ;

__attribute__((used)) static int
FUNC_1(struct netmap_mem_d* VAR_2, uint64_t* VAR_3,
   u_int *VAR_4, nm_memid_t *VAR_5)
{
 int VAR_6 = 0;
 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6)
  goto out;
 if (VAR_3) {
  if (VAR_2->flags & VAR_0) {
   *VAR_3 = VAR_2->nm_totalsize;
  } else {
   int VAR_7;
   *VAR_3 = 0;
   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    struct netmap_obj_pool *VAR_8 = VAR_2->pools + VAR_7;
    *VAR_3 += ((size_t)VAR_8->_numclusters * (size_t)VAR_8->_clustsize);
   }
  }
 }
 if (VAR_4)
  *VAR_4 = VAR_2->flags;
 if (VAR_5)
  *VAR_5 = VAR_2->nm_id;
out:
 return VAR_6;
}
