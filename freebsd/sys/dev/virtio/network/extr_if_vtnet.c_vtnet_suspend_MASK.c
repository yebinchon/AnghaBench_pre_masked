
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_flags; } ;
typedef int device_t ;


 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int VAR_0 ;
 struct vtnet_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct vtnet_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 VAR_2->vtnet_flags |= VAR_0;
 FUNC_1(VAR_2);

 return (0);
}
