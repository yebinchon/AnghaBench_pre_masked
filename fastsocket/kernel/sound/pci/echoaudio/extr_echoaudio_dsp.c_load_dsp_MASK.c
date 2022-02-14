
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct echoaudio {int* dsp_code; int comm_page_phys; void* bad_board; void* asic_loaded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (struct echoaudio*,int ) ;
 int FUNC_2 (struct echoaudio*) ;
 scalar_t__ FUNC_3 (struct echoaudio*) ;
 scalar_t__ FUNC_4 (struct echoaudio*,int ) ;
 int FUNC_5 (struct echoaudio*,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct echoaudio*,int) ;

__attribute__((used)) static int FUNC_8(struct echoaudio *VAR_9, u16 *VAR_10)
{
 u32 VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if (VAR_9->dsp_code == VAR_10) {
  FUNC_0(("DSP is already loaded!\n"));
  return 0;
 }
 VAR_9->bad_board = VAR_8;
 VAR_9->dsp_code = ((void*)0);
 VAR_9->asic_loaded = VAR_7;

 FUNC_0(("load_dsp: Set bad_board to TRUE\n"));
 if (FUNC_4(VAR_9, VAR_5) < 0) {
  FUNC_0(("LoadDsp: send_vector DSP_VC_RESET failed, Critical Failure\n"));
  return -VAR_6;
 }

 FUNC_6(10);


 for (VAR_15 = 0; VAR_15 < 1000; VAR_15++) {
  if (FUNC_1(VAR_9, VAR_1) &
      VAR_2)
   break;
  FUNC_6(10);
 }

 if (VAR_15 == 1000) {
  FUNC_0(("load_dsp: Timeout waiting for CHI32_STATUS_REG_HF3\n"));
  return -VAR_6;
 }


 FUNC_5(VAR_9, VAR_0,
    FUNC_1(VAR_9, VAR_0) | 0x900);



 VAR_13 = VAR_10[0];
 for (;;) {
  int VAR_16, VAR_17;


  VAR_13++;


  VAR_16 = VAR_10[VAR_13];
  if (VAR_16 == 4)
   break;

  VAR_13++;


  VAR_17 = VAR_10[VAR_13++];


  VAR_14 = VAR_10[VAR_13++];
  if (VAR_14 == 0)
   break;


  VAR_11 = ((u32)VAR_10[VAR_13] << 16) + VAR_10[VAR_13 + 1];
  VAR_13 += 2;

  if (FUNC_7(VAR_9, VAR_14) < 0) {
   FUNC_0(("load_dsp: failed to write number of DSP words\n"));
   return -VAR_6;
  }
  if (FUNC_7(VAR_9, VAR_11) < 0) {
   FUNC_0(("load_dsp: failed to write DSP address\n"));
   return -VAR_6;
  }
  if (FUNC_7(VAR_9, VAR_17) < 0) {
   FUNC_0(("load_dsp: failed to write DSP memory type\n"));
   return -VAR_6;
  }

  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++, VAR_13+=2) {
   VAR_12 = ((u32)VAR_10[VAR_13] << 16) + VAR_10[VAR_13 + 1];
   if (FUNC_7(VAR_9, VAR_12) < 0) {
    FUNC_0(("load_dsp: failed to write DSP data\n"));
    return -VAR_6;
   }
  }
 }

 if (FUNC_7(VAR_9, 0) < 0) {
  FUNC_0(("load_dsp: Failed to write final zero\n"));
  return -VAR_6;
 }
 FUNC_6(10);

 for (VAR_15 = 0; VAR_15 < 5000; VAR_15++) {

  if (FUNC_1(VAR_9, VAR_1) &
      VAR_3) {
   FUNC_5(VAR_9, VAR_0,
      FUNC_1(VAR_9, VAR_0) & ~0x1b00);

   if (FUNC_7(VAR_9, VAR_4) < 0) {
    FUNC_0(("load_dsp: Failed to write DSP_FNC_SET_COMMPAGE_ADDR\n"));
    return -VAR_6;
   }

   if (FUNC_7(VAR_9, VAR_9->comm_page_phys) < 0) {
    FUNC_0(("load_dsp: Failed to write comm page address\n"));
    return -VAR_6;
   }





   if (FUNC_3(VAR_9) < 0) {
    FUNC_0(("load_dsp: Failed to read serial number\n"));
    return -VAR_6;
   }

   VAR_9->dsp_code = VAR_10;
   VAR_9->bad_board = VAR_7;
   FUNC_0(("load_dsp: OK!\n"));
   return 0;
  }
  FUNC_6(100);
 }

 FUNC_0(("load_dsp: DSP load timed out waiting for HF4\n"));
 return -VAR_6;
}
