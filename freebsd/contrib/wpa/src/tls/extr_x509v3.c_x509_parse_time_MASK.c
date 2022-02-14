
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ os_time_t ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int,int,int,int,scalar_t__*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(const u8 *VAR_1, size_t VAR_2, u8 VAR_3, os_time_t *VAR_4)
{
 const char *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 VAR_5 = (const char *) VAR_1;
 VAR_6 = VAR_5 + VAR_2;

 switch (VAR_3) {
 case 128:
  if (VAR_2 != 13 || VAR_1[12] != 'Z') {
   FUNC_3(VAR_0, "X509: Unrecognized "
       "UTCTime format", VAR_1, VAR_2);
   return -1;
  }
  VAR_7 = FUNC_1(VAR_5, VAR_6 - VAR_5);
  if (VAR_7 < 0) {
   FUNC_3(VAR_0, "X509: Failed to parse "
       "UTCTime year", VAR_1, VAR_2);
   return -1;
  }
  if (VAR_7 < 50)
   VAR_7 += 2000;
  else
   VAR_7 += 1900;
  VAR_5 += 2;
  break;
 case 129:
  if (VAR_2 != 15 || VAR_1[14] != 'Z') {
   FUNC_3(VAR_0, "X509: Unrecognized "
       "GeneralizedTime format", VAR_1, VAR_2);
   return -1;
  }
  VAR_7 = FUNC_2(VAR_5, VAR_6 - VAR_5);
  if (VAR_7 < 0) {
   FUNC_3(VAR_0, "X509: Failed to parse "
       "GeneralizedTime year", VAR_1, VAR_2);
   return -1;
  }
  VAR_5 += 4;
  break;
 default:
  FUNC_4(VAR_0, "X509: Expected UTCTime or "
      "GeneralizedTime - found tag 0x%x", VAR_3);
  return -1;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_6 - VAR_5);
 if (VAR_8 < 0) {
  FUNC_3(VAR_0, "X509: Failed to parse Time "
      "(month)", VAR_1, VAR_2);
  return -1;
 }
 VAR_5 += 2;

 VAR_9 = FUNC_1(VAR_5, VAR_6 - VAR_5);
 if (VAR_9 < 0) {
  FUNC_3(VAR_0, "X509: Failed to parse Time "
      "(day)", VAR_1, VAR_2);
  return -1;
 }
 VAR_5 += 2;

 VAR_10 = FUNC_1(VAR_5, VAR_6 - VAR_5);
 if (VAR_10 < 0) {
  FUNC_3(VAR_0, "X509: Failed to parse Time "
      "(hour)", VAR_1, VAR_2);
  return -1;
 }
 VAR_5 += 2;

 VAR_11 = FUNC_1(VAR_5, VAR_6 - VAR_5);
 if (VAR_11 < 0) {
  FUNC_3(VAR_0, "X509: Failed to parse Time "
      "(min)", VAR_1, VAR_2);
  return -1;
 }
 VAR_5 += 2;

 VAR_12 = FUNC_1(VAR_5, VAR_6 - VAR_5);
 if (VAR_12 < 0) {
  FUNC_3(VAR_0, "X509: Failed to parse Time "
      "(sec)", VAR_1, VAR_2);
  return -1;
 }

 if (FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_4) < 0) {
  FUNC_3(VAR_0, "X509: Failed to convert Time",
      VAR_1, VAR_2);
  if (VAR_7 < 1970) {





   FUNC_4(VAR_0, "X509: Year=%d before epoch - "
       "assume epoch as the time", VAR_7);
   *VAR_4 = 0;
   return 0;
  }
  return -1;
 }

 return 0;
}
