
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct hostapd_data*,int*,int,struct wpabuf*) ;
 scalar_t__ FUNC_2 (char const*,int*) ;
 int FUNC_3 (char*,size_t,char*,int) ;
 char* FUNC_4 (char const*,char) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (struct wpabuf*) ;
 struct wpabuf* FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct hostapd_data *VAR_1,
      const char *VAR_2, char *VAR_3,
      size_t VAR_4)
{
 u8 VAR_5[VAR_0];
 const char *VAR_6;
 struct wpabuf *VAR_7;
 int VAR_8;
 u8 VAR_9 = 0;

 if (FUNC_2(VAR_2, VAR_5))
  return -1;
 VAR_6 = FUNC_4(VAR_2, ' ');
 if (!VAR_6)
  return -1;
 VAR_6++;
 if (FUNC_5(VAR_6, "req_mode=", 9) == 0) {
  int VAR_10 = FUNC_0(VAR_6 + 9);

  if (VAR_10 < 0)
   return -1;
  VAR_9 = VAR_10;
  VAR_6 += 11;
  VAR_6 = FUNC_4(VAR_6, ' ');
  if (!VAR_6)
   return -1;
  VAR_6++;
 }
 VAR_7 = FUNC_7(VAR_6);
 if (!VAR_7)
  return -1;

 VAR_8 = FUNC_1(VAR_1, VAR_5, VAR_9, VAR_7);
 FUNC_6(VAR_7);
 if (VAR_8 >= 0)
  VAR_8 = FUNC_3(VAR_3, VAR_4, "%d", VAR_8);
 return VAR_8;
}
