
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_cid {int mdt_year; void* mdt_month; void* psn; void* prv; void** pnm; void* oid; void* mid; } ;


 int FUNC_0 (struct mmc_cid*,int ,int) ;
 void* FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_0, struct mmc_cid *VAR_1, bool VAR_2)
{
 int VAR_3;


 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->mid = FUNC_1(VAR_0, 128, 120, 8);
 VAR_1->oid = FUNC_1(VAR_0, 128, 104, 8);
 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  VAR_1->pnm[VAR_3] = FUNC_1(VAR_0, 128, 96 - VAR_3 * 8, 8);
 VAR_1->pnm[6] = 0;
 VAR_1->prv = FUNC_1(VAR_0, 128, 48, 8);
 VAR_1->psn = FUNC_1(VAR_0, 128, 16, 32);
 VAR_1->mdt_month = FUNC_1(VAR_0, 128, 12, 4);
 VAR_1->mdt_year = FUNC_1(VAR_0, 128, 8, 4);
 if (VAR_2)
  VAR_1->mdt_year += 2013;
 else
  VAR_1->mdt_year += 1997;
}
