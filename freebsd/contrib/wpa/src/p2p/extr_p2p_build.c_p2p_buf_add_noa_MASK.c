
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_noa_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpabuf*,struct p2p_noa_desc*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int) ;

void FUNC_4(struct wpabuf *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5,
       struct p2p_noa_desc *VAR_6, struct p2p_noa_desc *VAR_7)
{

 FUNC_3(VAR_2, VAR_1);
 FUNC_2(VAR_2, 2 + (VAR_6 ? 13 : 0) + (VAR_7 ? 13 : 0));
 FUNC_3(VAR_2, VAR_3);
 FUNC_3(VAR_2, (VAR_4 ? 0x80 : 0) | (VAR_5 & 0x7f));
 FUNC_0(VAR_2, VAR_6);
 FUNC_0(VAR_2, VAR_7);
 FUNC_1(VAR_0, "P2P: * Notice of Absence");
}
