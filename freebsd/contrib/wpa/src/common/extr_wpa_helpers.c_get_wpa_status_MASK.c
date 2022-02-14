
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (struct wpa_ctrl*) ;
 scalar_t__ FUNC_5 (struct wpa_ctrl*,char*,int,char*,size_t*,int *) ;
 struct wpa_ctrl* FUNC_6 (char const*) ;

int FUNC_7(const char *VAR_0, const char *VAR_1, char *VAR_2,
     size_t VAR_3)
{
 struct wpa_ctrl *VAR_4;
 char VAR_5[4096];
 char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;

 VAR_4 = FUNC_6(VAR_0);
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_8 = sizeof(VAR_5);
 if (FUNC_5(VAR_4, "STATUS-NO_EVENTS", 16, VAR_5, &VAR_8,
        ((void*)0)) < 0) {
  FUNC_4(VAR_4);
  return -1;
 }
 FUNC_4(VAR_4);
 VAR_5[VAR_8] = '\0';

 VAR_9 = FUNC_2(VAR_1);
 VAR_6 = VAR_5;
 while (VAR_6 + VAR_9 < VAR_5 + VAR_8) {
  if (VAR_6 > VAR_5) {
   if (*VAR_6 != '\n') {
    VAR_6++;
    continue;
   }
   VAR_6++;
  }
  if (FUNC_3(VAR_6, VAR_1, VAR_9) != 0 || VAR_6[VAR_9] != '=') {
   VAR_6++;
   continue;
  }
  VAR_6 += VAR_9 + 1;
  VAR_7 = FUNC_1(VAR_6, '\n');
  if (VAR_7 == ((void*)0))
   return -1;
  *VAR_7++ = '\0';
  if (VAR_7 - VAR_6 > (int) VAR_3)
   return -1;
  FUNC_0(VAR_2, VAR_6, VAR_7 - VAR_6);
  return 0;
 }

 return -1;
}
