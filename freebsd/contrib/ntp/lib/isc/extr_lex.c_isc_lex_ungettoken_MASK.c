
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ isc_token_t ;
struct TYPE_10__ {int saved_paren_count; int paren_count; int sources; } ;
typedef TYPE_2__ isc_lex_t ;
struct TYPE_11__ {int at_eof; int saved_line; int line; int pushback; } ;
typedef TYPE_3__ inputsource ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;

void
FUNC_6(isc_lex_t *VAR_2, isc_token_t *VAR_3) {
 inputsource *VAR_4;




 FUNC_1(FUNC_3(VAR_2));
 VAR_4 = FUNC_0(VAR_2->sources);
 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(FUNC_4(VAR_4->pushback) != 0 ||
  VAR_3->type == VAR_1);

 FUNC_2(VAR_3);

 FUNC_5(VAR_4->pushback);
 VAR_2->paren_count = VAR_2->saved_paren_count;
 VAR_4->line = VAR_4->saved_line;
 VAR_4->at_eof = VAR_0;
}
