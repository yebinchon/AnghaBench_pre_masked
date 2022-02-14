
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ status; struct symbol* expansion_trail; int name; int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_4 ;
 int FUNC_1 (struct symbol*,int) ;
 struct symbol* VAR_5 ;
 struct symbol* FUNC_2 (char const*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int ) ;
 char* VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char*,char const*,unsigned long) ;
 int VAR_9 ;

void FUNC_8(const char *VAR_10)
{
 struct symbol *VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_2);
 if (!VAR_11)
  FUNC_0("export undefined symbol %s", VAR_10);
 else {
  unsigned long VAR_12;
  int VAR_13 = 0;

  if (VAR_6)
   FUNC_3(VAR_3, "Export %s == <", VAR_10);

  VAR_5 = (struct symbol *)-1L;

  VAR_11->expansion_trail = VAR_5;
  VAR_5 = VAR_11;
  VAR_12 = FUNC_1(VAR_11, 0xffffffff) ^ 0xffffffff;

  VAR_11 = VAR_5;
  while (VAR_11 != (struct symbol *)-1L) {
   struct symbol *VAR_14 = VAR_11->expansion_trail;

   if (VAR_11->status != VAR_1) {
    if (!VAR_13) {
     FUNC_5();
     FUNC_3(VAR_9, "%s: %s: modversion "
      "changed because of changes "
      "in ", VAR_7 ? "error" :
             "warning", VAR_10);
    } else
     FUNC_3(VAR_9, ", ");
    FUNC_6(VAR_11->type, VAR_11->name);
    if (VAR_11->status == VAR_0)
     FUNC_3(VAR_9, " (became defined)");
    VAR_13 = 1;
    if (VAR_7)
     VAR_4++;
   }
   VAR_11->expansion_trail = 0;
   VAR_11 = VAR_14;
  }
  if (VAR_13)
   FUNC_3(VAR_9, "\n");

  if (VAR_6)
   FUNC_4(">\n", VAR_3);


  FUNC_7("%s__crc_%s = 0x%08lx ;\n", VAR_8, VAR_10, VAR_12);
 }
}
