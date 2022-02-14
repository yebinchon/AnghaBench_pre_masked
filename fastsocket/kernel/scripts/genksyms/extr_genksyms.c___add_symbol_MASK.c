
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int type; char const* name; int is_declared; int is_extern; int status; scalar_t__ is_override; struct symbol* hash_next; int * visited; int * expansion_trail; struct string_list* defn; } ;
struct string_list {int dummy; } ;
typedef enum symbol_type { ____Placeholder_symbol_type } symbol_type ;
typedef enum symbol_status { ____Placeholder_symbol_status } symbol_status ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct string_list*,struct string_list*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (struct symbol*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int ,struct string_list*) ;
 int FUNC_8 () ;
 int FUNC_9 (int,char const*) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 char** VAR_9 ;
 struct symbol** VAR_10 ;
 struct symbol* FUNC_11 (int) ;

__attribute__((used)) static struct symbol *FUNC_12(const char *VAR_11, enum symbol_type VAR_12,
       struct string_list *VAR_13, int VAR_14,
       int VAR_15)
{
 unsigned long VAR_16 = FUNC_0(VAR_11) % VAR_0;
 struct symbol *VAR_17;
 enum symbol_status VAR_18 = VAR_3;

 for (VAR_17 = VAR_10[VAR_16]; VAR_17; VAR_17 = VAR_17->hash_next) {
  if (FUNC_6(VAR_17->type) == FUNC_6(VAR_12) &&
      FUNC_10(VAR_11, VAR_17->name) == 0) {
   if (VAR_15)
                       ;
   else if (VAR_17->type == VAR_12 &&
     FUNC_1(VAR_17->defn, VAR_13)) {
    if (!VAR_17->is_declared && VAR_17->is_override) {
     FUNC_8();
     FUNC_9(VAR_12, VAR_11);
     FUNC_3(VAR_8, " modversion is "
      "unchanged\n");
    }
    VAR_17->is_declared = 1;
    return VAR_17;
   } else if (!VAR_17->is_declared) {
    if (VAR_17->is_override && VAR_6) {
     FUNC_8();
     FUNC_3(VAR_8, "ignoring ");
     FUNC_9(VAR_12, VAR_11);
     FUNC_3(VAR_8, " modversion change\n");
     VAR_17->is_declared = 1;
     return VAR_17;
    } else {
     VAR_18 = FUNC_5(VAR_17) ?
      VAR_1 : VAR_2;
    }
   } else {
    FUNC_2("redefinition of %s", VAR_11);
    return VAR_17;
   }
   break;
  }
 }

 if (VAR_17) {
  struct symbol **VAR_19;

  for (VAR_19 = &VAR_10[VAR_16]; *VAR_19; VAR_19 = &(*VAR_19)->hash_next) {
   if (*VAR_19 == VAR_17) {
    *VAR_19 = VAR_17->hash_next;
    break;
   }
  }
  --VAR_7;
 }

 VAR_17 = FUNC_11(sizeof(*VAR_17));
 VAR_17->name = VAR_11;
 VAR_17->type = VAR_12;
 VAR_17->defn = VAR_13;
 VAR_17->expansion_trail = ((void*)0);
 VAR_17->visited = ((void*)0);
 VAR_17->is_extern = VAR_14;

 VAR_17->hash_next = VAR_10[VAR_16];
 VAR_10[VAR_16] = VAR_17;

 VAR_17->is_declared = !VAR_15;
 VAR_17->status = VAR_18;
 VAR_17->is_override = 0;

 if (VAR_5) {
  FUNC_3(VAR_4, "Defn for %s %s == <",
   VAR_9[VAR_12], VAR_11);
  if (VAR_14)
   FUNC_4("extern ", VAR_4);
  FUNC_7(VAR_4, VAR_13);
  FUNC_4(">\n", VAR_4);
 }

 ++VAR_7;
 return VAR_17;
}
