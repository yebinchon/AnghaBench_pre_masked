
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int card_present; int card_task; int card_delayed_task; int * dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct sdhci_slot *VAR_2, bool VAR_3)
{
 bool VAR_4;
 VAR_4 = VAR_2->dev != ((void*)0);

 if (!VAR_4 && VAR_3) {
  FUNC_1(VAR_1,
      &VAR_2->card_delayed_task, -VAR_0);
 } else if (VAR_4 && !VAR_3) {
  FUNC_0(VAR_1, &VAR_2->card_task);
 }
}
