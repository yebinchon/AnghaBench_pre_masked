
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; int input_clock_types; void* bad_board; void* asic_loaded; int clock_state; int spdif_status; int * dsp_code_to_load; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*,void*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct echoaudio *VAR_10, u16 VAR_11, u16 VAR_12)
{
 int VAR_13;

 FUNC_0(("init_hw() - Gina20\n"));
 if (FUNC_5((VAR_12 & 0xfff0) != VAR_7))
  return -VAR_2;

 if ((VAR_13 = FUNC_1(VAR_10))) {
  FUNC_0(("init_hw - could not initialize DSP comm page\n"));
  return VAR_13;
 }

 VAR_10->device_id = VAR_11;
 VAR_10->subdevice_id = VAR_12;
 VAR_10->bad_board = VAR_8;
 VAR_10->dsp_code_to_load = &VAR_9[VAR_4];
 VAR_10->spdif_status = VAR_6;
 VAR_10->clock_state = VAR_5;


 VAR_10->asic_loaded = VAR_8;
 VAR_10->input_clock_types = VAR_0 |
  VAR_1;

 if ((VAR_13 = FUNC_3(VAR_10)) < 0)
  return VAR_13;
 VAR_10->bad_board = VAR_3;

 if ((VAR_13 = FUNC_2(VAR_10)) < 0)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_10, VAR_8);

 FUNC_0(("init_hw done\n"));
 return VAR_13;
}
