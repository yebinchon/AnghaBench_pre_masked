
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ifnet {struct epair_softc* if_softc; } ;
struct epair_softc {int cpuid; } ;



__attribute__((used)) static u_int
FUNC_0(struct ifnet *VAR_0)
{
 struct epair_softc *VAR_1;

 if (VAR_0 == ((void*)0))
  return (0);
 VAR_1 = VAR_0->if_softc;

 return (VAR_1->cpuid);
}
