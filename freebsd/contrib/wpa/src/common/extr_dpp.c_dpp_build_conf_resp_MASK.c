
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct dpp_authentication {int conf_resp_status; TYPE_1__* curve; int ke; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;
struct TYPE_2__ {int hash_len; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int,int,int const**,size_t*,int*) ;
 int FUNC_1 (struct wpabuf*,int) ;
 struct wpabuf* FUNC_2 (struct dpp_authentication*,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int ,char*,int const*,int) ;
 int FUNC_4 (int ,char*,int*,int) ;
 int FUNC_5 (int ,char*,struct wpabuf*) ;
 int FUNC_6 (int ,char*) ;
 struct wpabuf* FUNC_7 (size_t) ;
 int FUNC_8 (struct wpabuf*) ;
 int* FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 int* FUNC_11 (struct wpabuf*,int) ;
 int FUNC_12 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_13 (struct wpabuf*,int const*,int) ;
 int FUNC_14 (struct wpabuf*,int) ;
 int FUNC_15 (struct wpabuf*,int const) ;

__attribute__((used)) static struct wpabuf *
FUNC_16(struct dpp_authentication *VAR_16, const u8 *VAR_17,
      u16 VAR_18, int VAR_19)
{
 struct wpabuf *VAR_20;
 size_t VAR_21, VAR_22;
 struct wpabuf *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
 u8 *VAR_25;
 const u8 *VAR_26[1];
 size_t VAR_27[1];
 enum dpp_status_error VAR_28;

 VAR_20 = FUNC_2(VAR_16, VAR_19);
 if (VAR_20) {
  FUNC_4(VAR_13, "DPP: configurationObject JSON",
      FUNC_9(VAR_20), FUNC_10(VAR_20));
 }
 VAR_28 = VAR_20 ? VAR_5 : VAR_4;
 VAR_16->conf_resp_status = VAR_28;


 VAR_21 = 4 + VAR_18;
 if (VAR_20)
  VAR_21 += 4 + FUNC_10(VAR_20);
 VAR_23 = FUNC_7(VAR_21);
 VAR_22 = 4 + 1 + 4 + VAR_21 + VAR_0;




 VAR_24 = FUNC_7(VAR_22);
 if (!VAR_23 || !VAR_24)
  goto fail;
 FUNC_14(VAR_23, VAR_2);
 FUNC_14(VAR_23, VAR_18);
 FUNC_13(VAR_23, VAR_17, VAR_18);
 if (VAR_20) {
  FUNC_14(VAR_23, VAR_1);
  FUNC_14(VAR_23, FUNC_10(VAR_20));
  FUNC_12(VAR_23, VAR_20);
 }
 FUNC_1(VAR_24, VAR_28);





 VAR_26[0] = FUNC_9(VAR_24);
 VAR_27[0] = FUNC_10(VAR_24);
 FUNC_3(VAR_13, "DDP: AES-SIV AD", VAR_26[0], VAR_27[0]);

 FUNC_14(VAR_24, VAR_3);
 FUNC_14(VAR_24, FUNC_10(VAR_23) + VAR_0);
 VAR_25 = FUNC_11(VAR_24, FUNC_10(VAR_23) + VAR_0);

 FUNC_5(VAR_13, "DPP: AES-SIV cleartext", VAR_23);
 if (FUNC_0(VAR_16->ke, VAR_16->curve->hash_len,
       FUNC_9(VAR_23), FUNC_10(VAR_23),
       1, VAR_26, VAR_27, VAR_25) < 0)
  goto fail;
 FUNC_3(VAR_13, "DPP: AES-SIV ciphertext",
      VAR_25, FUNC_10(VAR_23) + VAR_0);
 FUNC_5(VAR_13,
   "DPP: Configuration Response attributes", VAR_24);
out:
 FUNC_8(VAR_20);
 FUNC_8(VAR_23);

 return VAR_24;
fail:
 FUNC_8(VAR_24);
 VAR_24 = ((void*)0);
 goto out;
}
