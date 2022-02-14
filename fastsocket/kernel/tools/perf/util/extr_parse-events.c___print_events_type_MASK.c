
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct event_symbol {char* alias; char* symbol; } ;
typedef int name ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(u8 VAR_1, struct event_symbol *VAR_2,
    unsigned VAR_3)
{
 char VAR_4[64];
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3 ; VAR_5++, VAR_2++) {
  if (FUNC_2(VAR_2->alias))
   FUNC_1(VAR_4, sizeof(VAR_4), "%s OR %s",
     VAR_2->symbol, VAR_2->alias);
  else
   FUNC_1(VAR_4, sizeof(VAR_4), "%s", VAR_2->symbol);

  FUNC_0("  %-50s [%s]\n", VAR_4,
   VAR_0[VAR_1]);
 }
}
