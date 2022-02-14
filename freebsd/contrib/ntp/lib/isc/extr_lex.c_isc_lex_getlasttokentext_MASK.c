
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_1__ isc_token_t ;
struct TYPE_12__ {unsigned char* base; scalar_t__ length; } ;
typedef TYPE_2__ isc_region_t ;
struct TYPE_13__ {int sources; } ;
typedef TYPE_3__ isc_lex_t ;
struct TYPE_14__ {scalar_t__ ignored; int pushback; } ;
typedef TYPE_4__ inputsource ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;

void
FUNC_7(isc_lex_t *VAR_1, isc_token_t *VAR_2, isc_region_t *VAR_3)
{
 inputsource *VAR_4;

 FUNC_2(FUNC_4(VAR_1));
 VAR_4 = FUNC_0(VAR_1->sources);
 FUNC_2(VAR_4 != ((void*)0));
 FUNC_2(VAR_2 != ((void*)0));
 FUNC_2(FUNC_6(VAR_4->pushback) != 0 ||
  VAR_2->type == VAR_0);

 FUNC_3(VAR_2);

 FUNC_1(VAR_4->ignored <= FUNC_6(VAR_4->pushback));
 VAR_3->base = (unsigned char *)FUNC_5(VAR_4->pushback) +
    VAR_4->ignored;
 VAR_3->length = FUNC_6(VAR_4->pushback) -
      VAR_4->ignored;
}
