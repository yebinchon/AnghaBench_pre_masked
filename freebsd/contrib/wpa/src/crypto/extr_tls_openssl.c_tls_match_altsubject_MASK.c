
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*,char) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (int *,int,char const*,size_t) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_5(X509 *VAR_4, const char *VAR_5)
{
 int VAR_6;
 const char *VAR_7, *VAR_8;
 size_t VAR_9;

 VAR_7 = VAR_5;
 do {
  if (FUNC_2(VAR_7, "EMAIL:", 6) == 0) {
   VAR_6 = VAR_1;
   VAR_7 += 6;
  } else if (FUNC_2(VAR_7, "DNS:", 4) == 0) {
   VAR_6 = VAR_0;
   VAR_7 += 4;
  } else if (FUNC_2(VAR_7, "URI:", 4) == 0) {
   VAR_6 = VAR_2;
   VAR_7 += 4;
  } else {
   FUNC_4(VAR_3, "TLS: Invalid altSubjectName "
       "match '%s'", VAR_7);
   return 0;
  }
  VAR_8 = FUNC_0(VAR_7, ';');
  while (VAR_8) {
   if (FUNC_2(VAR_8 + 1, "EMAIL:", 6) == 0 ||
       FUNC_2(VAR_8 + 1, "DNS:", 4) == 0 ||
       FUNC_2(VAR_8 + 1, "URI:", 4) == 0)
    break;
   VAR_8 = FUNC_0(VAR_8 + 1, ';');
  }
  if (VAR_8)
   VAR_9 = VAR_8 - VAR_7;
  else
   VAR_9 = FUNC_1(VAR_7);
  if (FUNC_3(VAR_4, VAR_6, VAR_7, VAR_9) > 0)
   return 1;
  VAR_7 = VAR_8 + 1;
 } while (VAR_8);

 return 0;
}
