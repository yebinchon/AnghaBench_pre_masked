
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {int** pcm1796_regs; int current_rate; scalar_t__ h6; int broken_i2c; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct oxygen*) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_9)
{
 struct xonar_pcm179x *VAR_10 = VAR_9->model_data;

 VAR_10->pcm1796_regs[0][18 - VAR_8] =
  VAR_2 | VAR_4 | VAR_0;
 if (!VAR_10->broken_i2c)
  VAR_10->pcm1796_regs[0][18 - VAR_8] |= VAR_5;
 VAR_10->pcm1796_regs[0][19 - VAR_8] =
  VAR_3 | VAR_1;
 VAR_10->pcm1796_regs[0][20 - VAR_8] =
  VAR_10->h6 ? VAR_7 : VAR_6;
 FUNC_0(VAR_9);
 VAR_10->current_rate = 48000;
}
