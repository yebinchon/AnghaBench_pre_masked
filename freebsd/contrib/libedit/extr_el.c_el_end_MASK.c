
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {TYPE_4__* wbuff; TYPE_4__* cbuff; } ;
struct TYPE_19__ {TYPE_4__* wbuff; TYPE_4__* cbuff; } ;
struct TYPE_18__ {TYPE_4__* wbuff; TYPE_4__* cbuff; } ;
struct TYPE_21__ {int el_flags; TYPE_3__ el_lgcyconv; TYPE_2__ el_scratch; TYPE_1__ el_visual; struct TYPE_21__* el_prog; int el_read; } ;
typedef TYPE_4__ EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int ) ;

void
FUNC_13(EditLine *VAR_2)
{

 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(VAR_2);

 FUNC_11(VAR_2);
 FUNC_4(VAR_2);
 FUNC_6(VAR_2);
 if (!(VAR_2->el_flags & VAR_0))
  FUNC_12(VAR_2, VAR_1);
 FUNC_0(VAR_2);
 FUNC_8(VAR_2->el_read);
 FUNC_9(VAR_2);
 FUNC_3(VAR_2);
 FUNC_7(VAR_2);
 FUNC_10(VAR_2);
 FUNC_5(VAR_2);

 FUNC_1(VAR_2->el_prog);
 FUNC_1(VAR_2->el_visual.cbuff);
 FUNC_1(VAR_2->el_visual.wbuff);
 FUNC_1(VAR_2->el_scratch.cbuff);
 FUNC_1(VAR_2->el_scratch.wbuff);
 FUNC_1(VAR_2->el_lgcyconv.cbuff);
 FUNC_1(VAR_2->el_lgcyconv.wbuff);
 FUNC_1(VAR_2);
}
