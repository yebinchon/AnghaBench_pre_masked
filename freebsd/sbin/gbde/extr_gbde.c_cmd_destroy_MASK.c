
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_key {int * lsector; int * mkey; int flags; int keyoffset; int sectorN; int sector0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(struct g_bde_key *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2->sector0, sizeof VAR_2->sector0);
 FUNC_0(&VAR_2->sectorN, sizeof VAR_2->sectorN);
 FUNC_0(&VAR_2->keyoffset, sizeof VAR_2->keyoffset);
 VAR_2->flags &= VAR_0;
 FUNC_0(VAR_2->mkey, sizeof VAR_2->mkey);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_4 != VAR_3)
   VAR_2->lsector[VAR_4] = ~0;
}
