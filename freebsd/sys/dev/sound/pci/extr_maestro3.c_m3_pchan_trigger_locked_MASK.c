
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_pchinfo {int active; scalar_t__ dac_data; int prevptr; int ptr; int dac_idx; struct sc_info* parent; } ;
struct sc_info {int pch_active_cnt; } ;
typedef int kobj_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;





 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (struct sc_info*,int ,int) ;
 int FUNC_5 (struct sc_info*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6(kobj_t VAR_8, void *VAR_9, int VAR_10)
{
 struct sc_pchinfo *VAR_11 = VAR_9;
 struct sc_info *VAR_12 = VAR_11->parent;
 u_int32_t VAR_13;

 FUNC_1(VAR_12);
 FUNC_0(VAR_10 == 129 ? VAR_2 :
   VAR_10 == 128 ? VAR_2 :
   VAR_10 == 132 ? VAR_2 :
   VAR_0,
   ("m3_pchan_trigger(dac=%d, go=0x%x{%s})\n", VAR_11->dac_idx, VAR_10,
    VAR_10 == 129 ? "PCMTRIG_START" :
    VAR_10 == 128 ? "PCMTRIG_STOP" :
    VAR_10 == 132 ? "PCMTRIG_ABORT" : "ignore"));

 switch(VAR_10) {
 case 129:
  if (VAR_11->active) {
   return 0;
  }
  VAR_11->active = 1;
  VAR_11->ptr = 0;
  VAR_11->prevptr = 0;
  VAR_12->pch_active_cnt++;


  if (FUNC_2(VAR_12) == 1) {
                 FUNC_5(VAR_12, VAR_7, 240);
                 FUNC_5(VAR_12, VAR_6, 240);
                 VAR_13 = FUNC_3(VAR_12, VAR_4);
                 FUNC_4(VAR_12, VAR_4, VAR_13 | VAR_3);
  }

                FUNC_5(VAR_12, VAR_11->dac_data + VAR_1, 1);
                FUNC_5(VAR_12, VAR_5,
    VAR_12->pch_active_cnt);
  break;

 case 128:
 case 132:
  if (VAR_11->active == 0) {
   return 0;
  }
  VAR_11->active = 0;
  VAR_12->pch_active_cnt--;



  if (FUNC_2(VAR_12) == 0) {
                 FUNC_5(VAR_12, VAR_7, 0);
                 FUNC_5(VAR_12, VAR_6, 0);
                 VAR_13 = FUNC_3(VAR_12, VAR_4);
                 FUNC_4(VAR_12, VAR_4, VAR_13 & ~VAR_3);
  }

                FUNC_5(VAR_12, VAR_11->dac_data + VAR_1, 0);
                FUNC_5(VAR_12, VAR_5,
    VAR_12->pch_active_cnt);
  break;

 case 130:

 case 131:

 default:
  break;
 }
 return 0;
}
