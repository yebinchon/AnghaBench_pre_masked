
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sae_data {TYPE_1__* tmp; } ;
typedef int prime ;
struct TYPE_2__ {int prime_len; int * peer_commit_element_ecc; int ec; int prime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int const*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int const*,int *,int) ;
 int FUNC_5 (int ,char*,int const*,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static u16 FUNC_7(struct sae_data *VAR_4, const u8 **VAR_5,
     const u8 *VAR_6)
{
 u8 VAR_7[VAR_1];

 if (2 * VAR_4->tmp->prime_len > VAR_6 - *VAR_5) {
  FUNC_6(VAR_0, "SAE: Not enough data for "
      "commit-element");
  return VAR_3;
 }

 if (FUNC_0(VAR_4->tmp->prime, VAR_7, sizeof(VAR_7),
     VAR_4->tmp->prime_len) < 0)
  return VAR_3;


 if (FUNC_4(*VAR_5, VAR_7, VAR_4->tmp->prime_len) >= 0 ||
     FUNC_4(*VAR_5 + VAR_4->tmp->prime_len, VAR_7,
        VAR_4->tmp->prime_len) >= 0) {
  FUNC_6(VAR_0, "SAE: Invalid coordinates in peer "
      "element");
  return VAR_3;
 }

 FUNC_5(VAR_0, "SAE: Peer commit-element(x)",
      *VAR_5, VAR_4->tmp->prime_len);
 FUNC_5(VAR_0, "SAE: Peer commit-element(y)",
      *VAR_5 + VAR_4->tmp->prime_len, VAR_4->tmp->prime_len);

 FUNC_1(VAR_4->tmp->peer_commit_element_ecc, 0);
 VAR_4->tmp->peer_commit_element_ecc =
  FUNC_2(VAR_4->tmp->ec, *VAR_5);
 if (VAR_4->tmp->peer_commit_element_ecc == ((void*)0))
  return VAR_3;

 if (!FUNC_3(VAR_4->tmp->ec,
      VAR_4->tmp->peer_commit_element_ecc)) {
  FUNC_6(VAR_0, "SAE: Peer element is not on curve");
  return VAR_3;
 }

 *VAR_5 += 2 * VAR_4->tmp->prime_len;

 return VAR_2;
}
