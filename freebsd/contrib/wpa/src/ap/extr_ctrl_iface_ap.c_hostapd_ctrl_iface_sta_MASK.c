
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int * eapol_sm; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int *) ;
 int FUNC_1 (int *,char*,size_t) ;
 scalar_t__ FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (struct hostapd_data*,struct sta_info*,char*,size_t) ;
 scalar_t__ FUNC_4 (char const*,int *) ;
 int FUNC_5 (char*,size_t,char*) ;
 scalar_t__ FUNC_6 (size_t,int) ;
 char* FUNC_7 (char const*,char) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

int FUNC_9(struct hostapd_data *VAR_1, const char *VAR_2,
      char *VAR_3, size_t VAR_4)
{
 u8 VAR_5[VAR_0];
 int VAR_6;
 const char *VAR_7;
 struct sta_info *VAR_8;

 if (FUNC_4(VAR_2, VAR_5)) {
  VAR_6 = FUNC_5(VAR_3, VAR_4, "FAIL\n");
  if (FUNC_6(VAR_4, VAR_6))
   return 0;
  return VAR_6;
 }

 VAR_8 = FUNC_0(VAR_1, VAR_5);
 if (VAR_8 == ((void*)0))
  return -1;

 VAR_7 = FUNC_7(VAR_2, ' ');
 if (VAR_7) {
  VAR_7++;
  return -1;
 }

 VAR_6 = FUNC_3(VAR_1, VAR_8, VAR_3, VAR_4);
 VAR_6 += FUNC_2(VAR_5, VAR_3 + VAR_6, VAR_4 - VAR_6);

 return VAR_6;
}
