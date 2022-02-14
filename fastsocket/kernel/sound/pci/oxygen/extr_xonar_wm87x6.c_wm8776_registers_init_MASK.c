
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {int* wm8776_regs; } ;
struct oxygen {int* dac_volume; scalar_t__ dac_mute; struct xonar_wm87x6* model_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct oxygen*,size_t,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_23)
{
 struct xonar_wm87x6 *VAR_24 = VAR_23->model_data;

 FUNC_0(VAR_23, VAR_21, 0);
 FUNC_0(VAR_23, VAR_16, VAR_17);
 FUNC_0(VAR_23, VAR_4, VAR_12 |
       VAR_18 | VAR_19);
 FUNC_0(VAR_23, VAR_8, VAR_23->dac_mute ? VAR_11 : 0);
 FUNC_0(VAR_23, VAR_6,
       VAR_5 | VAR_10);
 FUNC_0(VAR_23, VAR_0,
       VAR_24->wm8776_regs[VAR_0]);
 FUNC_0(VAR_23, VAR_15, VAR_24->wm8776_regs[VAR_15]);
 FUNC_0(VAR_23, VAR_20, VAR_24->wm8776_regs[VAR_20]);
 FUNC_0(VAR_23, VAR_13, VAR_24->wm8776_regs[VAR_13]);
 FUNC_0(VAR_23, VAR_14, VAR_24->wm8776_regs[VAR_14] |
       VAR_22);
 FUNC_0(VAR_23, VAR_1, VAR_24->wm8776_regs[VAR_1]);
 FUNC_0(VAR_23, VAR_3, VAR_24->wm8776_regs[VAR_3]);
 FUNC_0(VAR_23, VAR_2, VAR_24->wm8776_regs[VAR_2]);
 FUNC_0(VAR_23, VAR_7, VAR_23->dac_volume[0]);
 FUNC_0(VAR_23, VAR_9, VAR_23->dac_volume[1] | VAR_22);
}
