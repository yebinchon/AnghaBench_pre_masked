
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {struct symbol* next; int export; TYPE_1__* module; int name; int crc; } ;
struct buffer {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*,char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct symbol*) ;
 int FUNC_2 (int ) ;
 struct symbol** VAR_1 ;
 int FUNC_3 (struct buffer*,char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2)
{
 struct buffer VAR_3 = { };
 struct symbol *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0 ; VAR_5++) {
  VAR_4 = VAR_1[VAR_5];
  while (VAR_4) {
   if (FUNC_1(VAR_4))
    FUNC_0(&VAR_3, "0x%08x\t%s\t%s\t%s\n",
     VAR_4->crc, VAR_4->name,
     VAR_4->module->name,
     FUNC_2(VAR_4->export));
   VAR_4 = VAR_4->next;
  }
 }
 FUNC_3(&VAR_3, VAR_2);
}
