
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct oce_softc {int port_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct oce_softc*,int ,int ,int) ;
 int FUNC_1 (struct oce_softc*,int ,int ,int,int,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct oce_softc *VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3 = 0;

 FUNC_0(VAR_1, VAR_1->port_id, VAR_2, 1);
 VAR_3 = FUNC_1(VAR_1, VAR_1->port_id, VAR_2,
    1500, 2, 0xabc);
 FUNC_0(VAR_1, VAR_1->port_id, VAR_0, 1);

 return VAR_3;
}
