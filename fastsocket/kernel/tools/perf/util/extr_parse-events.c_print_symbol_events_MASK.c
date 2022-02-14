
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_symbol {char* symbol; char* alias; } ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, unsigned VAR_3,
    struct event_symbol *VAR_4, unsigned VAR_5,
    bool VAR_6)
{
 unsigned VAR_7, VAR_8 = 0;
 char VAR_9[VAR_0];

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++, VAR_4++) {

  if (VAR_2 != ((void*)0) &&
      !(FUNC_2(VAR_4->symbol, VAR_2) ||
        (VAR_4->alias && FUNC_2(VAR_4->alias, VAR_2))))
   continue;

  if (VAR_6) {
   FUNC_0("%s ", VAR_4->symbol);
   continue;
  }

  if (FUNC_3(VAR_4->alias))
   FUNC_1(VAR_9, VAR_0, "%s OR %s", VAR_4->symbol, VAR_4->alias);
  else
   FUNC_4(VAR_9, VAR_4->symbol, VAR_0);

  FUNC_0("  %-50s [%s]\n", VAR_9, VAR_1[VAR_3]);

  VAR_8++;
 }

 if (VAR_8)
  FUNC_0("\n");
}
