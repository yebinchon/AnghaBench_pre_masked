
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_8__ {int mctx; int sources; } ;
typedef TYPE_1__ isc_lex_t ;
struct TYPE_9__ {int pushback; int name; scalar_t__ input; scalar_t__ need_close; scalar_t__ is_file; } ;
typedef TYPE_2__ inputsource ;
typedef int FILE ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,TYPE_2__*,int) ;
 int VAR_2 ;

isc_result_t
FUNC_8(isc_lex_t *VAR_3) {
 inputsource *VAR_4;





 FUNC_2(FUNC_3(VAR_3));

 VAR_4 = FUNC_0(VAR_3->sources);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_3->sources, VAR_4, VAR_2);
 if (VAR_4->is_file) {
  if (VAR_4->need_close)
   (void)FUNC_4((FILE *)(VAR_4->input));
 }
 FUNC_6(VAR_3->mctx, VAR_4->name);
 FUNC_5(&VAR_4->pushback);
 FUNC_7(VAR_3->mctx, VAR_4, sizeof(*VAR_4));

 return (VAR_1);
}
