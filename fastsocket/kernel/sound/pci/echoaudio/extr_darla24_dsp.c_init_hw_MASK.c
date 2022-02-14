
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; int input_clock_types; void* bad_board; void* asic_loaded; int * dsp_code_to_load; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 void* VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_8, u16 VAR_9, u16 VAR_10)
{
 int VAR_11;

 FUNC_0(("init_hw() - Darla24\n"));
 if (FUNC_4((VAR_10 & 0xfff0) != VAR_0))
  return -VAR_3;

 if ((VAR_11 = FUNC_1(VAR_8))) {
  FUNC_0(("init_hw - could not initialize DSP comm page\n"));
  return VAR_11;
 }

 VAR_8->device_id = VAR_9;
 VAR_8->subdevice_id = VAR_10;
 VAR_8->bad_board = VAR_6;
 VAR_8->dsp_code_to_load = &VAR_7[VAR_5];


 VAR_8->asic_loaded = VAR_6;
 VAR_8->input_clock_types = VAR_2 |
  VAR_1;

 if ((VAR_11 = FUNC_3(VAR_8)) < 0)
  return VAR_11;
 VAR_8->bad_board = VAR_4;

 if ((VAR_11 = FUNC_2(VAR_8)) < 0)
  return VAR_11;

 FUNC_0(("init_hw done\n"));
 return VAR_11;
}
