
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct tda19988_softc {int dummy; } ;
typedef int device_t ;


 struct tda19988_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct tda19988_softc*,struct videomode const*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, const struct videomode *VAR_1)
{
 struct tda19988_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_1);

 return (0);
}
