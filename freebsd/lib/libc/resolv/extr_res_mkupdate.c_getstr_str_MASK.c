
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_char ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, int VAR_2, u_char **VAR_3, u_char *VAR_4) {
        char *VAR_5;
        int VAR_6, VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;

 for (VAR_5 = VAR_1; *VAR_3 <= VAR_4; ) {
                if ((VAR_6 = **VAR_3) == '\0')
   break;

  if ((VAR_5 == VAR_1) && !VAR_9 && FUNC_0(VAR_6)) {
   (*VAR_3)++;
   continue;
  }

  switch (VAR_6) {
  case '\\':
   if (!VAR_10) {
    VAR_10 = 1;
    VAR_11 = 0;
    VAR_7 = 0;
    (*VAR_3)++;
    continue;
   }
   goto do_escape;
  case '"':
   if (!VAR_10) {
    VAR_8 = !VAR_8;
    VAR_9 = 1;
    (*VAR_3)++;
    continue;
   }

  default:
  do_escape:
   if (VAR_10) {
    switch (VAR_6) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
     VAR_7 = VAR_7 * 10 +
      (FUNC_1(VAR_0, VAR_6) - VAR_0);

     if (++VAR_11 == 3) {
      VAR_6 = VAR_7 &0xff;
      break;
     }
     (*VAR_3)++;
     continue;
    }
    VAR_10 = 0;
   } else if (!VAR_8 && FUNC_0(VAR_6))
    goto done;
   if (VAR_5 >= VAR_1+VAR_2-1)
    goto done;
   *VAR_5++ = (u_char)VAR_6;
   (*VAR_3)++;
  }
 }
 done:
 *VAR_5 = '\0';
 return ((VAR_5 == VAR_1)? (VAR_9? 0: -1): (VAR_5 - VAR_1));
}
