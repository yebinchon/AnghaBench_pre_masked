
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int flags; } ;
struct ucl_chunk {unsigned char* pos; unsigned char const* end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucl_chunk*,unsigned char const*) ;
 int FUNC_1 (struct ucl_parser*,unsigned char const*,int) ;
 int FUNC_2 (unsigned char const,int ) ;

__attribute__((used)) static bool
FUNC_3 (struct ucl_parser *VAR_3,
  struct ucl_chunk *VAR_4)
{
 const unsigned char *VAR_5, *VAR_6;
 enum {
  macro_skip_start = 0,
  macro_has_symbols,
  macro_has_obrace,
  macro_has_quote,
  macro_has_backslash,
  macro_has_sqbrace,
  macro_save
 } VAR_7 = macro_skip_start, VAR_8 = macro_skip_start;

 VAR_5 = VAR_4->pos;
 VAR_6 = VAR_4->pos;

 while (VAR_5 < VAR_4->end) {
  switch (VAR_7) {
  case macro_skip_start:
   if (!FUNC_2 (*VAR_5, VAR_0)) {
    VAR_7 = macro_has_symbols;
   }
   else if (FUNC_2 (*VAR_5, VAR_1)) {
    VAR_7 = macro_save;
    continue;
   }

   FUNC_0 (VAR_4, VAR_5);
   break;

  case macro_has_symbols:
   if (*VAR_5 == '{') {
    VAR_7 = macro_has_sqbrace;
   }
   else if (*VAR_5 == '(') {
    VAR_7 = macro_has_obrace;
   }
   else if (*VAR_5 == '"') {
    VAR_7 = macro_has_quote;
   }
   else if (*VAR_5 == '\n') {
    VAR_7 = macro_save;
    continue;
   }

   FUNC_0 (VAR_4, VAR_5);
   break;

  case macro_has_obrace:
   if (*VAR_5 == '\\') {
    VAR_8 = VAR_7;
    VAR_7 = macro_has_backslash;
   }
   else if (*VAR_5 == ')') {
    VAR_7 = macro_has_symbols;
   }

   FUNC_0 (VAR_4, VAR_5);
   break;

  case macro_has_sqbrace:
   if (*VAR_5 == '\\') {
    VAR_8 = VAR_7;
    VAR_7 = macro_has_backslash;
   }
   else if (*VAR_5 == '}') {
    VAR_7 = macro_save;
   }

   FUNC_0 (VAR_4, VAR_5);
   break;

  case macro_has_quote:
   if (*VAR_5 == '\\') {
    VAR_8 = VAR_7;
    VAR_7 = macro_has_backslash;
   }
   else if (*VAR_5 == '"') {
    VAR_7 = macro_save;
   }

   FUNC_0 (VAR_4, VAR_5);
   break;

  case macro_has_backslash:
   VAR_7 = VAR_8;
   FUNC_0 (VAR_4, VAR_5);
   break;

  case macro_save:
   if (VAR_3->flags & VAR_2) {
    FUNC_1 (VAR_3, VAR_6, VAR_5 - VAR_6);
   }

   return 1;
  }
 }

 return 0;
}
