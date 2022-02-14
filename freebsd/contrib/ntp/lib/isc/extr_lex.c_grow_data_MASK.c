
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {int max_token; char* data; int mctx; } ;
typedef TYPE_1__ isc_lex_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static inline isc_result_t
FUNC_3(isc_lex_t *VAR_2, size_t *VAR_3, char **VAR_4, char **VAR_5) {
 char *VAR_6;

 VAR_6 = FUNC_0(VAR_2->mctx, VAR_2->max_token * 2 + 1);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 FUNC_2(VAR_6, VAR_2->data, VAR_2->max_token + 1);
 *VAR_4 = VAR_6 + (*VAR_4 - VAR_2->data);
 if (*VAR_5 != ((void*)0))
  *VAR_5 = VAR_6 + (*VAR_5 - VAR_2->data);
 FUNC_1(VAR_2->mctx, VAR_2->data, VAR_2->max_token + 1);
 VAR_2->data = VAR_6;
 *VAR_3 += VAR_2->max_token;
 VAR_2->max_token *= 2;
 return (VAR_1);
}
