
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int dummy; } ;
struct dsp_scb_descriptor {int parent_scb_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,struct dsp_scb_descriptor*) ;
 int FUNC_1 (struct snd_cs46xx*,struct dsp_scb_descriptor*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct snd_cs46xx *VAR_1, struct dsp_scb_descriptor * VAR_2)
{
 if (FUNC_2(!VAR_2->parent_scb_ptr))
  return -VAR_0;


 FUNC_1 (VAR_1,VAR_2,0,0);

 FUNC_0 (VAR_1,VAR_2);

 return 0;
}
