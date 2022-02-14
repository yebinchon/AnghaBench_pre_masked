
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_7__ {int sources; int mctx; int max_token; } ;
typedef TYPE_1__ isc_lex_t ;
typedef void* isc_boolean_t ;
struct TYPE_8__ {int line; scalar_t__ ignored; int * name; int * pushback; void* input; int at_eof; void* need_close; void* is_file; scalar_t__ result; } ;
typedef TYPE_2__ inputsource ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int **,int ) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int * FUNC_5 (int ,char const*) ;
 int VAR_3 ;

__attribute__((used)) static inline isc_result_t
FUNC_6(isc_lex_t *VAR_4, isc_boolean_t VAR_5, isc_boolean_t VAR_6,
    void *VAR_7, const char *VAR_8)
{
 inputsource *VAR_9;
 isc_result_t VAR_10;

 VAR_9 = FUNC_3(VAR_4->mctx, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return (VAR_1);
 VAR_9->result = VAR_2;
 VAR_9->is_file = VAR_5;
 VAR_9->need_close = VAR_6;
 VAR_9->at_eof = VAR_0;
 VAR_9->input = VAR_7;
 VAR_9->name = FUNC_5(VAR_4->mctx, VAR_8);
 if (VAR_9->name == ((void*)0)) {
  FUNC_4(VAR_4->mctx, VAR_9, sizeof(*VAR_9));
  return (VAR_1);
 }
 VAR_9->pushback = ((void*)0);
 VAR_10 = FUNC_1(VAR_4->mctx, &VAR_9->pushback,
         VAR_4->max_token);
 if (VAR_10 != VAR_2) {
  FUNC_2(VAR_4->mctx, VAR_9->name);
  FUNC_4(VAR_4->mctx, VAR_9, sizeof(*VAR_9));
  return (VAR_10);
 }
 VAR_9->ignored = 0;
 VAR_9->line = 1;
 FUNC_0(VAR_4->sources, VAR_9, VAR_3);

 return (VAR_2);
}
