
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {unsigned int dacs; scalar_t__** pcm1796_regs; int hp_gain_offset; scalar_t__ hp_active; } ;
struct oxygen {scalar_t__* dac_volume; struct xonar_pcm179x* model_data; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct oxygen*,unsigned int,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_1)
{
 struct xonar_pcm179x *VAR_2 = VAR_1->model_data;
 unsigned int VAR_3;
 s8 VAR_4;

 FUNC_0(1);
 VAR_4 = VAR_2->hp_active ? VAR_2->hp_gain_offset : 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->dacs; ++VAR_3) {

  FUNC_1(VAR_1, VAR_3, 18,
         VAR_2->pcm1796_regs[0][18 - VAR_0]);
  FUNC_1(VAR_1, VAR_3, 16, VAR_1->dac_volume[VAR_3 * 2]
         + VAR_4);
  FUNC_1(VAR_1, VAR_3, 17, VAR_1->dac_volume[VAR_3 * 2 + 1]
         + VAR_4);
  FUNC_1(VAR_1, VAR_3, 19,
         VAR_2->pcm1796_regs[0][19 - VAR_0]);
  FUNC_1(VAR_1, VAR_3, 20,
         VAR_2->pcm1796_regs[0][20 - VAR_0]);
  FUNC_1(VAR_1, VAR_3, 21, 0);
  VAR_4 = 0;
 }
}
