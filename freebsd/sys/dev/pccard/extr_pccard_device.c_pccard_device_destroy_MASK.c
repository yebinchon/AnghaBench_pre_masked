
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_softc {scalar_t__ cisdev; } ;


 int FUNC_0 (scalar_t__) ;

int
FUNC_1(struct pccard_softc *VAR_0)
{
 if (VAR_0->cisdev)
  FUNC_0(VAR_0->cisdev);
 return (0);
}
