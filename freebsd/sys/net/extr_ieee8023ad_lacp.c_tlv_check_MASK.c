
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlvhdr {scalar_t__ tlv_type; scalar_t__ tlv_length; } ;
struct tlv_template {scalar_t__ tmpl_type; scalar_t__ tmpl_length; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_1, size_t VAR_2, const struct tlvhdr *VAR_3,
    const struct tlv_template *VAR_4, boolean_t VAR_5)
{
 while ( 1) {
  if ((const char *)VAR_3 - (const char *)VAR_1 + sizeof(*VAR_3) > VAR_2) {
   return (VAR_0);
  }
  if ((VAR_5 && VAR_3->tlv_type != VAR_4->tmpl_type) ||
      VAR_3->tlv_length != VAR_4->tmpl_length) {
   return (VAR_0);
  }
  if (VAR_4->tmpl_type == 0) {
   break;
  }
  VAR_3 = (const struct tlvhdr *)
      ((const char *)VAR_3 + VAR_3->tlv_length);
  VAR_4++;
 }

 return (0);
}
