
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union uni_msgall {int hdr; } ;
typedef int u_int ;
struct unicx {scalar_t__ multiline; int indent; } ;
struct TYPE_2__ {int (* print ) (union uni_msgall const*,struct unicx*) ;int name; } ;


 int FUNC_0 (union uni_msgall const*,struct unicx*) ;
 int FUNC_1 (char*,struct unicx*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_2 (struct unicx*) ;
 int FUNC_3 (int *,struct unicx*) ;
 int FUNC_4 (struct unicx*,char*,...) ;

__attribute__((used)) static void
FUNC_5(u_int VAR_1, const union uni_msgall *VAR_2,
    struct unicx *VAR_3)
{

 FUNC_1("mtype", VAR_3);
 if (VAR_1 >= 256 || VAR_0[VAR_1] == ((void*)0)) {
  FUNC_4(VAR_3, "0x%02x(ERROR)", VAR_1);
 } else {
  FUNC_4(VAR_3, "%s", VAR_0[VAR_1]->name);
  FUNC_3(&VAR_2->hdr, VAR_3);
  VAR_3->indent++;
  FUNC_2(VAR_3);
  (*VAR_0[VAR_1]->print)(VAR_2, VAR_3);
  VAR_3->indent--;
 }

 if(VAR_3->multiline == 0)
  FUNC_4(VAR_3, "\n");
}
