
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dev; int * regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct mgb_softc *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->regs != ((void*)0))
  VAR_2 = FUNC_0(VAR_1->dev, VAR_0,
      FUNC_2(VAR_1->regs), VAR_1->regs);
 VAR_1->regs = ((void*)0);
 FUNC_1(VAR_1->dev);
 return VAR_2;
}
