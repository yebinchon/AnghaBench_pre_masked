
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wpabuf {int dummy; } ;
struct pac_tlv_hdr {void* len; void* type; } ;
typedef int hdr ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wpabuf*,struct pac_tlv_hdr*,int) ;

void FUNC_2(struct wpabuf *VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct pac_tlv_hdr VAR_3;
 VAR_3.type = FUNC_0(VAR_1);
 VAR_3.len = FUNC_0(VAR_2);
 FUNC_1(VAR_0, &VAR_3, sizeof(VAR_3));
}
