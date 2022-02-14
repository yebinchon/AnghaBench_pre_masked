
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_msg {scalar_t__ iv; int encr; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,size_t*,size_t) ;
 int * FUNC_1 (struct eap_sim_msg*,int,int ,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 size_t* FUNC_6 (int ) ;

int FUNC_7(struct eap_sim_msg *VAR_2, u8 *VAR_3, int VAR_4)
{
 size_t VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2->iv == 0 || VAR_2->encr == 0)
  return -1;

 VAR_5 = FUNC_5(VAR_2->buf) - VAR_2->encr - 4;
 if (VAR_5 % 16) {
  u8 *VAR_6;
  int VAR_7 = 16 - (VAR_5 % 16);
  if (VAR_7 < 4) {
   FUNC_3(VAR_1, "EAP-SIM: "
       "eap_sim_msg_add_encr_end - invalid pad_len"
       " %d", VAR_7);
   return -1;
  }
  FUNC_3(VAR_0, "   *AT_PADDING");
  VAR_6 = FUNC_1(VAR_2, VAR_4, 0, ((void*)0), VAR_7 - 4);
  if (VAR_6 == ((void*)0))
   return -1;
  FUNC_2(VAR_6 + 4, 0, VAR_7 - 4);
  VAR_5 += VAR_7;
 }
 FUNC_3(VAR_0, "   (AT_ENCR_DATA data len %lu)",
     (unsigned long) VAR_5);
 FUNC_6(VAR_2->buf)[VAR_2->encr + 1] = VAR_5 / 4 + 1;
 return FUNC_0(VAR_3, FUNC_4(VAR_2->buf) + VAR_2->iv,
       FUNC_6(VAR_2->buf) + VAR_2->encr + 4,
       VAR_5);
}
