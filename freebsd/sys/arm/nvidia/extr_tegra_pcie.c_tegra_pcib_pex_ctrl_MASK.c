
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcib_softc {int dummy; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static bus_size_t
FUNC_1(struct tegra_pcib_softc *VAR_4, int VAR_5)
{
 if (VAR_5 >= VAR_3)
  FUNC_0("invalid port number: %d\n", VAR_5);

 if (VAR_5 == 0)
  return (VAR_0);
 else if (VAR_5 == 1)
  return (VAR_1);
 else if (VAR_5 == 2)
  return (VAR_2);
 else
  FUNC_0("invalid port number: %d\n", VAR_5);
}
