
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int orphan_cmds; } ;
typedef TYPE_2__ config_tree ;
struct TYPE_6__ {scalar_t__ i; } ;
struct TYPE_8__ {int attr; TYPE_1__ value; struct TYPE_8__* link; } ;
typedef TYPE_3__ attr_val ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(
 config_tree *VAR_3
 )
{
 int VAR_4;
 attr_val * VAR_5;

 VAR_4 = VAR_0;
 VAR_5 = FUNC_0(VAR_3->orphan_cmds);
 for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->link) {
  switch(VAR_5->attr) {

  default:
   break;

  case 128:
   FUNC_3(VAR_5->value.i);
   VAR_4 = VAR_2;
   break;
  }
 }

 if (FUNC_2() <= VAR_1)
  FUNC_3(FUNC_1() - 11);

 return VAR_4;
}
