
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct pci_dev {int dev; } ;


 scalar_t__ FUNC_0 (struct pci_dev*) ;
 struct snd_card* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_card*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct snd_card *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_0))
  FUNC_3(&VAR_0->dev);

 if (VAR_1)
  FUNC_4(VAR_1);
 FUNC_2(&VAR_0->dev);
}
