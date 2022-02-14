
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int name; struct eap_method* next; } ;


 struct eap_method* VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;

size_t FUNC_2(char *VAR_1, size_t VAR_2)
{
 char *VAR_3, *VAR_4;
 struct eap_method *VAR_5;
 int VAR_6;

 if (VAR_2 == 0)
  return 0;

 VAR_3 = VAR_1;
 VAR_4 = VAR_3 + VAR_2;

 for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->next) {
  VAR_6 = FUNC_0(VAR_3, VAR_4 - VAR_3, "%s%s",
      VAR_5 == VAR_0 ? "" : " ", VAR_5->name);
  if (FUNC_1(VAR_4 - VAR_3, VAR_6))
   break;
  VAR_3 += VAR_6;
 }
 VAR_1[VAR_2 - 1] = '\0';

 return VAR_3 - VAR_1;
}
