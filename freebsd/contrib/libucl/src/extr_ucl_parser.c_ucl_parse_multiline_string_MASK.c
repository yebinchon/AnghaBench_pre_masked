
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;
struct ucl_chunk {unsigned char* pos; unsigned char const* end; int remain; int column; } ;


 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_1 (struct ucl_chunk*,unsigned char const*) ;

__attribute__((used)) static int
FUNC_2 (struct ucl_parser *VAR_0,
  struct ucl_chunk *VAR_1, const unsigned char *VAR_2,
  int VAR_3, unsigned char const **VAR_4,
  bool *VAR_5)
{
 const unsigned char *VAR_6, *VAR_7, *VAR_8;
 bool VAR_9 = 0;
 int VAR_10 = 0;

 VAR_6 = VAR_1->pos;

 VAR_7 = VAR_6;

 while (VAR_6 < VAR_1->end) {
  if (VAR_9) {
   if (VAR_1->end - VAR_6 < VAR_3) {
    return 0;
   }
   else if (FUNC_0 (VAR_6, VAR_2, VAR_3) == 0) {
    VAR_8 = VAR_6 + VAR_3;
    if (*VAR_8 != '\n' && *VAR_8 != ';' && *VAR_8 != ',') {

     FUNC_1 (VAR_1, VAR_6);
     continue;
    }
    VAR_10 = VAR_6 - VAR_7;
    VAR_1->remain -= VAR_3;
    VAR_1->pos = VAR_6 + VAR_3;
    VAR_1->column = VAR_3;
    *VAR_4 = VAR_7;
    break;
   }
  }
  if (*VAR_6 == '\n') {
   VAR_9 = 1;
  }
  else {
   if (*VAR_6 == '$') {
    *VAR_5 = 1;
   }
   VAR_9 = 0;
  }
  FUNC_1 (VAR_1, VAR_6);
 }

 return VAR_10;
}
