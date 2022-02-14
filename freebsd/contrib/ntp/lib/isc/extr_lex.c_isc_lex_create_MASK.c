
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
typedef int isc_mem_t ;
struct TYPE_4__ {size_t max_token; int magic; int sources; int specials; scalar_t__ saved_paren_count; scalar_t__ paren_count; void* last_was_eol; void* comment_ok; scalar_t__ comments; int * mctx; int * data; } ;
typedef TYPE_1__ isc_lex_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (int ,int ,int) ;

isc_result_t
FUNC_5(isc_mem_t *VAR_4, size_t VAR_5, isc_lex_t **VAR_6) {
 isc_lex_t *VAR_7;





 FUNC_1(VAR_6 != ((void*)0) && *VAR_6 == ((void*)0));
 FUNC_1(VAR_5 > 0U);

 VAR_7 = FUNC_2(VAR_4, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 VAR_7->data = FUNC_2(VAR_4, VAR_5 + 1);
 if (VAR_7->data == ((void*)0)) {
  FUNC_3(VAR_4, VAR_7, sizeof(*VAR_7));
  return (VAR_0);
 }
 VAR_7->mctx = VAR_4;
 VAR_7->max_token = VAR_5;
 VAR_7->comments = 0;
 VAR_7->comment_ok = VAR_2;
 VAR_7->last_was_eol = VAR_2;
 VAR_7->paren_count = 0;
 VAR_7->saved_paren_count = 0;
 FUNC_4(VAR_7->specials, 0, 256);
 FUNC_0(VAR_7->sources);
 VAR_7->magic = VAR_3;

 *VAR_6 = VAR_7;

 return (VAR_1);
}
