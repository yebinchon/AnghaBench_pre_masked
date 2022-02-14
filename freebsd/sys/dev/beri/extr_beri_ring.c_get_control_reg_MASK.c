
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct beri_softc {scalar_t__ control_read; scalar_t__ control_write; } ;
typedef int control_reg_t ;


 scalar_t__ FUNC_0 (struct beri_softc*,scalar_t__) ;

__attribute__((used)) static control_reg_t
FUNC_1(struct beri_softc *VAR_0, int VAR_1)
{
 uint32_t VAR_2;
 uint16_t VAR_3[4];
 control_reg_t VAR_4;
 uint16_t *VAR_5;
 int VAR_6;

 VAR_5 = (uint16_t *)&VAR_4;

 VAR_2 = VAR_1 ? VAR_0->control_write : VAR_0->control_read;
 ((uint32_t *)VAR_3)[0] = FUNC_0(VAR_0, VAR_2);
 ((uint32_t *)VAR_3)[1] = FUNC_0(VAR_0, VAR_2 + 4);

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
  VAR_5[VAR_6] = VAR_3[3 - VAR_6];

 return (VAR_4);
}
