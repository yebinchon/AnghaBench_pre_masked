
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_data {int wpa_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int *,size_t) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int*,int*) ;
 int FUNC_4 (int ,int *,int *,size_t,int *,int,int) ;

int FUNC_5(struct hostapd_data *VAR_4, char *VAR_5)
{
 u8 VAR_6[VAR_0];
 u8 VAR_7[VAR_1];
 u8 VAR_8[VAR_3];
 size_t VAR_9;
 char *VAR_10, *VAR_11;
 int VAR_12 = 0, VAR_13 = 0;






 if (FUNC_1(VAR_5, VAR_6))
  return -1;

 VAR_10 = FUNC_2(VAR_5, ' ');
 if (!VAR_10)
  return -1;
 VAR_10++;

 if (FUNC_0(VAR_10, VAR_7, VAR_1) < 0)
  return -1;

 VAR_10 = FUNC_2(VAR_10, ' ');
 if (!VAR_10)
  return -1;
 VAR_10++;

 VAR_11 = FUNC_2(VAR_10, ' ');
 if (!VAR_11)
  return -1;
 VAR_9 = (VAR_11 - VAR_10) / 2;
 if (VAR_9 < VAR_2 || VAR_9 > VAR_3 ||
     FUNC_0(VAR_10, VAR_8, VAR_9) < 0)
  return -1;

 VAR_10 = VAR_11 + 1;

 if (FUNC_3(VAR_10, "%d %d", &VAR_13, &VAR_12) != 2)
  return -1;

 return FUNC_4(VAR_4->wpa_auth, VAR_6, VAR_8, VAR_9,
       VAR_7, VAR_13, VAR_12);
}
