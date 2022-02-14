
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct beri_softc {scalar_t__ control_read; scalar_t__ control_write; } ;
typedef int control_reg_t ;


 int FUNC_0 (struct beri_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct beri_softc *VAR_0, int VAR_1, control_reg_t *VAR_2)
{
 uint32_t VAR_3;
 uint16_t VAR_4[4];
 uint16_t *VAR_5;
 int VAR_6;

 VAR_5 = (uint16_t *)VAR_2;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
  VAR_4[3 - VAR_6] = VAR_5[VAR_6];

 VAR_3 = VAR_1 ? VAR_0->control_write : VAR_0->control_read;
 FUNC_0(VAR_0, VAR_3 + 0, ((uint32_t *)VAR_4)[0]);
 FUNC_0(VAR_0, VAR_3 + 4, ((uint32_t *)VAR_4)[1]);
}
