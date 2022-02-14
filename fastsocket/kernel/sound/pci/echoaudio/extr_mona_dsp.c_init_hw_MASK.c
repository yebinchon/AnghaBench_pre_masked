
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; int input_clock_types; int digital_modes; void* bad_board; void* digital_in_automute; void* professional_spdif; int digital_mode; int * dsp_code_to_load; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int * VAR_15 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 int FUNC_5 (struct echoaudio*,void*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_16, u16 VAR_17, u16 VAR_18)
{
 int VAR_19;

 FUNC_0(("init_hw() - Mona\n"));
 if (FUNC_6((VAR_18 & 0xfff0) != VAR_13))
  return -VAR_9;

 if ((VAR_19 = FUNC_1(VAR_16))) {
  FUNC_0(("init_hw - could not initialize DSP comm page\n"));
  return VAR_19;
 }

 VAR_16->device_id = VAR_17;
 VAR_16->subdevice_id = VAR_18;
 VAR_16->bad_board = VAR_14;
 VAR_16->input_clock_types =
  VAR_6 | VAR_7 |
  VAR_8 | VAR_5;
 VAR_16->digital_modes =
  VAR_4 |
  VAR_3 |
  VAR_2;


 if (VAR_16->device_id == VAR_0)
  VAR_16->dsp_code_to_load = &VAR_15[VAR_12];
 else
  VAR_16->dsp_code_to_load = &VAR_15[VAR_11];

 VAR_16->digital_mode = VAR_1;
 VAR_16->professional_spdif = VAR_10;
 VAR_16->digital_in_automute = VAR_14;

 if ((VAR_19 = FUNC_3(VAR_16)) < 0)
  return VAR_19;
 VAR_16->bad_board = VAR_10;

 if ((VAR_19 = FUNC_2(VAR_16)) < 0)
  return VAR_19;

 VAR_19 = FUNC_4(VAR_16, VAR_1);
 if (VAR_19 < 0)
  return VAR_19;
 VAR_19 = FUNC_5(VAR_16, VAR_14);

 FUNC_0(("init_hw done\n"));
 return VAR_19;
}
