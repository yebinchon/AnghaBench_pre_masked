
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int flags; int aac_dev; int aac_intr; int aac_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *,int *,struct aac_softc*,int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct aac_softc *VAR_6)
{

 if (VAR_6->flags & VAR_0) {
  if (FUNC_0(VAR_6->aac_dev, VAR_6->aac_irq,
       VAR_2|VAR_3, ((void*)0),
       VAR_5, VAR_6, &VAR_6->aac_intr)) {
   FUNC_1(VAR_6->aac_dev, "can't set up interrupt\n");
   return (VAR_1);
  }
 } else {
  if (FUNC_0(VAR_6->aac_dev, VAR_6->aac_irq,
       VAR_3, VAR_4, ((void*)0),
       VAR_6, &VAR_6->aac_intr)) {
   FUNC_1(VAR_6->aac_dev,
          "can't set up interrupt filter\n");
   return (VAR_1);
  }
 }
 return (0);
}
