
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int emsg ;
typedef int code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_4)
{
 char *VAR_5;
 char VAR_6[30], VAR_7[VAR_0];

 FUNC_3(VAR_6, sizeof (VAR_6));
 if (*VAR_6 == 'E' || *VAR_6 == 'F') {
  FUNC_3(VAR_7, sizeof (VAR_7));
  FUNC_1("%s: %s", VAR_4, VAR_7);
  VAR_2 = FUNC_0(VAR_6 + 1);
  if (*VAR_6 == 'F')
   VAR_3 = VAR_1;
  return (-1);
 }
 if (*VAR_6 != 'A') {

  VAR_5 = VAR_6 + FUNC_4(VAR_6);
  if (VAR_5 > VAR_6 && *--VAR_5 == '\n')
   *VAR_5 = '\0';

  FUNC_1("Protocol to remote tape server botched (code \"%s\").\n",
      VAR_6);
  FUNC_2(0);
 }
 return (FUNC_0(VAR_6 + 1));
}
