
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct milenage_parameters {char* imsi; int sqn; int amf; int opc; int ki; struct milenage_parameters* next; } ;
typedef int name ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 struct milenage_parameters* VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,int,int ,int) ;

__attribute__((used)) static void FUNC_11(const char *VAR_1)
{
 FILE *VAR_2, *VAR_3;
 char VAR_4[500], VAR_5[500], *VAR_6;
 char *VAR_7 = VAR_5 + sizeof(VAR_5);
 struct milenage_parameters *VAR_8;
 size_t VAR_9;

 VAR_2 = FUNC_2(VAR_1, "r");
 if (VAR_2 == ((void*)0)) {
  FUNC_5("Could not open Milenage data file '%s'\n", VAR_1);
  return;
 }

 FUNC_7(VAR_4, sizeof(VAR_4), "%s.new", VAR_1);
 VAR_3 = FUNC_2(VAR_4, "w");
 if (VAR_3 == ((void*)0)) {
  FUNC_5("Could not write Milenage data file '%s'\n", VAR_4);
  FUNC_0(VAR_2);
  return;
 }

 while (FUNC_1(VAR_5, sizeof(VAR_5), VAR_2)) {

  VAR_5[sizeof(VAR_5) - 1] = '\0';

  VAR_6 = FUNC_8(VAR_5, ' ');
  if (VAR_5[0] == '#' || VAR_6 == ((void*)0) || VAR_6 - VAR_5 >= 20)
   goto no_update;

  VAR_9 = VAR_6 - VAR_5;

  for (VAR_8 = VAR_0; VAR_8; VAR_8 = VAR_8->next) {
   if (FUNC_9(VAR_5, VAR_8->imsi, VAR_9) == 0 &&
       VAR_8->imsi[VAR_9] == '\0')
    break;
  }

  if (!VAR_8)
   goto no_update;

  VAR_6 = VAR_5;
  VAR_6 += FUNC_7(VAR_6, VAR_7 - VAR_6, "%s ", VAR_8->imsi);
  VAR_6 += FUNC_10(VAR_6, VAR_7 - VAR_6, VAR_8->ki, 16);
  *VAR_6++ = ' ';
  VAR_6 += FUNC_10(VAR_6, VAR_7 - VAR_6, VAR_8->opc, 16);
  *VAR_6++ = ' ';
  VAR_6 += FUNC_10(VAR_6, VAR_7 - VAR_6, VAR_8->amf, 2);
  *VAR_6++ = ' ';
  VAR_6 += FUNC_10(VAR_6, VAR_7 - VAR_6, VAR_8->sqn, 6);
  *VAR_6++ = '\n';

 no_update:
  FUNC_3(VAR_3, "%s", VAR_5);
 }

 FUNC_0(VAR_3);
 FUNC_0(VAR_2);

 FUNC_7(VAR_4, sizeof(VAR_4), "%s.bak", VAR_1);
 if (FUNC_6(VAR_1, VAR_4) < 0) {
  FUNC_4("rename");
  return;
 }

 FUNC_7(VAR_4, sizeof(VAR_4), "%s.new", VAR_1);
 if (FUNC_6(VAR_4, VAR_1) < 0) {
  FUNC_4("rename");
  return;
 }

}
