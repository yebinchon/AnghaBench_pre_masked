
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pac_tlv_hdr {int type; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static const u8 * FUNC_3(const u8 *VAR_2, size_t VAR_3, size_t *VAR_4)
{
 const u8 *VAR_5;
 const struct pac_tlv_hdr *VAR_6;





 VAR_5 = VAR_2;
 *VAR_4 = VAR_3;
 if (VAR_3 > sizeof(*VAR_6)) {
  int VAR_7;
  VAR_6 = (const struct pac_tlv_hdr *) VAR_2;
  VAR_7 = FUNC_0(VAR_6->len);
  if (FUNC_0(VAR_6->type) == VAR_1 &&
      sizeof(*VAR_6) + VAR_7 <= VAR_3) {
   FUNC_2(VAR_0, "EAP-FAST: A-ID was in TLV "
       "(Start)");
   VAR_5 = (const u8 *) (VAR_6 + 1);
   *VAR_4 = VAR_7;
  }
 }
 FUNC_1(VAR_0, "EAP-FAST: A-ID", VAR_5, *VAR_4);

 return VAR_5;
}
