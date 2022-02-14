
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int assignment; } ;
struct assignment {char* name; int lineno; scalar_t__ type; TYPE_1__ u; struct assignment* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct assignment *VAR_2)
{
    struct assignment *VAR_3;
    int VAR_4 = 0;
    for(VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
 if(FUNC_2(VAR_3->name, "command")) {
     FUNC_1(VAR_1, "unknown type %s line %d\n", VAR_3->name, VAR_3->lineno);
     VAR_4++;
     continue;
 }
 if(VAR_3->type != VAR_0) {
     FUNC_1(VAR_1, "bad command definition %s line %d\n", VAR_3->name, VAR_3->lineno);
     VAR_4++;
     continue;
 }
 VAR_4 += FUNC_0(VAR_3->u.assignment);
    }
    return VAR_4;
}
