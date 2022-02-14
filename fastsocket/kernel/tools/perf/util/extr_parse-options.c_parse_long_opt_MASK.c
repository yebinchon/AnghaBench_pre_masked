
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char const** out; char const* opt; int cpidx; } ;
struct option {scalar_t__ type; char const* long_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,char*,char*,char*,char*) ;
 int FUNC_1 (struct parse_opt_ctx_t*,struct option const*,int) ;
 int FUNC_2 (struct option const*,char*,int) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*,char const*) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_8(struct parse_opt_ctx_t *VAR_3, const char *VAR_4,
                          const struct option *VAR_5)
{
 const char *VAR_6 = FUNC_5(VAR_4, '=');
 const struct option *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 0, VAR_10 = 0;

 if (!VAR_6)
  VAR_6 = VAR_4 + FUNC_6(VAR_4);

 for (; VAR_5->type != VAR_1; VAR_5++) {
  const char *VAR_11;
  int VAR_12 = 0;

  if (!VAR_5->long_name)
   continue;

  VAR_11 = FUNC_4(VAR_4, VAR_5->long_name);
  if (VAR_5->type == VAR_0) {
   if (!VAR_11)
    continue;
   if (*VAR_11 == '=')
    return FUNC_2(VAR_5, "takes no value", VAR_12);
   if (*VAR_11)
    continue;
   VAR_3->out[VAR_3->cpidx++] = VAR_4 - 2;
   return 0;
  }
  if (!VAR_11) {

   if (!FUNC_7(VAR_5->long_name, VAR_4, VAR_6 - VAR_4)) {
is_abbreviated:
    if (VAR_7) {






     VAR_8 = VAR_7;
     VAR_10 = VAR_9;
    }
    if (!(VAR_12 & VAR_2) && *VAR_6)
     VAR_3->opt = VAR_6 + 1;
    VAR_7 = VAR_5;
    VAR_9 = VAR_12;
    continue;
   }

   if (!FUNC_3("no-", VAR_4)) {
    VAR_12 |= VAR_2;
    goto is_abbreviated;
   }

   if (FUNC_7(VAR_4, "no-", 3))
    continue;
   VAR_12 |= VAR_2;
   VAR_11 = FUNC_4(VAR_4 + 3, VAR_5->long_name);

   if (!VAR_11 && !FUNC_3(VAR_5->long_name, VAR_4 + 3))
    goto is_abbreviated;
   if (!VAR_11)
    continue;
  }
  if (*VAR_11) {
   if (*VAR_11 != '=')
    continue;
   VAR_3->opt = VAR_11 + 1;
  }
  return FUNC_1(VAR_3, VAR_5, VAR_12);
 }

 if (VAR_8)
  return FUNC_0("Ambiguous option: %s "
   "(could be --%s%s or --%s%s)",
   VAR_4,
   (VAR_10 & VAR_2) ? "no-" : "",
   VAR_8->long_name,
   (VAR_9 & VAR_2) ? "no-" : "",
   VAR_7->long_name);
 if (VAR_7)
  return FUNC_1(VAR_3, VAR_7, VAR_9);
 return -2;
}
