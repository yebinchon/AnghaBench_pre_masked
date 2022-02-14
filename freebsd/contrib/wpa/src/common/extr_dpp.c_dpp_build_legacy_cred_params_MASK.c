
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dpp_configuration {int psk; scalar_t__ psk_set; scalar_t__ passphrase; } ;
typedef int psk ;
typedef int pass ;


 int FUNC_0 (char*,int,scalar_t__,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,int ,int) ;
 int FUNC_4 (struct wpabuf*,char*) ;

__attribute__((used)) static void FUNC_5(struct wpabuf *VAR_0,
      struct dpp_configuration *VAR_1)
{
 if (VAR_1->passphrase && FUNC_2(VAR_1->passphrase) < 64) {
  char VAR_2[63 * 6 + 1];

  FUNC_0(VAR_2, sizeof(VAR_2), VAR_1->passphrase,
       FUNC_2(VAR_1->passphrase));
  FUNC_4(VAR_0, "\"pass\":\"");
  FUNC_4(VAR_0, VAR_2);
  FUNC_4(VAR_0, "\"");
  FUNC_1(VAR_2, 0, sizeof(VAR_2));
 } else if (VAR_1->psk_set) {
  char VAR_3[2 * sizeof(VAR_1->psk) + 1];

  FUNC_3(VAR_3, sizeof(VAR_3),
     VAR_1->psk, sizeof(VAR_1->psk));
  FUNC_4(VAR_0, "\"psk_hex\":\"");
  FUNC_4(VAR_0, VAR_3);
  FUNC_4(VAR_0, "\"");
  FUNC_1(VAR_3, 0, sizeof(VAR_3));
 }
}
