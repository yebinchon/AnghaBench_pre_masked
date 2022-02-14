
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field {int kernel; scalar_t__ field; } ;
typedef int jsmntok_t ;


 int FUNC_0 (char*,char**,char*,int ,int *) ;
 int FUNC_1 (char*,int *) ;
 struct field* VAR_0 ;
 scalar_t__ FUNC_2 (char*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(char *VAR_1, jsmntok_t *VAR_2, int VAR_3,
         char **VAR_4, jsmntok_t *VAR_5)
{
 struct field *VAR_6;
 jsmntok_t VAR_7 = *VAR_5;

 for (VAR_6 = VAR_0; VAR_6->field; VAR_6++)
  if (FUNC_2(VAR_1, VAR_2, VAR_6->field) && VAR_3) {
   FUNC_1(VAR_1, &VAR_7);
   FUNC_0(VAR_1, VAR_4, ",", VAR_6->kernel, &VAR_7);
   return 1;
  }
 return 0;
}
