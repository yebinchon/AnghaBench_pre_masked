
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int VI_PRIVATE ;
struct TYPE_4__ {int cno; size_t ai; size_t offset; int insert; int owrite; int len; int * lb; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(SCR *VAR_1, TEXT *VAR_2, TEXT *VAR_3, int *VAR_4, u_int32_t VAR_5)
{
 VI_PRIVATE *VAR_6;
 size_t VAR_7, VAR_8;
 CHAR_T *VAR_9, *VAR_10;


 for (VAR_8 = VAR_2->cno - 1, VAR_9 = VAR_2->lb + VAR_8, VAR_7 = 0;; --VAR_8, --VAR_9, ++VAR_7) {
  if (FUNC_2(*VAR_9)) {
   VAR_10 = VAR_9 + 1;
   break;
  }
  if (VAR_8 == VAR_2->ai || VAR_8 == VAR_2->offset) {
   *VAR_4 = 0;
   return (0);
  }
 }
 VAR_6 = FUNC_1(VAR_1);
 VAR_3->lb = VAR_9 + 1;
 VAR_3->offset = VAR_7;
 VAR_3->insert = FUNC_0(VAR_0) ? VAR_2->insert - 1 : VAR_2->insert;
 VAR_3->owrite = VAR_2->owrite;


 VAR_2->cno -= VAR_7;
 if (FUNC_0(VAR_0)) {
  VAR_2->len -= VAR_7 + VAR_2->owrite + (VAR_2->insert - 1);
  VAR_2->insert = 1;
 } else {
  VAR_2->len -= VAR_7 + VAR_2->owrite + VAR_2->insert;
  VAR_2->insert = 0;
 }
 VAR_2->owrite = 0;





 for (;; --VAR_9, --VAR_8) {
  if (!FUNC_2(*VAR_9))
   break;
  --VAR_2->cno;
  --VAR_2->len;
  if (VAR_8 == VAR_2->ai || VAR_8 == VAR_2->offset)
   break;
 }
 *VAR_4 = 1;
 return (0);
}
