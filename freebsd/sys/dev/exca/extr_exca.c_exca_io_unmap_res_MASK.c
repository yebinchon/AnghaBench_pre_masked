
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct exca_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct exca_softc*,struct resource*) ;
 int FUNC_1 (struct exca_softc*,int) ;

int
FUNC_2(struct exca_softc *VAR_1, struct resource *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return (VAR_0);
 FUNC_1(VAR_1, VAR_3);
 return (0);
}
