
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {scalar_t__ membase; scalar_t__ memlimit; } ;



__attribute__((used)) static int
FUNC_0(struct pcib_softc *VAR_0)
{
 return (VAR_0->membase > 0 && VAR_0->membase < VAR_0->memlimit);
}
