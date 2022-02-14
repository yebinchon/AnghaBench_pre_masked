
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; void* bad_board; int input_clock_types; void* asic_loaded; int * dsp_code_to_load; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_7, u16 VAR_8, u16 VAR_9)
{
 int VAR_10;

 FUNC_0(("init_hw() - Indigo DJ\n"));
 if (FUNC_4((VAR_9 & 0xfff0) != VAR_4))
  return -VAR_1;

 if ((VAR_10 = FUNC_1(VAR_7))) {
  FUNC_0(("init_hw - could not initialize DSP comm page\n"));
  return VAR_10;
 }

 VAR_7->device_id = VAR_8;
 VAR_7->subdevice_id = VAR_9;
 VAR_7->bad_board = VAR_5;
 VAR_7->dsp_code_to_load = &VAR_6[VAR_3];


 VAR_7->asic_loaded = VAR_5;
 VAR_7->input_clock_types = VAR_0;

 if ((VAR_10 = FUNC_3(VAR_7)) < 0)
  return VAR_10;
 VAR_7->bad_board = VAR_2;

 if ((VAR_10 = FUNC_2(VAR_7)) < 0)
  return VAR_10;

 FUNC_0(("init_hw done\n"));
 return VAR_10;
}
