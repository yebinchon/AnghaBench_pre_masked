
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int flags; char const* opt; char** argv; char** out; int cpidx; scalar_t__ argc; } ;
struct option {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,struct option const*) ;
 int FUNC_1 (struct parse_opt_ctx_t*,char const*,struct option const*) ;
 int FUNC_2 (char const* const*,struct option const*) ;
 int FUNC_3 (struct parse_opt_ctx_t*,struct option const*) ;
 int FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char const* const*,struct option const*,int) ;

int FUNC_7(struct parse_opt_ctx_t *VAR_7,
         const struct option *VAR_8,
         const char * const VAR_9[])
{
 int VAR_10 = !(VAR_7->flags & VAR_4);


 VAR_7->opt = ((void*)0);

 for (; VAR_7->argc; VAR_7->argc--, VAR_7->argv++) {
  const char *VAR_11 = VAR_7->argv[0];

  if (*VAR_11 != '-' || !VAR_11[1]) {
   if (VAR_7->flags & VAR_5)
    break;
   VAR_7->out[VAR_7->cpidx++] = VAR_7->argv[0];
   continue;
  }

  if (VAR_11[1] != '-') {
   VAR_7->opt = VAR_11 + 1;
   if (VAR_10 && *VAR_7->opt == 'h')
    return FUNC_2(VAR_9, VAR_8);
   switch (FUNC_3(VAR_7, VAR_8)) {
   case -1:
    return FUNC_2(VAR_9, VAR_8);
   case -2:
    goto unknown;
   default:
    break;
   }
   if (VAR_7->opt)
    FUNC_0(VAR_11 + 1, VAR_8);
   while (VAR_7->opt) {
    if (VAR_10 && *VAR_7->opt == 'h')
     return FUNC_2(VAR_9, VAR_8);
    switch (FUNC_3(VAR_7, VAR_8)) {
    case -1:
     return FUNC_2(VAR_9, VAR_8);
    case -2:





     VAR_7->argv[0] = FUNC_5(VAR_7->opt - 1);
     *(char *)VAR_7->argv[0] = '-';
     goto unknown;
    default:
     break;
    }
   }
   continue;
  }

  if (!VAR_11[2]) {
   if (!(VAR_7->flags & VAR_1)) {
    VAR_7->argc--;
    VAR_7->argv++;
   }
   break;
  }

  if (VAR_10 && !FUNC_4(VAR_11 + 2, "help-all"))
   return FUNC_6(VAR_9, VAR_8, 1);
  if (VAR_10 && !FUNC_4(VAR_11 + 2, "help"))
   return FUNC_2(VAR_9, VAR_8);
  if (!FUNC_4(VAR_11 + 2, "list-opts"))
   return VAR_3;
  switch (FUNC_1(VAR_7, VAR_11 + 2, VAR_8)) {
  case -1:
   return FUNC_2(VAR_9, VAR_8);
  case -2:
   goto unknown;
  default:
   break;
  }
  continue;
unknown:
  if (!(VAR_7->flags & VAR_2))
   return VAR_6;
  VAR_7->out[VAR_7->cpidx++] = VAR_7->argv[0];
  VAR_7->opt = ((void*)0);
 }
 return VAR_0;
}
