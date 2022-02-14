
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_cs46xx {int dummy; } ;
struct dsp_scb_descriptor {int address; } ;
struct TYPE_2__ {int member_0; int member_1; int member_2; int member_3; } ;
struct dsp_magic_snoop_task {int member_2; int member_15; TYPE_1__ member_17; int member_16; scalar_t__ member_14; int member_13; int member_12; int member_11; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_1; int member_0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int *,int ,char*,struct dsp_scb_descriptor*,int) ;

struct dsp_scb_descriptor *
FUNC_1(struct snd_cs46xx * VAR_2, char * VAR_3, u32 VAR_4,
      u16 VAR_5,
      struct dsp_scb_descriptor * VAR_6,
      struct dsp_scb_descriptor * VAR_7,
      int VAR_8)
{
 struct dsp_scb_descriptor * VAR_9;

 struct dsp_magic_snoop_task VAR_10 = {
          0,
          0,
          VAR_5 << 0x10,
          0,VAR_6->address,
          0,
          0,
          0,
          0,
          0,
          0,0,
          0,0,
          VAR_1 + VAR_0,
          VAR_5 << 0x10,
          0,
          { 0x8000,0x8000,
                   0xffff,0xffff
  }
 };

 VAR_9 = FUNC_0(VAR_2,VAR_3,(u32 *)&VAR_10,
         VAR_4,"MAGICSNOOPTASK",VAR_7,
         VAR_8);

 return VAR_9;
}
