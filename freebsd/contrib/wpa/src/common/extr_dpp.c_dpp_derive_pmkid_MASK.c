
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct wpabuf {int dummy; } ;
struct dpp_curve_params {int dummy; } ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpabuf* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int const*,int const*,size_t) ;
 int FUNC_2 (int const*,int const*,int) ;
 int FUNC_3 (int,int const**,size_t*,int const*) ;
 int FUNC_4 (int ,char*,int const*,int) ;
 int FUNC_5 (struct wpabuf*) ;
 int const* FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_8(const struct dpp_curve_params *VAR_3,
       EVP_PKEY *VAR_4, EVP_PKEY *VAR_5, u8 *VAR_6)
{
 struct wpabuf *VAR_7, *VAR_8;
 int VAR_9 = -1, VAR_10;
 const u8 *VAR_11[2];
 size_t VAR_12[2];
 u8 VAR_13[VAR_2];


 VAR_7 = FUNC_0(VAR_4, 0);
 VAR_8 = FUNC_0(VAR_5, 0);
 if (!VAR_7 || !VAR_8)
  goto fail;
 VAR_11[0] = FUNC_6(VAR_7);
 VAR_12[0] = FUNC_7(VAR_7) / 2;
 VAR_11[1] = FUNC_6(VAR_8);
 VAR_12[1] = FUNC_7(VAR_8) / 2;
 if (VAR_12[0] != VAR_12[1])
  goto fail;
 if (FUNC_1(VAR_11[0], VAR_11[1], VAR_12[0]) > 0) {
  VAR_11[0] = FUNC_6(VAR_8);
  VAR_11[1] = FUNC_6(VAR_7);
 }
 FUNC_4(VAR_0, "DPP: PMKID hash payload 1", VAR_11[0], VAR_12[0]);
 FUNC_4(VAR_0, "DPP: PMKID hash payload 2", VAR_11[1], VAR_12[1]);
 VAR_10 = FUNC_3(2, VAR_11, VAR_12, VAR_13);
 if (VAR_10 < 0)
  goto fail;
 FUNC_4(VAR_0, "DPP: PMKID hash output", VAR_13, VAR_2);
 FUNC_2(VAR_6, VAR_13, VAR_1);
 FUNC_4(VAR_0, "DPP: PMKID", VAR_6, VAR_1);
 VAR_9 = 0;
fail:
 FUNC_5(VAR_7);
 FUNC_5(VAR_8);
 return VAR_9;
}
