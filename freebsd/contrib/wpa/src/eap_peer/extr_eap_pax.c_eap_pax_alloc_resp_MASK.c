
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_pax_hdr {int public_key_id; int dh_group_id; int mac_id; scalar_t__ flags; int op_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int ) ;
 struct eap_pax_hdr* FUNC_1 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_2(const struct eap_pax_hdr *VAR_3,
       u8 VAR_4, u8 VAR_5, size_t VAR_6)
{
 struct wpabuf *VAR_7;
 struct eap_pax_hdr *VAR_8;

 VAR_7 = FUNC_0(VAR_2, VAR_1,
        sizeof(*VAR_8) + VAR_6, VAR_0, VAR_4);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_1(VAR_7, sizeof(*VAR_8));
 VAR_8->op_code = VAR_5;
 VAR_8->flags = 0;
 VAR_8->mac_id = VAR_3->mac_id;
 VAR_8->dh_group_id = VAR_3->dh_group_id;
 VAR_8->public_key_id = VAR_3->public_key_id;

 return VAR_7;
}
