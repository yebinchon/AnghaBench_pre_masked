
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char,char const*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, const char *VAR_2)
{
 for (; *VAR_1; ++VAR_1) {
  char VAR_3 = *VAR_1;
  switch (VAR_3) {
  case '\t': VAR_3 = 't'; break;
  case '\n': VAR_3 = 'n'; break;
  case '\'': VAR_3 = '\''; break;
  case '\\': VAR_3 = '\\'; break;

  default:
   FUNC_0(VAR_0, "\t[SYNBASE + '%c'] = %s,\n", VAR_3, VAR_2);
   continue;
  }
  FUNC_0(VAR_0, "\t[SYNBASE + '\\%c'] = %s,\n", VAR_3, VAR_2);
 }
}
