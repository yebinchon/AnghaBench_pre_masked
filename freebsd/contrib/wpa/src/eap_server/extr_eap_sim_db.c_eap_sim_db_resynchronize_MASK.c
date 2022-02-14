
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_db_data {scalar_t__ sock; } ;
typedef int msg ;


 int VAR_0 ;
 char const VAR_1 ;
 char const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct eap_sim_db_data*,char*,int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,int,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,char const*) ;
 scalar_t__ FUNC_6 (char*,int,int const*,int ) ;

int FUNC_7(struct eap_sim_db_data *VAR_5,
        const char *VAR_6,
        const u8 *VAR_7, const u8 *VAR_8)
{
 const char *VAR_9;
 size_t VAR_10;

 if (VAR_6 == ((void*)0) ||
     (VAR_6[0] != VAR_1 &&
      VAR_6[0] != VAR_2) ||
     VAR_6[1] == '\0' || FUNC_4(VAR_6) > 20) {
  FUNC_5(VAR_4, "EAP-SIM DB: unexpected username '%s'",
      VAR_6);
  return -1;
 }
 VAR_9 = VAR_6 + 1;
 FUNC_5(VAR_4, "EAP-SIM DB: Get AKA auth for IMSI '%s'",
     VAR_9);

 if (VAR_5->sock >= 0) {
  char VAR_11[100];
  int VAR_12, VAR_13;

  VAR_10 = FUNC_4(VAR_9);
  VAR_12 = FUNC_2(VAR_11, sizeof(VAR_11), "AKA-AUTS ");
  if (FUNC_3(sizeof(VAR_11), VAR_12) ||
      VAR_12 + VAR_10 >= sizeof(VAR_11))
   return -1;
  FUNC_1(VAR_11 + VAR_12, VAR_9, VAR_10);
  VAR_12 += VAR_10;

  VAR_13 = FUNC_2(VAR_11 + VAR_12, sizeof(VAR_11) - VAR_12, " ");
  if (FUNC_3(sizeof(VAR_11) - VAR_12, VAR_13))
   return -1;
  VAR_12 += VAR_13;
  VAR_12 += FUNC_6(VAR_11 + VAR_12, sizeof(VAR_11) - VAR_12,
     VAR_7, VAR_0);
  VAR_13 = FUNC_2(VAR_11 + VAR_12, sizeof(VAR_11) - VAR_12, " ");
  if (FUNC_3(sizeof(VAR_11) - VAR_12, VAR_13))
   return -1;
  VAR_12 += VAR_13;
  VAR_12 += FUNC_6(VAR_11 + VAR_12, sizeof(VAR_11) - VAR_12,
     VAR_8, VAR_3);
  FUNC_5(VAR_4, "EAP-SIM DB: reporting AKA AUTS for "
      "IMSI '%s'", VAR_9);
  if (FUNC_0(VAR_5, VAR_11, VAR_12) < 0)
   return -1;
 }

 return 0;
}
