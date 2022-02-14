
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unicx {scalar_t__ multiline; int indent; } ;
struct TYPE_4__ {int hdr; } ;
struct uni_all {int mtype; TYPE_2__ u; } ;
struct TYPE_3__ {int (* print ) (TYPE_2__*,struct unicx*) ;int name; } ;


 int FUNC_0 (TYPE_2__*,struct unicx*) ;
 int FUNC_1 (char*,struct unicx*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_2 (struct unicx*) ;
 int FUNC_3 (int *,struct unicx*) ;
 int FUNC_4 (struct unicx*,char*,...) ;

__attribute__((used)) static void
FUNC_5(const struct uni_all *VAR_1, struct unicx *VAR_2)
{
 FUNC_1("mtype", VAR_2);
 if(VAR_1->mtype >= 256 || VAR_0[VAR_1->mtype] == ((void*)0)) {
  FUNC_4(VAR_2, "0x%02x(ERROR)", VAR_1->mtype);
 } else {
  FUNC_4(VAR_2, "%s", VAR_0[VAR_1->mtype]->name);
  FUNC_3(&VAR_1->u.hdr, VAR_2);
  VAR_2->indent++;
  FUNC_2(VAR_2);
  (*VAR_0[VAR_1->mtype]->print)(&VAR_1->u, VAR_2);
  VAR_2->indent--;
 }

 if(VAR_2->multiline == 0)
  FUNC_4(VAR_2, "\n");
}
