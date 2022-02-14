
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int * regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct mgb_softc *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 FUNC_2(VAR_4->dev);
 VAR_4->regs = FUNC_1(VAR_4->dev, VAR_3,
     &VAR_5, VAR_2);
 if (VAR_4->regs == ((void*)0))
   return VAR_0;

 return (0);
}
