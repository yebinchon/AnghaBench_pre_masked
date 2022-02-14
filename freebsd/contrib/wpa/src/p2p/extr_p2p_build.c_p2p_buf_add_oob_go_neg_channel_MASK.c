
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
typedef enum p2p_role_indication { ____Placeholder_p2p_role_indication } p2p_role_indication ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (struct wpabuf*,char const*,int) ;
 int FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int ) ;

void FUNC_4(struct wpabuf *VAR_2, const char *VAR_3,
        u8 VAR_4, u8 VAR_5,
        enum p2p_role_indication VAR_6)
{

 FUNC_3(VAR_2, VAR_1);
 FUNC_2(VAR_2, 6);
 FUNC_1(VAR_2, VAR_3, 3);
 FUNC_3(VAR_2, VAR_4);
 FUNC_3(VAR_2, VAR_5);
 FUNC_3(VAR_2, (u8) VAR_6);
 FUNC_0(VAR_0, "P2P: * OOB GO Negotiation Channel: Operating "
     "Class %u Channel %u Role %d",
     VAR_4, VAR_5, VAR_6);
}
