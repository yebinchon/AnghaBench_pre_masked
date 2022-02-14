
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_tdls_lnkid {int const* init_sta; int const* resp_sta; } ;
struct wpa_tdls_ftie {int mic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int*,int,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int*,int) ;
 int FUNC_6 (int ,char*,int const*,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(const u8 *VAR_4, u8 VAR_5, const u8 *VAR_6,
        const u8 *VAR_7, const u8 *VAR_8,
        const u8 *VAR_9, u8 *VAR_10)
{
 u8 *VAR_11, *VAR_12;
 struct wpa_tdls_ftie *VAR_13;
 const struct wpa_tdls_lnkid *VAR_14;
 int VAR_15;
 int VAR_16 = 2 * VAR_0 + 1 + 2 + VAR_6[1] + 2 + VAR_7[1] +
  2 + VAR_8[1] + 2 + VAR_9[1];
 VAR_11 = FUNC_4(VAR_16);
 if (!VAR_11) {
  FUNC_7(VAR_2, "TDLS: No memory for MIC calculation");
  return -1;
 }

 VAR_12 = VAR_11;
 VAR_14 = (const struct wpa_tdls_lnkid *) VAR_6;

 FUNC_2(VAR_12, VAR_14->init_sta, VAR_0);
 VAR_12 += VAR_0;

 FUNC_2(VAR_12, VAR_14->resp_sta, VAR_0);
 VAR_12 += VAR_0;

 *VAR_12++ = VAR_5;

 FUNC_2(VAR_12, VAR_6, 2 + VAR_6[1]);
 VAR_12 += 2 + VAR_6[1];

 FUNC_2(VAR_12, VAR_7, 2 + VAR_7[1]);
 VAR_12 += 2 + VAR_7[1];

 FUNC_2(VAR_12, VAR_8, 2 + VAR_8[1]);
 VAR_12 += 2 + VAR_8[1];

 FUNC_2(VAR_12, VAR_9, 2 + VAR_9[1]);
 VAR_13 = (struct wpa_tdls_ftie *) VAR_12;
 FUNC_3(VAR_13->mic, 0, VAR_3);
 VAR_12 += 2 + VAR_9[1];

 FUNC_5(VAR_1, "TDLS: Data for FTIE MIC", VAR_11, VAR_12 - VAR_11);
 FUNC_6(VAR_1, "TDLS: KCK", VAR_4, 16);
 VAR_15 = FUNC_0(VAR_4, VAR_11, VAR_12 - VAR_11, VAR_10);
 FUNC_1(VAR_11);
 FUNC_5(VAR_1, "TDLS: FTIE MIC", VAR_10, 16);
 return VAR_15;
}
