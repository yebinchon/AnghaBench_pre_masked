
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
typedef unsigned int u_int ;
struct msdosfsmount {size_t pm_maxcluster; unsigned int* pm_inusemap; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (struct msdosfsmount*) ;
 size_t VAR_0 ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct msdosfsmount *VAR_1, u_long VAR_2, u_long VAR_3)
{
 u_long VAR_4, VAR_5;
 u_int VAR_6;
 u_long VAR_7;

 FUNC_1(VAR_1);

 if (VAR_2 > VAR_1->pm_maxcluster)
  return (0);
 VAR_5 = VAR_1->pm_maxcluster / VAR_0;
 VAR_4 = VAR_2 / VAR_0;
 VAR_2 %= VAR_0;
 VAR_6 = VAR_1->pm_inusemap[VAR_4];
 VAR_6 &= ~((1U << VAR_2) - 1);
 if (VAR_6) {
  VAR_7 = FUNC_2(VAR_6) - 1 - VAR_2;
  VAR_7 = FUNC_0(VAR_7, VAR_3);
  if (VAR_2 + VAR_7 > VAR_1->pm_maxcluster)
   VAR_7 = VAR_1->pm_maxcluster - VAR_2 + 1;
  return (VAR_7);
 }
 VAR_7 = VAR_0 - VAR_2;
 if (VAR_7 >= VAR_3) {
  VAR_7 = VAR_3;
  if (VAR_2 + VAR_7 > VAR_1->pm_maxcluster)
   VAR_7 = VAR_1->pm_maxcluster - VAR_2 + 1;
  return (VAR_7);
 }
 while (++VAR_4 <= VAR_5) {
  if (VAR_7 >= VAR_3)
   break;
  VAR_6 = VAR_1->pm_inusemap[VAR_4];
  if (VAR_6) {
   VAR_7 += FUNC_2(VAR_6) - 1;
   break;
  }
  VAR_7 += VAR_0;
 }
 VAR_7 = FUNC_0(VAR_7, VAR_3);
 if (VAR_2 + VAR_7 > VAR_1->pm_maxcluster)
  VAR_7 = VAR_1->pm_maxcluster - VAR_2 + 1;
 return (VAR_7);
}
