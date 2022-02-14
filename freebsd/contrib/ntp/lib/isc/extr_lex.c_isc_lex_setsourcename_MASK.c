
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_6__ {int mctx; int sources; } ;
typedef TYPE_1__ isc_lex_t ;
struct TYPE_7__ {char* name; } ;
typedef TYPE_2__ inputsource ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (int ,char const*) ;

isc_result_t
FUNC_5(isc_lex_t *VAR_3, const char *VAR_4) {
 inputsource *VAR_5;
 char *VAR_6;

 FUNC_1(FUNC_2(VAR_3));
 VAR_5 = FUNC_0(VAR_3->sources);

 if (VAR_5 == ((void*)0))
  return(VAR_1);
 VAR_6 = FUNC_4(VAR_3->mctx, VAR_4);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 FUNC_3(VAR_3->mctx, VAR_5->name);
 VAR_5->name = VAR_6;
 return (VAR_2);
}
