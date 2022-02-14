
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;

int
FUNC_1(const char *VAR_5, regmatch_t *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 char *VAR_12 = VAR_3;

 for (; VAR_12 - VAR_3 < VAR_4; VAR_12++)
  if (*VAR_12 == '&') {
   VAR_9 = VAR_6[0].rm_so;
   VAR_10 = VAR_6[0].rm_eo;
   FUNC_0(VAR_1, VAR_2, VAR_7 + VAR_10 - VAR_9, VAR_0);
   while (VAR_9 < VAR_10)
    VAR_1[VAR_7++] = VAR_5[VAR_9++];
  } else if (*VAR_12 == '\\' && '1' <= *++VAR_12 && *VAR_12 <= '9' &&
      (VAR_11 = *VAR_12 - '0') <= VAR_8) {
   VAR_9 = VAR_6[VAR_11].rm_so;
   VAR_10 = VAR_6[VAR_11].rm_eo;
   FUNC_0(VAR_1, VAR_2, VAR_7 + VAR_10 - VAR_9, VAR_0);
   while (VAR_9 < VAR_10)
    VAR_1[VAR_7++] = VAR_5[VAR_9++];
  } else {
   FUNC_0(VAR_1, VAR_2, VAR_7 + 1, VAR_0);
   VAR_1[VAR_7++] = *VAR_12;
  }
 FUNC_0(VAR_1, VAR_2, VAR_7 + 1, VAR_0);
 VAR_1[VAR_7] = '\0';
 return VAR_7;
}
