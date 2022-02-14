
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;
struct ucl_chunk {unsigned char* pos; unsigned char const* end; int remain; } ;


 int FUNC_0 (struct ucl_chunk*,unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 scalar_t__ FUNC_2 (unsigned char const,unsigned char const) ;

__attribute__((used)) static bool
FUNC_3 (struct ucl_parser *VAR_0,
  struct ucl_chunk *VAR_1, bool *VAR_2, bool *VAR_3)
{
 const unsigned char *VAR_4;
 enum {
  UCL_BRACE_ROUND = 0,
  UCL_BRACE_SQUARE,
  UCL_BRACE_FIGURE
 };
 int VAR_5[3][2] = {{0, 0}, {0, 0}, {0, 0}};

 VAR_4 = VAR_1->pos;

 while (VAR_4 < VAR_1->end) {


  if (*VAR_4 == '{') {
   VAR_5[UCL_BRACE_FIGURE][0] ++;
  }
  else if (*VAR_4 == '}') {
   VAR_5[UCL_BRACE_FIGURE][1] ++;
   if (VAR_5[UCL_BRACE_FIGURE][1] <= VAR_5[UCL_BRACE_FIGURE][0]) {

    FUNC_0 (VAR_1, VAR_4);
    continue;
   }
  }

  else if (*VAR_4 == '[') {
   VAR_5[UCL_BRACE_SQUARE][0] ++;
  }
  else if (*VAR_4 == ']') {
   VAR_5[UCL_BRACE_SQUARE][1] ++;
   if (VAR_5[UCL_BRACE_SQUARE][1] <= VAR_5[UCL_BRACE_SQUARE][0]) {

    FUNC_0 (VAR_1, VAR_4);
    continue;
   }
  }
  else if (*VAR_4 == '$') {
   *VAR_2 = 1;
  }
  else if (*VAR_4 == '\\') {
   *VAR_3 = 1;
   FUNC_0 (VAR_1, VAR_4);
   if (VAR_4 < VAR_1->end) {
    FUNC_0 (VAR_1, VAR_4);
   }
   continue;
  }

  if (FUNC_1 (*VAR_4) || (VAR_1->remain >= 2 && FUNC_2 (VAR_4[0], VAR_4[1]))) {
   break;
  }
  FUNC_0 (VAR_1, VAR_4);
 }

 return 1;
}
