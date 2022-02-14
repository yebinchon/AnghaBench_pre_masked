
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sdiob_softc {int periph; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sdiob_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct sdiob_softc*,int ,int ,int,int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, uint8_t VAR_1, uint32_t VAR_2, bool VAR_3,
    uint8_t *VAR_4)
{
 struct sdiob_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_0);
 FUNC_0(VAR_5->periph);
 VAR_6 = FUNC_3(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_5->periph);
 return (VAR_6);
}
