
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct auxio_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct auxio_softc*) ;
 int FUNC_1 (struct auxio_softc*) ;
 int FUNC_2 (struct auxio_softc*) ;
 int FUNC_3 (struct auxio_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, int VAR_2)
{
 struct auxio_softc *VAR_3;
 u_int32_t VAR_4;

 VAR_3 = (struct auxio_softc *)VAR_1;

 FUNC_0(VAR_3);



 VAR_4 = FUNC_2(VAR_3);
 if (VAR_2)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_3(VAR_3, VAR_4);
 FUNC_1(VAR_3);
}
