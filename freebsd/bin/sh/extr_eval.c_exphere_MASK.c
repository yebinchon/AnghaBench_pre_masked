
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* expdoc; int doc; } ;
union node {TYPE_1__ nhere; } ;
struct localvar {int dummy; } ;
struct jmploc {int loc; } ;
struct arglist {char** args; } ;
struct TYPE_4__ {unsigned char reset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct arglist*,int ) ;
 int VAR_4 ;
 struct jmploc* VAR_5 ;
 struct localvar* VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void
FUNC_4(union node *VAR_8, struct arglist *VAR_9)
{
 struct jmploc VAR_10;
 struct jmploc *VAR_11;
 struct localvar *VAR_12;
 int VAR_13 = 0;
 unsigned char VAR_14;

 VAR_8->nhere.expdoc = "";
 VAR_12 = VAR_6;
 VAR_6 = ((void*)0);
 VAR_14 = VAR_7.reset;
 VAR_4++;
 VAR_11 = VAR_5;
 if (FUNC_3(VAR_10.loc))
  VAR_13 = VAR_3 != VAR_0;
 else {
  VAR_5 = &VAR_10;
  FUNC_0(VAR_8->nhere.doc, VAR_9, 0);
  VAR_8->nhere.expdoc = VAR_9->args[0];
  VAR_1;
 }
 VAR_5 = VAR_11;
 VAR_4--;
 FUNC_2();
 VAR_6 = VAR_12;
 VAR_7.reset = VAR_14;
 if (VAR_13)
  FUNC_1(VAR_5->loc, 1);
 VAR_2;
}
