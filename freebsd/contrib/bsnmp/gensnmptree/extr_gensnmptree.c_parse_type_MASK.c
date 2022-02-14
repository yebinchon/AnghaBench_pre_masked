
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct type {int is_enum; int is_bits; int enums; void* syntax; } ;
struct enums {long value; void* name; } ;
typedef enum tok { ____Placeholder_tok } tok ;


 int FUNC_0 (int *,struct enums*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 char FUNC_1 () ;
 int VAR_6 ;
 struct type* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 () ;
 void* VAR_7 ;
 struct enums* FUNC_5 (int) ;

__attribute__((used)) static u_int
FUNC_6(enum tok *VAR_8, struct type *VAR_9, const char *VAR_10, char **VAR_11)
{
 u_int VAR_12;
 struct enums *VAR_13;

 VAR_12 = VAR_7;
 if (VAR_11 != ((void*)0))
  *VAR_11 = ((void*)0);

 if (*VAR_8 == VAR_2 || *VAR_8 == VAR_0) {
  if (VAR_9 == ((void*)0) && VAR_10 != ((void*)0)) {
   VAR_9 = FUNC_2(VAR_10);
   VAR_9->is_enum = (*VAR_8 == VAR_2);
   VAR_9->is_bits = (*VAR_8 == VAR_0);
   VAR_9->syntax = VAR_12;
  }
  if (FUNC_1() != '(')
   FUNC_3("'(' expected after ENUM");

  if ((*VAR_8 = FUNC_1()) == VAR_3)
   FUNC_3("unexpected EOF in ENUM");
  do {
   VAR_13 = ((void*)0);
   if (VAR_9 != ((void*)0)) {
    VAR_13 = FUNC_5(sizeof(*VAR_13));
   }
   if (*VAR_8 == '-') {
    if ((*VAR_8 = FUNC_1()) == VAR_3)
     FUNC_3("unexpected EOF in ENUM");
    VAR_13->value = -(long)VAR_7;
   } else
    VAR_13->value = VAR_7;

   if (*VAR_8 != VAR_4)
    FUNC_3("need value for ENUM/BITS");
   if (FUNC_1() != VAR_5)
    FUNC_3("need string in ENUM/BITS");
   VAR_13->name = FUNC_4();
   FUNC_0(&VAR_9->enums, VAR_13, VAR_6);
   if ((*VAR_8 = FUNC_1()) == VAR_3)
    FUNC_3("unexpected EOF in ENUM/BITS");
  } while (*VAR_8 != ')');
  *VAR_8 = FUNC_1();

 } else if (*VAR_8 == VAR_1) {
  *VAR_8 = FUNC_1();

 } else {
  if ((*VAR_8 = FUNC_1()) == '|') {
   if (FUNC_1() != VAR_5)
    FUNC_3("subtype expected after '|'");
   if (VAR_11 != ((void*)0))
    *VAR_11 = FUNC_4();
   *VAR_8 = FUNC_1();
  }
 }

 return (VAR_12);
}
