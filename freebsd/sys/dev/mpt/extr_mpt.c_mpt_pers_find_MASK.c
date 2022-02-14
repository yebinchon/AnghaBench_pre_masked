
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mpt_softc {int mpt_pers_mask; } ;
struct mpt_personality {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct mpt_personality** VAR_1 ;

__attribute__((used)) static __inline struct mpt_personality *
FUNC_1(struct mpt_softc *VAR_2, u_int VAR_3)
{
 FUNC_0(VAR_3 <= VAR_0,
  ("mpt_pers_find: starting position out of range"));

 while (VAR_3 < VAR_0
     && (VAR_2->mpt_pers_mask & (0x1 << VAR_3)) == 0) {
  VAR_3++;
 }
 return (VAR_1[VAR_3]);
}
