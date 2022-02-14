
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {scalar_t__ state; int flags; int err; struct ucl_chunk* chunks; } ;
struct ucl_chunk {unsigned char* pos; int remain; unsigned char const* end; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ucl_chunk*,unsigned char const*) ;
 int FUNC_1 (struct ucl_parser*,unsigned char const*,int) ;
 int FUNC_2 (struct ucl_parser*,int ,char*,int *) ;

__attribute__((used)) static bool
FUNC_3 (struct ucl_parser *VAR_4)
{
 struct ucl_chunk *VAR_5 = VAR_4->chunks;
 const unsigned char *VAR_6, *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 bool VAR_9 = 0;

 VAR_6 = VAR_5->pos;

start:
 if (VAR_5->remain > 0 && *VAR_6 == '#') {
  if (VAR_4->state != VAR_3 &&
    VAR_4->state != VAR_2) {
   VAR_7 = VAR_6;

   while (VAR_6 < VAR_5->end) {
    if (*VAR_6 == '\n') {
     if (VAR_4->flags & VAR_1) {
      FUNC_1 (VAR_4, VAR_7, VAR_6 - VAR_7);
      VAR_7 = ((void*)0);
     }

     FUNC_0 (VAR_5, VAR_6);

     goto start;
    }
    FUNC_0 (VAR_5, VAR_6);
   }
  }
 }
 else if (VAR_5->remain >= 2 && *VAR_6 == '/') {
  if (VAR_6[1] == '*') {
   VAR_7 = VAR_6;
   FUNC_0 (VAR_5, VAR_6);
   VAR_8 ++;
   FUNC_0 (VAR_5, VAR_6);

   while (VAR_6 < VAR_5->end) {
    if (*VAR_6 == '"' && *(VAR_6 - 1) != '\\') {
     VAR_9 = !VAR_9;
    }

    if (!VAR_9) {
     if (*VAR_6 == '*') {
      FUNC_0 (VAR_5, VAR_6);
      if (*VAR_6 == '/') {
       VAR_8 --;
       if (VAR_8 == 0) {
        if (VAR_4->flags & VAR_1) {
         FUNC_1 (VAR_4, VAR_7, VAR_6 - VAR_7 + 1);
         VAR_7 = ((void*)0);
        }

        FUNC_0 (VAR_5, VAR_6);
        goto start;
       }
      }
      FUNC_0 (VAR_5, VAR_6);
     }
     else if (VAR_6[0] == '/' && VAR_5->remain >= 2 && VAR_6[1] == '*') {
      VAR_8 ++;
      FUNC_0 (VAR_5, VAR_6);
      FUNC_0 (VAR_5, VAR_6);
      continue;
     }
    }

    FUNC_0 (VAR_5, VAR_6);
   }
   if (VAR_8 != 0) {
    FUNC_2 (VAR_4, VAR_0,
      "unfinished multiline comment", &VAR_4->err);
    return 0;
   }
  }
 }

 if (VAR_7 && VAR_6 > VAR_7 && (VAR_4->flags & VAR_1)) {
  FUNC_1 (VAR_4, VAR_7, VAR_6 - VAR_7);
 }

 return 1;
}
