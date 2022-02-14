
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {unsigned long mask; int probe_maximum; int * probe_bound; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static inline unsigned int
FUNC_2(struct ck_hs_map *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_2 & VAR_1->mask;
 unsigned int VAR_4 = VAR_0;

 if (VAR_1->probe_bound != ((void*)0)) {
  VAR_4 = FUNC_0(&VAR_1->probe_bound[VAR_3]);
  if (VAR_4 == VAR_0)
   VAR_4 = FUNC_1(&VAR_1->probe_maximum);
 } else {
  VAR_4 = FUNC_1(&VAR_1->probe_maximum);
 }

 return VAR_4;
}
