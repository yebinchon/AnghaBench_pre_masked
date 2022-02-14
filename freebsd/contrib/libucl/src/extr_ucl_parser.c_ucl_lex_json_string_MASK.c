
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int err; } ;
struct ucl_chunk {unsigned char* pos; unsigned char const* end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const) ;
 int FUNC_1 (struct ucl_chunk*,unsigned char const*) ;
 int FUNC_2 (struct ucl_parser*,int ,char*,int *) ;
 scalar_t__ FUNC_3 (unsigned char,int ) ;

__attribute__((used)) static bool
FUNC_4 (struct ucl_parser *VAR_3,
  struct ucl_chunk *VAR_4, bool *VAR_5, bool *VAR_6, bool *VAR_7)
{
 const unsigned char *VAR_8 = VAR_4->pos;
 unsigned char VAR_9;
 int VAR_10;

 while (VAR_8 < VAR_4->end) {
  VAR_9 = *VAR_8;
  if (VAR_9 < 0x1F) {

   if (VAR_9 == '\n') {
    FUNC_2 (VAR_3, VAR_2, "unexpected newline",
      &VAR_3->err);
   }
   else {
    FUNC_2 (VAR_3, VAR_2, "unexpected control character",
      &VAR_3->err);
   }
   return 0;
  }
  else if (VAR_9 == '\\') {
   FUNC_1 (VAR_4, VAR_8);
   VAR_9 = *VAR_8;
   if (VAR_8 >= VAR_4->end) {
    FUNC_2 (VAR_3, VAR_2, "unfinished escape character",
      &VAR_3->err);
    return 0;
   }
   else if (FUNC_3 (VAR_9, VAR_0)) {
    if (VAR_9 == 'u') {
     FUNC_1 (VAR_4, VAR_8);
     for (VAR_10 = 0; VAR_10 < 4 && VAR_8 < VAR_4->end; VAR_10 ++) {
      if (!FUNC_0 (*VAR_8)) {
       FUNC_2 (VAR_3, VAR_2, "invalid utf escape",
         &VAR_3->err);
       return 0;
      }
      FUNC_1 (VAR_4, VAR_8);
     }
     if (VAR_8 >= VAR_4->end) {
      FUNC_2 (VAR_3, VAR_2, "unfinished escape character",
        &VAR_3->err);
      return 0;
     }
    }
    else {
     FUNC_1 (VAR_4, VAR_8);
    }
   }
   *VAR_5 = 1;
   *VAR_6 = 1;
   continue;
  }
  else if (VAR_9 == '"') {
   FUNC_1 (VAR_4, VAR_8);
   return 1;
  }
  else if (FUNC_3 (VAR_9, VAR_1)) {
   *VAR_6 = 1;
  }
  else if (VAR_9 == '$') {
   *VAR_7 = 1;
  }
  FUNC_1 (VAR_4, VAR_8);
 }

 FUNC_2 (VAR_3, VAR_2, "no quote at the end of json string",
   &VAR_3->err);
 return 0;
}
