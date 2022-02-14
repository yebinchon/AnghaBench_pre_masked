
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cqspi_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct cqspi_softc*,int ,int *,int ) ;
 struct cqspi_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1,
    uint8_t VAR_2, uint8_t *VAR_3, uint32_t VAR_4)
{
 struct cqspi_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0);

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);

 return (VAR_6);
}
