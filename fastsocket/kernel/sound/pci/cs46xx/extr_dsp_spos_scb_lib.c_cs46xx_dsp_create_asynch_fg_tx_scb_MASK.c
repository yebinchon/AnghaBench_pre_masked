
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct snd_cs46xx {int dummy; } ;
struct dsp_scb_descriptor {int dummy; } ;
struct TYPE_2__ {int member_2; int member_1; int member_0; } ;
struct dsp_asynch_fg_tx_scb {int member_0; int member_1; int member_2; int member_3; int member_5; int member_10; int member_17; int member_18; int member_19; int member_20; int member_21; int member_22; scalar_t__ member_16; scalar_t__ member_15; int member_14; int member_13; int member_12; TYPE_1__ member_11; int member_9; int member_8; int member_7; int member_6; int member_4; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,scalar_t__*,scalar_t__,char*,struct dsp_scb_descriptor*,int) ;

__attribute__((used)) static struct dsp_scb_descriptor *
FUNC_1(struct snd_cs46xx * VAR_3, char * VAR_4, u32 VAR_5,
                                   u16 VAR_6,
                                   u16 VAR_7,
                                   struct dsp_scb_descriptor * VAR_8,
                                   int VAR_9)
{

 struct dsp_scb_descriptor * VAR_10;

 struct dsp_asynch_fg_tx_scb VAR_11 = {
  0xfc00,0x03ff,
  0x0058,0x0028,

  0,VAR_6,
  0,0,
  0,
  0,0x2aab,

  {
   0,
   0,
   0
  },

  0,0,
  0,VAR_5 + VAR_0,

  VAR_2 + VAR_1,
  (VAR_7) << 0x10,




  0x18000000,
  0x8000,0x8000,
  0x8000,0x8000
 };

 VAR_10 = FUNC_0(VAR_3,VAR_4,(u32 *)&VAR_11,
         VAR_5,"ASYNCHFGTXCODE",VAR_8,
         VAR_9);

 return VAR_10;
}
