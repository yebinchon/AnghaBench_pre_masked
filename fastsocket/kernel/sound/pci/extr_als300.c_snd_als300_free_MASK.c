
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_als300 {scalar_t__ irq; int pci; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct snd_als300*) ;
 int FUNC_1 (struct snd_als300*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct snd_als300*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_als300 *VAR_1)
{
 FUNC_4();
 FUNC_6(VAR_1, VAR_0);
 if (VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, VAR_1);
 FUNC_3(VAR_1->pci);
 FUNC_2(VAR_1->pci);
 FUNC_1(VAR_1);
 FUNC_5();
 return 0;
}
