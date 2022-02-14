
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct msdosfsmount {size_t pm_maxcluster; int pm_flags; unsigned int* pm_inusemap; scalar_t__ pm_freeclustercount; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct msdosfsmount*) ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static __inline void
FUNC_2(struct msdosfsmount *VAR_3, u_long VAR_4)
{

 FUNC_1(VAR_3);

 FUNC_0(VAR_4 <= VAR_3->pm_maxcluster, ("cn too large %lu %lu", VAR_4,
     VAR_3->pm_maxcluster));
 FUNC_0((VAR_3->pm_flags & VAR_0) == 0,
     ("usemap_alloc on ro msdosfs mount"));
 FUNC_0((VAR_3->pm_inusemap[VAR_4 / VAR_2] &
     (1U << (VAR_4 % VAR_2))) == 0,
     ("Allocating used sector %ld %ld %x", VAR_4, VAR_4 % VAR_2,
     (unsigned)VAR_3->pm_inusemap[VAR_4 / VAR_2]));
 VAR_3->pm_inusemap[VAR_4 / VAR_2] |= 1U << (VAR_4 % VAR_2);
 FUNC_0(VAR_3->pm_freeclustercount > 0, ("usemap_alloc: too little"));
 VAR_3->pm_freeclustercount--;
 VAR_3->pm_flags |= VAR_1;
}
