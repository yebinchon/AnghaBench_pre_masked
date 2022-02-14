
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t repl_len; int repl; } ;
typedef TYPE_1__ SCR ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_1__*,int*,size_t,size_t) ;
 int FUNC_1 (int*,int ,size_t) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int
FUNC_3(SCR *VAR_5, CHAR_T **VAR_6, size_t *VAR_7, int *VAR_8)
{
 size_t VAR_9, VAR_10, VAR_11;
 int VAR_12;
 CHAR_T *VAR_13, *VAR_14, *VAR_15;







 VAR_12 = 0;
 for (VAR_14 = *VAR_6, VAR_10 = *VAR_7, VAR_11 = 0; VAR_10 > 0; ++VAR_14, --VAR_10)
  switch (*VAR_14) {
  case '\\':
   if (VAR_10 > 1) {
    --VAR_10;
    switch (*++VAR_14) {
    case '<':
     VAR_12 = 1;
     VAR_11 += VAR_2 + 1;
     break;
    case '>':
     VAR_12 = 1;
     VAR_11 += VAR_4 + 1;
     break;
    case '~':
     if (!FUNC_2(VAR_5, VAR_0)) {
      VAR_12 = 1;
      VAR_11 += VAR_5->repl_len;
     }
     break;
    case '.':
    case '[':
    case '*':
     if (!FUNC_2(VAR_5, VAR_0)) {
      VAR_12 = 1;
      VAR_11 += 1;
     }
     break;
    default:
     VAR_11 += 2;
    }
   } else
    VAR_11 += 1;
   break;
  case '~':
   if (FUNC_2(VAR_5, VAR_0)) {
    VAR_12 = 1;
    VAR_11 += VAR_5->repl_len;
   }
   break;
  case '.':
  case '[':
  case '*':
   if (!FUNC_2(VAR_5, VAR_0)) {
    VAR_12 = 1;
    VAR_11 += 2;
   }
   break;
  default:
   VAR_11 += 1;
   break;
  }

 if (!VAR_12) {
  *VAR_8 = 0;
  return (0);
 }


 *VAR_8 = 1;
 FUNC_0(VAR_5, VAR_13, VAR_9, VAR_11);

 for (VAR_14 = *VAR_6, VAR_10 = *VAR_7, VAR_15 = VAR_13; VAR_10 > 0; ++VAR_14, --VAR_10)
  switch (*VAR_14) {
  case '\\':
   if (VAR_10 > 1) {
    --VAR_10;
    switch (*++VAR_14) {
    case '<':
     FUNC_1(VAR_15,
         VAR_1, VAR_2);
     VAR_15 += VAR_2;
     break;
    case '>':
     FUNC_1(VAR_15,
         VAR_3, VAR_4);
     VAR_15 += VAR_4;
     break;
    case '~':
     if (FUNC_2(VAR_5, VAR_0))
      *VAR_15++ = '~';
     else {
      FUNC_1(VAR_15,
          VAR_5->repl, VAR_5->repl_len);
      VAR_15 += VAR_5->repl_len;
     }
     break;
    case '.':
    case '[':
    case '*':
     if (FUNC_2(VAR_5, VAR_0))
      *VAR_15++ = '\\';
     *VAR_15++ = *VAR_14;
     break;
    default:
     *VAR_15++ = '\\';
     *VAR_15++ = *VAR_14;
    }
   } else
    *VAR_15++ = '\\';
   break;
  case '~':
   if (FUNC_2(VAR_5, VAR_0)) {
    FUNC_1(VAR_15, VAR_5->repl, VAR_5->repl_len);
    VAR_15 += VAR_5->repl_len;
   } else
    *VAR_15++ = '~';
   break;
  case '.':
  case '[':
  case '*':
   if (!FUNC_2(VAR_5, VAR_0))
    *VAR_15++ = '\\';
   *VAR_15++ = *VAR_14;
   break;
  default:
   *VAR_15++ = *VAR_14;
   break;
  }

 *VAR_6 = VAR_13;
 *VAR_7 = VAR_15 - VAR_13;
 return (0);
}
