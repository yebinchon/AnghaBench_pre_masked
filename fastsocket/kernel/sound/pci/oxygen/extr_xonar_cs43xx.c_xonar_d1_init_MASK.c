
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int anti_pop_delay; int output_enable_bit; } ;
struct xonar_cs43xx {int* cs4398_regs; int* cs4362a_regs; TYPE_1__ generic; } ;
struct oxygen {int card; struct xonar_cs43xx* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct oxygen*) ;
 int FUNC_1 (struct oxygen*,int ,int) ;
 int FUNC_2 (struct oxygen*,int ,int) ;
 int FUNC_3 (struct oxygen*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct oxygen*) ;
 int FUNC_6 (struct oxygen*) ;

__attribute__((used)) static void FUNC_7(struct oxygen *VAR_27)
{
 struct xonar_cs43xx *VAR_28 = VAR_27->model_data;

 VAR_28->generic.anti_pop_delay = 800;
 VAR_28->generic.output_enable_bit = VAR_20;
 VAR_28->cs4398_regs[2] =
  VAR_8 | VAR_6 | VAR_7;
 VAR_28->cs4398_regs[4] = VAR_9 |
  VAR_11 | VAR_10 | VAR_12;
 VAR_28->cs4398_regs[5] = 60 * 2;
 VAR_28->cs4398_regs[6] = 60 * 2;
 VAR_28->cs4398_regs[7] = VAR_13 | VAR_14 |
  VAR_16 | VAR_15;
 VAR_28->cs4362a_regs[4] = VAR_5 | VAR_2;
 VAR_28->cs4362a_regs[6] = VAR_3 |
  VAR_1 | VAR_0;
 VAR_28->cs4362a_regs[7] = 60 | VAR_4;
 VAR_28->cs4362a_regs[8] = 60 | VAR_4;
 VAR_28->cs4362a_regs[9] = VAR_28->cs4362a_regs[6];
 VAR_28->cs4362a_regs[10] = 60 | VAR_4;
 VAR_28->cs4362a_regs[11] = 60 | VAR_4;
 VAR_28->cs4362a_regs[12] = VAR_28->cs4362a_regs[6];
 VAR_28->cs4362a_regs[13] = 60 | VAR_4;
 VAR_28->cs4362a_regs[14] = 60 | VAR_4;

 FUNC_3(VAR_27, VAR_21,
         VAR_23 |
         VAR_22 |
         VAR_24);

 FUNC_0(VAR_27);

 FUNC_2(VAR_27, VAR_25,
     VAR_17 |
     VAR_19 |
     VAR_18);
 FUNC_1(VAR_27, VAR_26,
       VAR_17 | VAR_18);

 FUNC_6(VAR_27);
 FUNC_5(VAR_27);

 FUNC_4(VAR_27->card, "CS4398");
 FUNC_4(VAR_27->card, "CS4362A");
 FUNC_4(VAR_27->card, "CS5361");
}
