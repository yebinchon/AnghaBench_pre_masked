
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 int FUNC_1 (char*,size_t,char*,char*,char const* const) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, size_t VAR_1, unsigned int VAR_2)
{
 static const char *const VAR_3[] = {
  "PREROUTING", "INPUT", "FORWARD",
  "OUTPUT", "POSTROUTING", "BROUTING",
 };
 unsigned int VAR_4;
 char *VAR_5 = VAR_0;
 bool VAR_6 = 0;
 int VAR_7;

 *VAR_5 = '\0';
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); ++VAR_4) {
  if (!(VAR_2 & (1 << VAR_4)))
   continue;
  VAR_7 = FUNC_1(VAR_5, VAR_1, "%s%s", VAR_6 ? "/" : "", VAR_3[VAR_4]);
  if (VAR_7 > 0) {
   VAR_1 -= VAR_7;
   VAR_5 += VAR_7;
  }
  VAR_6 = 1;
 }

 return VAR_0;
}
