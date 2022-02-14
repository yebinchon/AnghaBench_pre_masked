
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pio_softc*,int ,int) ;
 struct pio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, int VAR_3, int VAR_4)
{
 struct pio_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_5, VAR_1, VAR_4);
 FUNC_0(VAR_5, VAR_0, VAR_3);

 return (0);
}
