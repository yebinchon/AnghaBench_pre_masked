
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;
struct ucl_macro {int dummy; } ;
struct ucl_chunk {unsigned char* pos; unsigned char const* end; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucl_chunk*,unsigned char const*) ;
 int FUNC_1 (unsigned char const) ;
 int FUNC_2 (struct ucl_parser*,struct ucl_chunk*,int*,int*,int*) ;
 scalar_t__ FUNC_3 (unsigned char const,int ) ;

__attribute__((used)) static bool
FUNC_4 (struct ucl_parser *VAR_1,
  struct ucl_chunk *VAR_2, struct ucl_macro *VAR_3,
  unsigned char const **VAR_4, size_t *VAR_5)
{
 const unsigned char *VAR_6, *VAR_7;
 bool VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

 VAR_6 = VAR_2->pos;

 switch (*VAR_6) {
 case '"':

  VAR_7 = VAR_6;
  FUNC_0 (VAR_2, VAR_6);
  if (!FUNC_2 (VAR_1, VAR_2, &VAR_8, &VAR_9, &VAR_10)) {
   return 0;
  }

  *VAR_4 = VAR_7 + 1;
  *VAR_5 = VAR_2->pos - VAR_7 - 2;
  VAR_6 = VAR_2->pos;
  break;
 case '{':

  FUNC_0 (VAR_2, VAR_6);

  while (VAR_6 < VAR_2->end) {
   if (FUNC_3 (*VAR_6, VAR_0)) {
    FUNC_0 (VAR_2, VAR_6);
   }
   else {
    break;
   }
  }
  VAR_7 = VAR_6;
  while (VAR_6 < VAR_2->end) {
   if (*VAR_6 == '}') {
    break;
   }
   FUNC_0 (VAR_2, VAR_6);
  }
  *VAR_4 = VAR_7;
  *VAR_5 = VAR_6 - VAR_7;
  FUNC_0 (VAR_2, VAR_6);
  break;
 default:

  VAR_7 = VAR_6;
  while (VAR_6 < VAR_2->end) {
   if (FUNC_1 (*VAR_6)) {
    break;
   }
   FUNC_0 (VAR_2, VAR_6);
  }
  *VAR_4 = VAR_7;
  *VAR_5 = VAR_6 - VAR_7;
  break;
 }



 while (VAR_6 < VAR_2->end) {
  if (!FUNC_3 (*VAR_6, VAR_0) && *VAR_6 != ';') {
   break;
  }
  FUNC_0 (VAR_2, VAR_6);
 }
 return 1;
}
