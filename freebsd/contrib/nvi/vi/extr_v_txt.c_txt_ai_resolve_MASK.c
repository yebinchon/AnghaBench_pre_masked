
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_long ;
struct TYPE_3__ {size_t len; size_t ai; size_t cno; char* lb; scalar_t__ offset; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef char CHAR_T ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int VAR_0 ;
 size_t FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(SCR *VAR_1, TEXT *VAR_2, int *VAR_3)
{
 u_long VAR_4;
 int VAR_5;
 size_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 CHAR_T *VAR_14;

 *VAR_3 = 0;





 if (!VAR_2->len || VAR_2->offset || !VAR_2->ai)
  return;





 if (VAR_2->len <= VAR_2->ai) {
  VAR_2->ai = VAR_2->cno = VAR_2->len = 0;
  return;
 }






 VAR_4 = FUNC_2(VAR_1, VAR_0);


 for (VAR_14 = VAR_2->lb, VAR_10 = 0, VAR_7 = VAR_2->len,
     VAR_11 = VAR_12 = 0; VAR_7-- && FUNC_3(*VAR_14); ++VAR_14)
  if (*VAR_14 == '\t') {
   if (VAR_11)
    VAR_12 = 1;
   VAR_10 += FUNC_0(VAR_10, VAR_4);
  } else {
   ++VAR_11;
   ++VAR_10;
  }





 if (!VAR_11 || (!VAR_12 && VAR_11 < VAR_4))
  return;


 for (VAR_6 = 0, VAR_13 = 0; VAR_6 + FUNC_0(VAR_6, VAR_4) <= VAR_10; ++VAR_13)
  VAR_6 += FUNC_0(VAR_6, VAR_4);
 VAR_11 = VAR_10 - VAR_6;





 VAR_9 = VAR_14 - VAR_2->lb;
 VAR_8 = VAR_11 + VAR_13;
 if (VAR_9 == VAR_8)
  return;


 VAR_5 = VAR_9 - VAR_8;
 FUNC_1(VAR_14 - VAR_5, VAR_14, VAR_2->len - VAR_9);
 VAR_2->len -= VAR_5;
 VAR_2->cno -= VAR_5;


 for (VAR_14 = VAR_2->lb; VAR_13--;)
  *VAR_14++ = '\t';
 while (VAR_11--)
  *VAR_14++ = ' ';
 *VAR_3 = 1;
}
