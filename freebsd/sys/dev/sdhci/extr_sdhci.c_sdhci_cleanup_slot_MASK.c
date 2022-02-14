
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int opt; int tune_data; int tune_cmd; int tune_req; int bus; int * dev; int card_delayed_task; int card_task; int retune_callout; int card_poll_callout; int timeout_callout; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdhci_slot*) ;
 int FUNC_1 (struct sdhci_slot*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sdhci_slot*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sdhci_slot*) ;
 int FUNC_7 (struct sdhci_slot*,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int VAR_4 ;

int
FUNC_10(struct sdhci_slot *VAR_5)
{
 device_t VAR_6;

 FUNC_3(&VAR_5->timeout_callout);
 FUNC_3(&VAR_5->card_poll_callout);
 FUNC_3(&VAR_5->retune_callout);
 FUNC_8(VAR_4, &VAR_5->card_task);
 FUNC_9(VAR_4, &VAR_5->card_delayed_task);

 FUNC_0(VAR_5);
 VAR_6 = VAR_5->dev;
 VAR_5->dev = ((void*)0);
 FUNC_2(VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_4(VAR_5->bus, VAR_6);

 FUNC_0(VAR_5);
 FUNC_7(VAR_5, VAR_2);
 FUNC_2(VAR_5);
 if (VAR_5->opt & VAR_1)
  FUNC_6(VAR_5);
 if (VAR_5->opt & VAR_3) {
  FUNC_5(VAR_5->tune_req, VAR_0);
  FUNC_5(VAR_5->tune_cmd, VAR_0);
  FUNC_5(VAR_5->tune_data, VAR_0);
 }

 FUNC_1(VAR_5);

 return (0);
}
