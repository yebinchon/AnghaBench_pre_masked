
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int const*,size_t,int const*,int const*,int const*,size_t,int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*,int const*,int const*,size_t,int const*,int const*) ;
 scalar_t__ FUNC_2 (int const*,int const*,int const*,size_t,int const*,size_t,int const*) ;
 scalar_t__ FUNC_3 (int const*,int const*,int const*,size_t,int const*,int const*) ;
 scalar_t__ FUNC_4 (int const*,int const*,int const*) ;
 scalar_t__ FUNC_5 (int const*,int const*) ;
 int const* FUNC_6 (int const*,size_t*) ;
 scalar_t__ FUNC_7 (int const*,size_t,int const*) ;
 int FUNC_8 (int ,char*,int const*,int ) ;
 int FUNC_9 (int ,char*,int const*,size_t) ;
 int FUNC_10 (int ,char*,int const*,size_t) ;
 int FUNC_11 (int ,char*,int const*,size_t) ;

int FUNC_12(const u8 *VAR_5, size_t VAR_6,
        const u8 *VAR_7, size_t VAR_8,
        int VAR_9,
        const u8 *VAR_10,
        const u8 *VAR_11,
        u8 *VAR_12, u8 *VAR_13,
        u8 *VAR_14)
{
 const u8 *VAR_15;
 size_t VAR_16;
 u8 VAR_17[16], VAR_18[16];

 FUNC_9(VAR_4, "MSCHAPV2: Identity",
     VAR_5, VAR_6);
 VAR_16 = VAR_6;
 VAR_15 = FUNC_6(VAR_5, &VAR_16);
 FUNC_9(VAR_4, "MSCHAPV2: Username",
     VAR_15, VAR_16);

 FUNC_8(VAR_4, "MSCHAPV2: auth_challenge",
      VAR_10, VAR_1);
 FUNC_8(VAR_4, "MSCHAPV2: peer_challenge",
      VAR_11, VAR_1);
 FUNC_9(VAR_4, "MSCHAPV2: username",
     VAR_15, VAR_16);


 if (VAR_9) {
  FUNC_11(VAR_4, "MSCHAPV2: password hash",
    VAR_7, VAR_8);
  if (FUNC_3(VAR_10, VAR_11,
      VAR_15, VAR_16,
      VAR_7, VAR_12) ||
      FUNC_1(
       VAR_7, VAR_11, VAR_10,
       VAR_15, VAR_16, VAR_12,
       VAR_13))
   return -1;
 } else {
  FUNC_10(VAR_4, "MSCHAPV2: password",
          VAR_7, VAR_8);
  if (FUNC_2(VAR_10, VAR_11,
      VAR_15, VAR_16,
      VAR_7, VAR_8,
      VAR_12) ||
      FUNC_0(VAR_7, VAR_8,
          VAR_11,
          VAR_10,
          VAR_15, VAR_16,
          VAR_12,
          VAR_13))
   return -1;
 }
 FUNC_8(VAR_4, "MSCHAPV2: NT Response",
      VAR_12, VAR_3);
 FUNC_8(VAR_4, "MSCHAPV2: Auth Response",
      VAR_13, VAR_0);


 if (VAR_9) {
  if (FUNC_5(VAR_7, VAR_18))
   return -1;
 } else {
  if (FUNC_7(VAR_7, VAR_8, VAR_17) ||
      FUNC_5(VAR_17, VAR_18))
   return -1;
 }
 if (FUNC_4(VAR_18, VAR_12, VAR_14))
  return -1;
 FUNC_11(VAR_4, "MSCHAPV2: Master Key",
   VAR_14, VAR_2);

 return 0;
}
