
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wpa_eapol_variable ;
typedef int u8 ;
struct ibss_rsn_peer {int dummy; } ;
struct ibss_rsn {int dummy; } ;


 int VAR_0 ;

 struct ibss_rsn_peer* FUNC_0 (struct ibss_rsn*,int const*) ;
 int FUNC_1 (struct ibss_rsn*,struct ibss_rsn_peer*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, const u8 *VAR_2,
           wpa_eapol_variable VAR_3, int VAR_4)
{
 struct ibss_rsn *VAR_5 = VAR_1;
 struct ibss_rsn_peer *VAR_6 = FUNC_0(VAR_5, VAR_2);

 if (VAR_6 == ((void*)0))
  return;

 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_5, VAR_6, VAR_4);
  break;
 default:

  FUNC_2(VAR_0, "AUTH: eapol event not handled %d", VAR_3);
  break;
 }
}
