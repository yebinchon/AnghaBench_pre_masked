
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct run_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct run_softc*,int ,int const) ;

__attribute__((used)) static void
FUNC_1(struct run_softc *VAR_2, const uint8_t *VAR_3)
{
 FUNC_0(VAR_2, VAR_0,
     VAR_3[0] | VAR_3[1] << 8 | VAR_3[2] << 16 | VAR_3[3] << 24);
 FUNC_0(VAR_2, VAR_1,
     VAR_3[4] | VAR_3[5] << 8);
}
