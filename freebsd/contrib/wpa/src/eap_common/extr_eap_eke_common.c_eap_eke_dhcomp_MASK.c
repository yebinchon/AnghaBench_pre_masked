
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct eap_eke_session {scalar_t__ encr; int dhgroup; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int const*,int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int const*,int) ;
 scalar_t__ FUNC_3 (int const*,int) ;
 int FUNC_4 (int ,char*,int const*,int) ;

int FUNC_5(struct eap_eke_session *VAR_4, const u8 *VAR_5, const u8 *VAR_6,
     u8 *VAR_7)
{
 u8 VAR_8[VAR_2];
 int VAR_9;
 u8 VAR_10[VAR_0];

 VAR_9 = FUNC_1(VAR_4->dhgroup);
 if (VAR_9 < 0)
  return -1;







 if (VAR_4->encr != VAR_1)
  return -1;
 if (FUNC_3(VAR_10, VAR_0))
  return -1;
 FUNC_4(VAR_3, "EAP-EKE: IV for Encr(key, y)",
      VAR_10, VAR_0);
 FUNC_2(VAR_8, VAR_6, VAR_9);
 if (FUNC_0(VAR_5, VAR_10, VAR_8, VAR_9) < 0)
  return -1;
 FUNC_2(VAR_7, VAR_10, VAR_0);
 FUNC_2(VAR_7 + VAR_0, VAR_8, VAR_9);
 FUNC_4(VAR_3, "EAP-EKE: DHComponent = Encr(key, y)",
      VAR_7, VAR_0 + VAR_9);

 return 0;
}
