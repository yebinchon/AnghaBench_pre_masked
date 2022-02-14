
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct val_env {int date_override; int skew_min; int skew_max; } ;
typedef int incep ;
typedef int expi ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_6(struct val_env* VAR_1, uint32_t VAR_2,
 uint8_t* VAR_3, uint8_t* VAR_4, char** VAR_5)
{

 uint32_t VAR_6, VAR_7, VAR_8;
 FUNC_1(&VAR_6, VAR_3, sizeof(VAR_6));
 FUNC_1(&VAR_7, VAR_4, sizeof(VAR_7));
 VAR_6 = FUNC_2(VAR_6);
 VAR_7 = FUNC_2(VAR_7);


 if(VAR_1->date_override) {
  if(VAR_1->date_override == -1) {
   FUNC_5(VAR_0, "date override: ignore date");
   return 1;
  }
  VAR_8 = VAR_1->date_override;
  FUNC_5(VAR_0, "date override option %d", (int)VAR_8);
 } else VAR_8 = VAR_2;


 if(FUNC_0(VAR_7, VAR_6) > 0) {
  FUNC_3("verify: inception after expiration, "
   "signature bad", VAR_6, VAR_7, VAR_8);
  *VAR_5 = "signature inception after expiration";
  return 0;
 }
 if(FUNC_0(VAR_7, VAR_8) > 0) {

  uint32_t VAR_9 = FUNC_4(VAR_7, VAR_6)/10;
  if(VAR_9 < (uint32_t)VAR_1->skew_min) VAR_9 = VAR_1->skew_min;
  if(VAR_9 > (uint32_t)VAR_1->skew_max) VAR_9 = VAR_1->skew_max;
  if(FUNC_4(VAR_8, VAR_7) > VAR_9) {
   FUNC_3("verify: signature bad, current time is"
    " before inception date", VAR_6, VAR_7, VAR_8);
   *VAR_5 = "signature before inception date";
   return 0;
  }
  FUNC_3("verify warning suspicious signature inception "
   " or bad local clock", VAR_6, VAR_7, VAR_8);
 }
 if(FUNC_0(VAR_8, VAR_6) > 0) {
  uint32_t VAR_10 = FUNC_4(VAR_7, VAR_6)/10;
  if(VAR_10 < (uint32_t)VAR_1->skew_min) VAR_10 = VAR_1->skew_min;
  if(VAR_10 > (uint32_t)VAR_1->skew_max) VAR_10 = VAR_1->skew_max;
  if(FUNC_4(VAR_6, VAR_8) > VAR_10) {
   FUNC_3("verify: signature expired", VAR_6,
    VAR_7, VAR_8);
   *VAR_5 = "signature expired";
   return 0;
  }
  FUNC_3("verify warning suspicious signature expiration "
   " or bad local clock", VAR_6, VAR_7, VAR_8);
 }
 return 1;
}
