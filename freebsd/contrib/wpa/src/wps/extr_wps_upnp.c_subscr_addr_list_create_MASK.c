
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subscription {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (struct subscription*,char const*,int) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_3(struct subscription *VAR_1,
        const char *VAR_2)
{
 const char *VAR_3;
 FUNC_2(VAR_0, "WPS UPnP: Parsing URL list '%s'", VAR_2);
 for (;;) {
  while (*VAR_2 == ' ' || *VAR_2 == '\t')
   VAR_2++;
  if (*VAR_2 != '<')
   break;
  VAR_2++;
  VAR_3 = FUNC_0(VAR_2, '>');
  if (VAR_3 == ((void*)0))
   break;
  FUNC_1(VAR_1, VAR_2, VAR_3 - VAR_2);
  VAR_2 = VAR_3 + 1;
 }
}
