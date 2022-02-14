
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_3__ {scalar_t__* lb; size_t cno; size_t ai; size_t offset; size_t len; int insert; int owrite; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef scalar_t__ CHAR_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int *,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(SCR *VAR_3, TEXT *VAR_4)
{
 CHAR_T VAR_5;
 size_t VAR_6, VAR_7;
 u_long VAR_8;
 CHAR_T *VAR_9, *VAR_10;






 VAR_5 = VAR_4->lb[VAR_4->cno];
 VAR_4->lb[VAR_4->cno] = 0;


 for (VAR_7 = VAR_4->cno - 1, VAR_9 = VAR_4->lb + VAR_7, VAR_6 = 0;; --VAR_9, --VAR_7, ++VAR_6) {
  if (*VAR_9 == VAR_0) {
   VAR_10 = VAR_9 + 1;
   break;
  }

  if (VAR_7 == VAR_4->ai || VAR_7 == VAR_4->offset)
   goto nothex;
 }


 if (VAR_6 == 0)
  goto nothex;


 VAR_2 = 0;
 VAR_8 = FUNC_1(VAR_10, ((void*)0), 16);
 if (VAR_2 || VAR_8 > VAR_1) {
nothex: VAR_4->lb[VAR_4->cno] = VAR_5;
  return (0);
 }


 VAR_4->lb[VAR_4->cno] = VAR_5;


 VAR_4->cno -= VAR_6;
 VAR_4->len -= VAR_6;
 VAR_4->lb[VAR_4->cno - 1] = VAR_8;


 if (VAR_4->owrite)
  FUNC_0(VAR_4->lb + VAR_4->cno, VAR_4->lb + VAR_4->cno + VAR_6,
      VAR_4->owrite);


 if (VAR_4->insert)
  FUNC_0(VAR_4->lb + VAR_4->cno + VAR_4->owrite,
      VAR_4->lb + VAR_4->cno + VAR_4->owrite + VAR_6,
      VAR_4->insert);

 return (0);
}
