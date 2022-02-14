
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int anti_pop_delay; int output_enable_bit; } ;
struct xonar_wm87x6 {int hp_jack; TYPE_1__ generic; } ;
struct oxygen {int card; int interrupt_mask; struct xonar_wm87x6* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct oxygen*,int ,int) ;
 int FUNC_1 (struct oxygen*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,int *) ;
 int FUNC_4 (struct oxygen*) ;
 int FUNC_5 (struct oxygen*) ;
 int FUNC_6 (struct oxygen*) ;
 int FUNC_7 (struct oxygen*) ;

__attribute__((used)) static void FUNC_8(struct oxygen *VAR_9)
{
 struct xonar_wm87x6 *VAR_10 = VAR_9->model_data;

 VAR_10->generic.anti_pop_delay = 300;
 VAR_10->generic.output_enable_bit = VAR_2;

 FUNC_5(VAR_9);
 FUNC_4(VAR_9);

 FUNC_1(VAR_9, VAR_4,
     VAR_1 | VAR_3);
 FUNC_0(VAR_9, VAR_4,
       VAR_0);
 FUNC_1(VAR_9, VAR_5, VAR_1);
 FUNC_1(VAR_9, VAR_6, VAR_0);
 VAR_9->interrupt_mask |= VAR_7;

 FUNC_7(VAR_9);

 FUNC_3(VAR_9->card, "Headphone",
       VAR_8, &VAR_10->hp_jack);
 FUNC_6(VAR_9);

 FUNC_2(VAR_9->card, "WM8776");
 FUNC_2(VAR_9->card, "WM8766");
}
