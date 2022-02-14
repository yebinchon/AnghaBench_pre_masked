
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; int input_clock_types; int digital_modes; void* bad_board; void* digital_in_automute; void* professional_spdif; int digital_mode; int * dsp_code_to_load; void* has_midi; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int * VAR_13 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 int FUNC_5 (struct echoaudio*,void*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_14, u16 VAR_15, u16 VAR_16)
{
 int VAR_17;

 FUNC_0(("init_hw() - Layla24\n"));
 if (FUNC_6((VAR_16 & 0xfff0) != VAR_11))
  return -VAR_8;

 if ((VAR_17 = FUNC_1(VAR_14))) {
  FUNC_0(("init_hw - could not initialize DSP comm page\n"));
  return VAR_17;
 }

 VAR_14->device_id = VAR_15;
 VAR_14->subdevice_id = VAR_16;
 VAR_14->bad_board = VAR_12;
 VAR_14->has_midi = VAR_12;
 VAR_14->dsp_code_to_load = &VAR_13[VAR_10];
 VAR_14->input_clock_types =
  VAR_5 | VAR_6 |
  VAR_7 | VAR_4;
 VAR_14->digital_modes =
  VAR_3 |
  VAR_2 |
  VAR_1;
 VAR_14->digital_mode = VAR_0;
 VAR_14->professional_spdif = VAR_9;
 VAR_14->digital_in_automute = VAR_12;

 if ((VAR_17 = FUNC_3(VAR_14)) < 0)
  return VAR_17;
 VAR_14->bad_board = VAR_9;

 if ((VAR_17 = FUNC_2(VAR_14)) < 0)
  return VAR_17;

 VAR_17 = FUNC_4(VAR_14, VAR_0);
 if (VAR_17 < 0)
  return VAR_17;
 VAR_17 = FUNC_5(VAR_14, VAR_12);

 FUNC_0(("init_hw done\n"));
 return VAR_17;
}
