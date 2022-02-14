
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vtmmio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct vtmmio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vtmmio_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2, uint8_t VAR_3)
{
 struct vtmmio_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 != VAR_0)
  VAR_3 |= FUNC_1(VAR_2);

 FUNC_2(VAR_4, VAR_1, VAR_3);
}
