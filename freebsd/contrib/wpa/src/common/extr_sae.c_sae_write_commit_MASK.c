
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sae_data {TYPE_1__* tmp; int group; } ;
struct TYPE_2__ {int prime_len; int own_commit_element_ffc; int own_commit_element_ecc; scalar_t__ ec; int own_commit_scalar; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (scalar_t__,int ,int *,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,char*,char const*) ;
 int * FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int * FUNC_7 (struct wpabuf*,int) ;
 int FUNC_8 (struct wpabuf*,struct wpabuf const*) ;
 int FUNC_9 (struct wpabuf*,int ) ;
 int FUNC_10 (struct wpabuf*,char const*) ;
 int FUNC_11 (struct wpabuf*,scalar_t__) ;

void FUNC_12(struct sae_data *VAR_3, struct wpabuf *VAR_4,
        const struct wpabuf *VAR_5, const char *VAR_6)
{
 u8 *VAR_7;

 if (VAR_3->tmp == ((void*)0))
  return;

 FUNC_9(VAR_4, VAR_3->group);
 if (VAR_5) {
  FUNC_8(VAR_4, VAR_5);
  FUNC_3(VAR_0, "SAE: Anti-clogging token",
       FUNC_5(VAR_5), FUNC_6(VAR_5));
 }
 VAR_7 = FUNC_7(VAR_4, VAR_3->tmp->prime_len);
 FUNC_0(VAR_3->tmp->own_commit_scalar, VAR_7,
        VAR_3->tmp->prime_len, VAR_3->tmp->prime_len);
 FUNC_3(VAR_0, "SAE: own commit-scalar",
      VAR_7, VAR_3->tmp->prime_len);
 if (VAR_3->tmp->ec) {
  VAR_7 = FUNC_7(VAR_4, 2 * VAR_3->tmp->prime_len);
  FUNC_1(VAR_3->tmp->ec,
           VAR_3->tmp->own_commit_element_ecc,
           VAR_7, VAR_7 + VAR_3->tmp->prime_len);
  FUNC_3(VAR_0, "SAE: own commit-element(x)",
       VAR_7, VAR_3->tmp->prime_len);
  FUNC_3(VAR_0, "SAE: own commit-element(y)",
       VAR_7 + VAR_3->tmp->prime_len, VAR_3->tmp->prime_len);
 } else {
  VAR_7 = FUNC_7(VAR_4, VAR_3->tmp->prime_len);
  FUNC_0(VAR_3->tmp->own_commit_element_ffc, VAR_7,
         VAR_3->tmp->prime_len, VAR_3->tmp->prime_len);
  FUNC_3(VAR_0, "SAE: own commit-element",
       VAR_7, VAR_3->tmp->prime_len);
 }

 if (VAR_6) {

  FUNC_11(VAR_4, VAR_1);
  FUNC_11(VAR_4, 1 + FUNC_2(VAR_6));
  FUNC_11(VAR_4, VAR_2);
  FUNC_10(VAR_4, VAR_6);
  FUNC_4(VAR_0, "SAE: own Password Identifier: %s",
      VAR_6);
 }
}
