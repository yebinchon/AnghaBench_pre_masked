
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct dpp_pkex {int Nx; int identifier; TYPE_1__* own_bi; } ;
struct dpp_curve_params {int prime_len; int ike_group; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;
struct TYPE_2__ {struct dpp_curve_params* curve; } ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct wpabuf* FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (int const*,int ,int) ;
 int FUNC_2 (struct wpabuf*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct dpp_curve_params const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int) ;
 int FUNC_8 (struct wpabuf*,int) ;
 int FUNC_9 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf *
FUNC_10(struct dpp_pkex *VAR_12,
        enum dpp_status_error VAR_13,
        const BIGNUM *VAR_14, const BIGNUM *VAR_15)
{
 struct wpabuf *VAR_16 = ((void*)0);
 size_t VAR_17;
 const struct dpp_curve_params *VAR_18 = VAR_12->own_bi->curve;


 VAR_17 = 4 + 1;
 if (VAR_12->identifier)
  VAR_17 += 4 + FUNC_4(VAR_12->identifier);
 VAR_17 += 4 + 2 * VAR_18->prime_len;
 VAR_16 = FUNC_0(VAR_3, VAR_17);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_13);






 if (VAR_12->identifier) {
  FUNC_8(VAR_16, VAR_0);
  FUNC_8(VAR_16, FUNC_4(VAR_12->identifier));
  FUNC_9(VAR_16, VAR_12->identifier);
 }

 if (VAR_13 != VAR_5)
  goto skip_encrypted_key;
 FUNC_8(VAR_16, VAR_1);
 FUNC_8(VAR_16, 2 * VAR_18->prime_len);
 if (FUNC_1(VAR_14, FUNC_7(VAR_16, VAR_18->prime_len),
      VAR_18->prime_len) < 0 ||
     FUNC_1(VAR_14, VAR_12->Nx, VAR_18->prime_len) < 0 ||
     FUNC_1(VAR_15, FUNC_7(VAR_16, VAR_18->prime_len),
      VAR_18->prime_len) < 0)
  goto fail;

skip_encrypted_key:
 if (VAR_13 == VAR_4) {

  FUNC_8(VAR_16, VAR_2);
  FUNC_8(VAR_16, 2);
  FUNC_8(VAR_16, VAR_18->ike_group);
 }

 return VAR_16;
fail:
 FUNC_6(VAR_16);
 return ((void*)0);
}
