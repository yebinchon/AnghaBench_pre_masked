
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mvneta_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_softc*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct mvneta_softc *VAR_2, uint8_t *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_5 = (VAR_3[4] << 8) | (VAR_3[5]);
 VAR_4 = (VAR_3[0] << 24) | (VAR_3[1] << 16) |
     (VAR_3[2] << 8) | (VAR_3[3] << 0);

 FUNC_0(VAR_2, VAR_1, VAR_5);
 FUNC_0(VAR_2, VAR_0, VAR_4);
 return (0);
}
