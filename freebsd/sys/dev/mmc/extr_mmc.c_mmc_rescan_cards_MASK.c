
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int child_count; int * child_list; int dev; } ;
struct mmc_ivars {int rca; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct mmc_ivars* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct mmc_ivars*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (struct mmc_softc*,int ) ;
 int FUNC_5 (struct mmc_softc*) ;

__attribute__((used)) static void
FUNC_6(struct mmc_softc *VAR_4)
{
 struct mmc_ivars *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 for (VAR_7 = VAR_8 = 0; VAR_7 < VAR_4->child_count; VAR_7++) {
  VAR_5 = FUNC_1(VAR_4->child_list[VAR_7]);
  if (FUNC_4(VAR_4, VAR_5->rca) != VAR_0) {
   if (VAR_2 || VAR_3)
    FUNC_2(VAR_4->dev,
        "Card at relative address %d lost\n",
        VAR_5->rca);
   VAR_6 = FUNC_0(VAR_4->dev, VAR_4->child_list[VAR_7]);
   if (VAR_6 != 0) {
    VAR_8++;
    continue;
   }
   FUNC_3(VAR_5, VAR_1);
  } else
   VAR_8++;
 }
 if (VAR_4->child_count == VAR_8)
  goto out;
 VAR_4->child_count = VAR_8;
 FUNC_5(VAR_4);
out:
 (void)FUNC_4(VAR_4, 0);
}
