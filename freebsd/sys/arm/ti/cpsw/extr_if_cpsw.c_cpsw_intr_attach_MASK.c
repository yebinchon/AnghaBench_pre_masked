
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpsw_softc {int * ih_cookie; int * irq_res; int dev; } ;
struct TYPE_2__ {int cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *,int ,struct cpsw_softc*,int *) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct cpsw_softc *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_0(VAR_4->dev, VAR_4->irq_res[VAR_5],
      VAR_2 | VAR_1, ((void*)0),
      VAR_3[VAR_5].cb, VAR_4, &VAR_4->ih_cookie[VAR_5]) != 0) {
   return (-1);
  }
 }

 return (0);
}
