
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_stat {int version; char* name; } ;
struct module_map_entry {char* ifname; char* kldname; } ;
typedef int ifname ;
typedef int ifkind ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,struct module_stat*) ;
 struct module_map_entry* VAR_2 ;
 int FUNC_6 (struct module_map_entry*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char const*,int) ;

void
FUNC_11(const char *VAR_4)
{

 struct module_stat VAR_5;
 int VAR_6, VAR_7, VAR_8;
 char VAR_9[VAR_0 + 3], VAR_10[VAR_0], *VAR_11;
 const char *VAR_12;
 struct module_map_entry *VAR_13;
 bool VAR_14;


 if (VAR_3)
  return;


 FUNC_10(VAR_10, VAR_4, sizeof(VAR_10));
 for (VAR_11 = VAR_10; *VAR_11 != 0; VAR_11++)
  if (FUNC_0(*VAR_11)) {
   *VAR_11 = 0;
   break;
  }


 *VAR_9 = '\0';
 VAR_14 = 0;
 for (VAR_6 = 0; VAR_6 < FUNC_6(VAR_2); ++VAR_6) {
  VAR_13 = &VAR_2[VAR_6];
  if (FUNC_8(VAR_13->ifname, VAR_10) == 0) {
   FUNC_10(VAR_9, VAR_13->kldname, sizeof(VAR_9));
   VAR_14 = 1;
   break;
  }
 }


 if (!VAR_14) {

     FUNC_10(VAR_9, "if_", sizeof(VAR_9));
     FUNC_9(VAR_9, VAR_10, sizeof(VAR_9));
 }


 VAR_5.version = sizeof(struct module_stat);
 for (VAR_7 = FUNC_3(0); VAR_7 > 0; VAR_7 = FUNC_3(VAR_7)) {

  for (VAR_8 = FUNC_1(VAR_7); VAR_8 > 0;
       VAR_8 = FUNC_4(VAR_8)) {
   if (FUNC_5(VAR_8, &VAR_5) < 0)
    continue;

   if ((VAR_12 = FUNC_7(VAR_5.name, '/')) != ((void*)0)) {
    VAR_12++;
   } else {
    VAR_12 = VAR_5.name;
   }





   if ((!VAR_14 && FUNC_8(VAR_10, VAR_12) == 0) ||
       FUNC_8(VAR_9, VAR_12) == 0)
    return;
  }
 }





 (void) FUNC_2(VAR_9);
}
