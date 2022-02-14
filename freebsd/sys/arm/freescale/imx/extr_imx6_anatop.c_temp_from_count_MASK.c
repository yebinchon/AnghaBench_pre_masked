
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct imx6_anatop_softc {int temp_high_val; int temp_high_cnt; int temp_room_cnt; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(struct imx6_anatop_softc *VAR_0, uint32_t VAR_1)
{

 return (((VAR_0->temp_high_val - (VAR_1 - VAR_0->temp_high_cnt) *
     (VAR_0->temp_high_val - 250) /
     (VAR_0->temp_room_cnt - VAR_0->temp_high_cnt))));
}
