
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_softc {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct rsu_softc *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == 0)
  return (0);
 VAR_2 = VAR_1 >> 4;
 if (VAR_2 > 80)
  VAR_2 = 80;
 return (VAR_2);
}
