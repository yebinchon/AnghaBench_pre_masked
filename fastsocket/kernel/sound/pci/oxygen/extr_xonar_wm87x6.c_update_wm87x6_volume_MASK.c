
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xonar_wm87x6 {int* wm8766_regs; } ;
struct oxygen {int* dac_volume; struct xonar_wm87x6* model_data; } ;





 size_t const VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct oxygen*) ;
 int FUNC_1 (struct oxygen*,size_t const,int) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_2)
{
 static const u8 VAR_3[6] = {
  133, 130,
  132, 129,
  131, 128,
 };
 struct xonar_wm87x6 *VAR_4 = VAR_2->model_data;
 unsigned int VAR_5;
 u8 VAR_6;

 FUNC_0(VAR_2);
 if (VAR_2->dac_volume[2] == VAR_2->dac_volume[3] &&
     VAR_2->dac_volume[2] == VAR_2->dac_volume[4] &&
     VAR_2->dac_volume[2] == VAR_2->dac_volume[5] &&
     VAR_2->dac_volume[2] == VAR_2->dac_volume[6] &&
     VAR_2->dac_volume[2] == VAR_2->dac_volume[7]) {
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < 6; ++VAR_5)
   if (VAR_2->dac_volume[2] !=
       VAR_4->wm8766_regs[VAR_3[VAR_5]])
    VAR_6 = 1;
  if (VAR_6) {
   FUNC_1(VAR_2, VAR_0,
         VAR_2->dac_volume[2] | VAR_1);
   for (VAR_5 = 0; VAR_5 < 6; ++VAR_5)
    VAR_4->wm8766_regs[VAR_3[VAR_5]] =
     VAR_2->dac_volume[2];
  }
 } else {
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < 6; ++VAR_5)
   VAR_6 |= (VAR_2->dac_volume[2 + VAR_5] !=
          VAR_4->wm8766_regs[VAR_3[VAR_5]]) << VAR_5;
  for (VAR_5 = 0; VAR_5 < 6; ++VAR_5)
   if (VAR_6 & (1 << VAR_5))
    FUNC_1(VAR_2, VAR_3[VAR_5],
          VAR_2->dac_volume[2 + VAR_5] |
          ((VAR_6 & (0x3e << VAR_5))
           ? 0 : VAR_1));
 }
}
