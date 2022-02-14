
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode {int dummy; } ;
struct awusbphy_softc {int mode; } ;
typedef int device_t ;


 struct awusbphy_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct phynode*) ;

__attribute__((used)) static int
FUNC_2(struct phynode *VAR_0, int *VAR_1)
{
 struct awusbphy_softc *VAR_2;
 device_t VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_3);

 *VAR_1 = VAR_2->mode;

 return (0);
}
