
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct os_time {int sec; } ;
struct eap_fast_pac {size_t a_id_len; size_t i_id_len; size_t a_id_info_len; int pac_type; int * a_id_info; int * i_id; int * a_id; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct os_time*) ;
 int FUNC_3 (int ,char*,int *,size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;
 int FUNC_5 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct eap_fast_pac *VAR_5, int VAR_6,
       u8 *VAR_7, size_t VAR_8)
{
 u16 VAR_9;
 u32 VAR_10;
 struct os_time VAR_11;

 switch (VAR_6 & 0x7fff) {
 case 130:
  if (VAR_8 != 4) {
   FUNC_3(VAR_0, "EAP-FAST: PAC-Info - "
        "Invalid CRED_LIFETIME length - ignored",
        VAR_7, VAR_8);
   return 0;
  }







  VAR_10 = FUNC_1(VAR_7);
  FUNC_2(&VAR_11);
  FUNC_5(VAR_0, "EAP-FAST: PAC-Info - CRED_LIFETIME %d "
      "(%d days)",
      VAR_10, (VAR_10 - (u32) VAR_11.sec) / 86400);
  break;
 case 132:
  FUNC_4(VAR_0, "EAP-FAST: PAC-Info - A-ID",
      VAR_7, VAR_8);
  VAR_5->a_id = VAR_7;
  VAR_5->a_id_len = VAR_8;
  break;
 case 129:
  FUNC_4(VAR_0, "EAP-FAST: PAC-Info - I-ID",
      VAR_7, VAR_8);
  VAR_5->i_id = VAR_7;
  VAR_5->i_id_len = VAR_8;
  break;
 case 131:
  FUNC_4(VAR_0, "EAP-FAST: PAC-Info - A-ID-Info",
      VAR_7, VAR_8);
  VAR_5->a_id_info = VAR_7;
  VAR_5->a_id_info_len = VAR_8;
  break;
 case 128:

  if (VAR_8 != 2) {
   FUNC_5(VAR_1, "EAP-FAST: Invalid PAC-Type "
       "length %lu (expected 2)",
       (unsigned long) VAR_8);
   FUNC_4(VAR_0,
       "EAP-FAST: PAC-Info - PAC-Type",
       VAR_7, VAR_8);
   return -1;
  }
  VAR_9 = FUNC_0(VAR_7);
  if (VAR_9 != VAR_3 &&
      VAR_9 != VAR_4 &&
      VAR_9 != VAR_2) {
   FUNC_5(VAR_1, "EAP-FAST: Unsupported PAC Type "
       "%d", VAR_9);
   return -1;
  }

  FUNC_5(VAR_0, "EAP-FAST: PAC-Info - PAC-Type %d",
      VAR_9);
  VAR_5->pac_type = VAR_9;
  break;
 default:
  FUNC_5(VAR_0, "EAP-FAST: Ignored unknown PAC-Info "
      "type %d", VAR_6);
  break;
 }

 return 0;
}
