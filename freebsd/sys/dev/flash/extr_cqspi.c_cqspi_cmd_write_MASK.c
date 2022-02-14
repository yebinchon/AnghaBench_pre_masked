
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cqspi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cqspi_softc*,int ,int) ;
 int FUNC_1 (struct cqspi_softc*) ;

__attribute__((used)) static int
FUNC_2(struct cqspi_softc *VAR_3, uint8_t VAR_4,
    uint8_t *VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 VAR_7 = (VAR_4 << VAR_1);
 FUNC_0(VAR_3, VAR_0, VAR_7);
 VAR_7 |= VAR_2;
 FUNC_0(VAR_3, VAR_0, VAR_7);

 VAR_8 = FUNC_1(VAR_3);

 return (VAR_8);
}
