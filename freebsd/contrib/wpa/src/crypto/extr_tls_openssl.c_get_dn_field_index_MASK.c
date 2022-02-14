
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_dn_field_order_cnt {int cn; int c; int l; int st; int o; int ou; int email; } ;


 int VAR_0 ;







 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(const struct tls_dn_field_order_cnt *VAR_1,
         int VAR_2)
{
 switch (VAR_2) {
 case 134:
  return VAR_1->cn;
 case 133:
  return VAR_1->c;
 case 132:
  return VAR_1->l;
 case 128:
  return VAR_1->st;
 case 131:
  return VAR_1->o;
 case 130:
  return VAR_1->ou;
 case 129:
  return VAR_1->email;
 default:
  FUNC_0(VAR_0,
      "TLS: Unknown NID '%d' in check_cert_subject",
      VAR_2);
  return -1;
 }
}
