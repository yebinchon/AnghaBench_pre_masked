
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_long ;
struct TYPE_4__ {size_t cno; char* lb; size_t ai; size_t offset; int owrite; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef char CHAR_T ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (int *,char) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*,char*,int ) ;

__attribute__((used)) static int
FUNC_4(SCR *VAR_2, TEXT *VAR_3, int VAR_4)
{
 CHAR_T VAR_5;
 u_long VAR_6, VAR_7;
 size_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_7 = FUNC_2(VAR_2, VAR_1);
 VAR_6 = FUNC_2(VAR_2, VAR_0);
 for (VAR_9 = VAR_8 = 0; VAR_8 < VAR_3->cno; ++VAR_8)
  VAR_9 += VAR_3->lb[VAR_8] == '\t' ?
      FUNC_0(VAR_9, VAR_7) : FUNC_1(VAR_2, VAR_3->lb[VAR_8]);

 VAR_11 = VAR_9;
 if (VAR_4)
  VAR_11 += FUNC_0(VAR_11, VAR_6);
 else {
  --VAR_11;
  VAR_11 -= VAR_11 % VAR_6;
 }
 VAR_13 = !VAR_4 || VAR_3->cno == VAR_3->ai + VAR_3->offset;






 for (; VAR_3->cno > VAR_3->offset &&
     (VAR_3->lb[VAR_3->cno - 1] == ' ' || VAR_3->lb[VAR_3->cno - 1] == '\t');
     --VAR_3->cno, ++VAR_3->owrite);
 for (VAR_9 = VAR_8 = 0; VAR_8 < VAR_3->cno; ++VAR_8)
  VAR_9 += VAR_3->lb[VAR_8] == '\t' ?
      FUNC_0(VAR_9, VAR_7) : FUNC_1(VAR_2, VAR_3->lb[VAR_8]);
 if (VAR_9 >= VAR_11)
  VAR_10 = VAR_12 = 0;
 else {
  for (VAR_8 = VAR_9,
      VAR_12 = 0; VAR_8 + FUNC_0(VAR_8, VAR_7) <= VAR_11; ++VAR_12)
   VAR_8 += FUNC_0(VAR_8, VAR_7);
  VAR_10 = VAR_11 - VAR_8;
 }


 if (VAR_13)
  VAR_3->ai = VAR_12 + VAR_10;





 for (VAR_5 = '\t'; VAR_12 > 0; --VAR_12)
  (void)FUNC_3(VAR_2, VAR_3, &VAR_5, 0);
 for (VAR_5 = ' '; VAR_10 > 0; --VAR_10)
  (void)FUNC_3(VAR_2, VAR_3, &VAR_5, 0);
 return (0);
}
