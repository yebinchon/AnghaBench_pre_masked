
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {char* cur_file; int err_code; struct ucl_chunk* chunks; } ;
struct ucl_chunk {int * pos; int column; int line; int * end; } ;
typedef int UT_string ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int **,char const*,char const*,char const*,...) ;

__attribute__((used)) static inline void
FUNC_2 (struct ucl_parser *VAR_0, int VAR_1, const char *VAR_2, UT_string **VAR_3)
{
 const char *VAR_4, *VAR_5;
 struct ucl_chunk *VAR_6 = VAR_0->chunks;

 if (VAR_0->cur_file) {
  VAR_5 = VAR_0->cur_file;
 }
 else {
  VAR_5 = "<unknown>";
 }

 if (VAR_6->pos < VAR_6->end) {
  if (FUNC_0 (*VAR_6->pos)) {
   VAR_4 = "error while parsing %s: "
     "line: %d, column: %d - '%s', character: '%c'";
  }
  else {
   VAR_4 = "error while parsing %s: "
     "line: %d, column: %d - '%s', character: '0x%02x'";
  }
  FUNC_1 (VAR_3, VAR_4,
   VAR_5, VAR_6->line, VAR_6->column,
   VAR_2, *VAR_6->pos);
 }
 else {
  FUNC_1 (VAR_3, "error while parsing %s: at the end of chunk: %s",
   VAR_5, VAR_2);
 }

 VAR_0->err_code = VAR_1;
}
