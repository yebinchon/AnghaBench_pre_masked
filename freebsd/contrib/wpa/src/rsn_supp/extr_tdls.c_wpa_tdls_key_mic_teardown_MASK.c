
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int trans_seq ;
struct wpa_tdls_ftie {int mic; } ;
typedef int rcode ;
typedef int dtoken ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int const*,int*,int,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int*,int) ;
 int FUNC_7 (int ,char*,int const*,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(const u8 *VAR_3, u8 VAR_4, u16 VAR_5,
         u8 VAR_6, const u8 *VAR_7,
         const u8 *VAR_8, u8 *VAR_9)
{
 u8 *VAR_10, *VAR_11;
 struct wpa_tdls_ftie *VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_7 == ((void*)0))
  return -1;

 VAR_14 = 2 + VAR_7[1] + sizeof(VAR_5) + sizeof(VAR_6) +
  sizeof(VAR_4) + 2 + VAR_8[1];

 VAR_10 = FUNC_5(VAR_14);
 if (!VAR_10) {
  FUNC_8(VAR_1, "TDLS: No memory for MIC calculation");
  return -1;
 }

 VAR_11 = VAR_10;

 FUNC_3(VAR_11, VAR_7, 2 + VAR_7[1]);
 VAR_11 += 2 + VAR_7[1];

 FUNC_0(VAR_11, VAR_5);
 VAR_11 += sizeof(VAR_5);

 *VAR_11++ = VAR_6;

 *VAR_11++ = VAR_4;

 FUNC_3(VAR_11, VAR_8, 2 + VAR_8[1]);
 VAR_12 = (struct wpa_tdls_ftie *) VAR_11;
 FUNC_4(VAR_12->mic, 0, VAR_2);
 VAR_11 += 2 + VAR_8[1];

 FUNC_6(VAR_0, "TDLS: Data for FTIE MIC", VAR_10, VAR_11 - VAR_10);
 FUNC_7(VAR_0, "TDLS: KCK", VAR_3, 16);
 VAR_13 = FUNC_1(VAR_3, VAR_10, VAR_11 - VAR_10, VAR_9);
 FUNC_2(VAR_10);
 FUNC_6(VAR_0, "TDLS: FTIE MIC", VAR_9, 16);
 return VAR_13;
}
