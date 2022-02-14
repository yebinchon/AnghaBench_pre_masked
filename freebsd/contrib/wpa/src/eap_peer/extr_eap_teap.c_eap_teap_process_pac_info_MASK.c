
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pac_attr_hdr {int len; int type; } ;
struct eap_teap_pac {size_t pac_info_len; int a_id_info; int a_id; int * pac_info; int pac_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct eap_teap_pac*,int,int *,size_t) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct eap_teap_pac *VAR_2)
{
 struct pac_attr_hdr *VAR_3;
 u8 *VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7;




 VAR_2->pac_type = VAR_1;

 VAR_4 = VAR_2->pac_info;
 VAR_5 = VAR_2->pac_info_len;
 while (VAR_5 > sizeof(*VAR_3)) {
  VAR_3 = (struct pac_attr_hdr *) VAR_4;
  VAR_7 = FUNC_0(VAR_3->type);
  VAR_6 = FUNC_0(VAR_3->len);
  VAR_4 += sizeof(*VAR_3);
  VAR_5 -= sizeof(*VAR_3);
  if (VAR_6 > VAR_5) {
   FUNC_2(VAR_0,
       "EAP-TEAP: PAC-Info overrun (type=%d len=%lu left=%lu)",
       VAR_7, (unsigned long) VAR_6,
       (unsigned long) VAR_5);
   return -1;
  }

  if (FUNC_1(VAR_2, VAR_7, VAR_4, VAR_6) < 0)
   return -1;

  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;
 }

 if (!VAR_2->a_id || !VAR_2->a_id_info) {
  FUNC_2(VAR_0,
      "EAP-TEAP: PAC-Info does not include all the required fields");
  return -1;
 }

 return 0;
}
