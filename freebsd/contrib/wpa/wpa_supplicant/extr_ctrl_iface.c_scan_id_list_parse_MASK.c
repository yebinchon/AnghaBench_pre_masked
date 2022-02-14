
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1, const char *VAR_2,
         unsigned int *VAR_3, int VAR_4[])
{
 const char *VAR_5 = VAR_2;

 while (VAR_5) {
  if (*VAR_5 == ' ' || *VAR_5 == '\0')
   break;
  if (*VAR_3 == VAR_0)
   return -1;
  VAR_4[(*VAR_3)++] = FUNC_0(VAR_5);
  VAR_5 = FUNC_1(VAR_5, ',');
  if (VAR_5)
   VAR_5++;
 }

 return 0;
}
