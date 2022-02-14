
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_fast_pac {size_t pac_opaque_len; size_t pac_info_len; int * pac_info; int * pac_opaque; int pac_key; } ;


 size_t VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int ,char*,int *,size_t) ;
 int FUNC_2 (int ,char*,int *,size_t) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct eap_fast_pac *VAR_2, int VAR_3,
       u8 *VAR_4, size_t VAR_5, int *VAR_6)
{
 switch (VAR_3 & 0x7fff) {
 case 129:
  FUNC_2(VAR_1, "EAP-FAST: PAC-Key", VAR_4, VAR_5);
  if (VAR_5 != VAR_0) {
   FUNC_3(VAR_1, "EAP-FAST: Invalid PAC-Key "
       "length %lu", (unsigned long) VAR_5);
   break;
  }
  *VAR_6 = 1;
  FUNC_0(VAR_2->pac_key, VAR_4, VAR_5);
  break;
 case 128:
  FUNC_1(VAR_1, "EAP-FAST: PAC-Opaque", VAR_4, VAR_5);
  VAR_2->pac_opaque = VAR_4;
  VAR_2->pac_opaque_len = VAR_5;
  break;
 case 130:
  FUNC_1(VAR_1, "EAP-FAST: PAC-Info", VAR_4, VAR_5);
  VAR_2->pac_info = VAR_4;
  VAR_2->pac_info_len = VAR_5;
  break;
 default:
  FUNC_3(VAR_1, "EAP-FAST: Ignored unknown PAC type %d",
      VAR_3);
  break;
 }
}
