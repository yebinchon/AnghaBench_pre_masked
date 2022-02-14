
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eap_tlv_pac_type_tlv {int pac_type; int length; int tlv_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, size_t VAR_2, u16 VAR_3)
{
 struct eap_tlv_pac_type_tlv *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 != sizeof(*VAR_4))
  return 0;

 VAR_4 = (struct eap_tlv_pac_type_tlv *) VAR_1;

 return FUNC_0(VAR_4->tlv_type) == VAR_0 &&
  FUNC_0(VAR_4->length) == 2 &&
  FUNC_0(VAR_4->pac_type) == VAR_3;
}
