
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; void* bad_board; int input_clock_types; void* asic_loaded; int clock_state; int spdif_status; int * dsp_code_to_load; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_9, u16 VAR_10, u16 VAR_11)
{
 int VAR_12;

 FUNC_0(("init_hw() - Darla20\n"));
 if (FUNC_4((VAR_11 & 0xfff0) != VAR_0))
  return -VAR_2;

 if ((VAR_12 = FUNC_1(VAR_9))) {
  FUNC_0(("init_hw - could not initialize DSP comm page\n"));
  return VAR_12;
 }

 VAR_9->device_id = VAR_10;
 VAR_9->subdevice_id = VAR_11;
 VAR_9->bad_board = VAR_7;
 VAR_9->dsp_code_to_load = &VAR_8[VAR_4];
 VAR_9->spdif_status = VAR_6;
 VAR_9->clock_state = VAR_5;


 VAR_9->asic_loaded = VAR_7;
 VAR_9->input_clock_types = VAR_1;

 if ((VAR_12 = FUNC_3(VAR_9)) < 0)
  return VAR_12;
 VAR_9->bad_board = VAR_3;

 if ((VAR_12 = FUNC_2(VAR_9)) < 0)
  return VAR_12;

 FUNC_0(("init_hw done\n"));
 return VAR_12;
}
