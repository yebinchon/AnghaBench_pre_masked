
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {scalar_t__ pmembase; scalar_t__ pmemlimit; } ;



__attribute__((used)) static int
FUNC_0(struct pcib_softc *VAR_0)
{
 return (VAR_0->pmembase > 0 && VAR_0->pmembase < VAR_0->pmemlimit);
}
