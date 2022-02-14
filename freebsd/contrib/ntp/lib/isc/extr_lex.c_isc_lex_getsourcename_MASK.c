
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sources; } ;
typedef TYPE_1__ isc_lex_t ;
struct TYPE_7__ {char* name; } ;
typedef TYPE_2__ inputsource ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

char *
FUNC_3(isc_lex_t *VAR_0) {
 inputsource *VAR_1;

 FUNC_1(FUNC_2(VAR_0));
 VAR_1 = FUNC_0(VAR_0->sources);

 if (VAR_1 == ((void*)0))
  return (((void*)0));

 return (VAR_1->name);
}
