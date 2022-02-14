
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct os_time {int sec; } ;
struct eap_teap_pac {size_t a_id_len; size_t i_id_len; size_t a_id_info_len; int pac_type; int * a_id_info; int * i_id; int * a_id; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct os_time*) ;
 int FUNC_3 (int ,char*,int *,size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;
 int FUNC_5 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct eap_teap_pac *VAR_3, int VAR_4,
       u8 *VAR_5, size_t VAR_6)
{
 u16 VAR_7;
 u32 VAR_8;
 struct os_time VAR_9;

 switch (VAR_4 & 0x7fff) {
 case 130:
  if (VAR_6 != 4) {
   FUNC_3(VAR_0,
        "EAP-TEAP: PAC-Info - Invalid CRED_LIFETIME length - ignored",
        VAR_5, VAR_6);
   return 0;
  }







  VAR_8 = FUNC_1(VAR_5);
  FUNC_2(&VAR_9);
  FUNC_5(VAR_0,
      "EAP-TEAP: PAC-Info - CRED_LIFETIME %d (%d days)",
      VAR_8, (VAR_8 - (u32) VAR_9.sec) / 86400);
  break;
 case 132:
  FUNC_4(VAR_0, "EAP-TEAP: PAC-Info - A-ID",
      VAR_5, VAR_6);
  VAR_3->a_id = VAR_5;
  VAR_3->a_id_len = VAR_6;
  break;
 case 129:
  FUNC_4(VAR_0, "EAP-TEAP: PAC-Info - I-ID",
      VAR_5, VAR_6);
  VAR_3->i_id = VAR_5;
  VAR_3->i_id_len = VAR_6;
  break;
 case 131:
  FUNC_4(VAR_0, "EAP-TEAP: PAC-Info - A-ID-Info",
      VAR_5, VAR_6);
  VAR_3->a_id_info = VAR_5;
  VAR_3->a_id_info_len = VAR_6;
  break;
 case 128:

  if (VAR_6 != 2) {
   FUNC_5(VAR_1,
       "EAP-TEAP: Invalid PAC-Type length %lu (expected 2)",
       (unsigned long) VAR_6);
   FUNC_4(VAR_0,
       "EAP-TEAP: PAC-Info - PAC-Type",
       VAR_5, VAR_6);
   return -1;
  }
  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7 != VAR_2) {
   FUNC_5(VAR_1,
       "EAP-TEAP: Unsupported PAC Type %d",
       VAR_7);
   return -1;
  }

  FUNC_5(VAR_0, "EAP-TEAP: PAC-Info - PAC-Type %d",
      VAR_7);
  VAR_3->pac_type = VAR_7;
  break;
 default:
  FUNC_5(VAR_0,
      "EAP-TEAP: Ignored unknown PAC-Info type %d", VAR_4);
  break;
 }

 return 0;
}
