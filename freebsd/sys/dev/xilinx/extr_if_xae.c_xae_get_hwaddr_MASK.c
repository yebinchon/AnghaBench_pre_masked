
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct xae_softc {int dev; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct xae_softc *VAR_2, uint8_t *VAR_3)
{
 phandle_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2->dev);


 if ((VAR_5 = FUNC_1(VAR_4, "local-mac-address")) <= 0)
  return (VAR_0);

 if (VAR_5 != VAR_1)
  return (VAR_0);

 FUNC_0(VAR_4, "local-mac-address", VAR_3,
     VAR_1);

 return (0);
}
