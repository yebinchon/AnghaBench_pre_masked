
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sources; } ;
typedef TYPE_1__ isc_lex_t ;
typedef int isc_boolean_t ;
struct TYPE_7__ {int is_file; } ;
typedef TYPE_2__ inputsource ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

isc_boolean_t
FUNC_3(isc_lex_t *VAR_1) {
 inputsource *VAR_2;

 FUNC_1(FUNC_2(VAR_1));

 VAR_2 = FUNC_0(VAR_1->sources);

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 return (VAR_2->is_file);
}
