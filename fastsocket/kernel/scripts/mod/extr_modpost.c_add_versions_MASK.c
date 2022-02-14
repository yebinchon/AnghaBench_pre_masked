
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int name; int crc; int crc_valid; struct module* module; struct symbol* next; int weak; } ;
struct module {int name; struct symbol* unres; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char*,...) ;
 struct symbol* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_4(struct buffer *VAR_3, struct module *VAR_4)
{
 struct symbol *VAR_5, *VAR_6;
 int VAR_7 = 0;

 for (VAR_5 = VAR_4->unres; VAR_5; VAR_5 = VAR_5->next) {
  VAR_6 = FUNC_1(VAR_5->name);
  if (!VAR_6 || VAR_6->module == VAR_4) {
   if (VAR_0 && !VAR_5->weak) {
    if (VAR_2) {
     FUNC_3("\"%s\" [%s.ko] undefined!\n",
          VAR_5->name, VAR_4->name);
    } else {
     FUNC_2("\"%s\" [%s.ko] undefined!\n",
               VAR_5->name, VAR_4->name);
     VAR_7 = 1;
    }
   }
   continue;
  }
  VAR_5->module = VAR_6->module;
  VAR_5->crc_valid = VAR_6->crc_valid;
  VAR_5->crc = VAR_6->crc;
 }

 if (!VAR_1)
  return VAR_7;

 FUNC_0(VAR_3, "\n");
 FUNC_0(VAR_3, "static const struct modversion_info ____versions[]\n");
 FUNC_0(VAR_3, "__used\n");
 FUNC_0(VAR_3, "__attribute__((section(\"__versions\"))) = {\n");

 for (VAR_5 = VAR_4->unres; VAR_5; VAR_5 = VAR_5->next) {
  if (!VAR_5->module)
   continue;
  if (!VAR_5->crc_valid) {
   FUNC_3("\"%s\" [%s.ko] has no CRC!\n",
    VAR_5->name, VAR_4->name);
   continue;
  }
  FUNC_0(VAR_3, "\t{ %#8x, \"%s\" },\n", VAR_5->crc, VAR_5->name);
 }

 FUNC_0(VAR_3, "};\n");

 return VAR_7;
}
