
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_3__ {scalar_t__ owrite; char* lb; size_t cno; scalar_t__ len; int insert; int lb_len; int lno; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef char CHAR_T ;


 int FUNC_0 (int *,char*,int ,scalar_t__) ;
 size_t FUNC_1 (int *,char) ;
 scalar_t__ FUNC_2 (int *,char) ;
 scalar_t__ FUNC_3 (int *,char) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_6 (int *,char*,int ,size_t*,size_t*) ;

__attribute__((used)) static int
FUNC_7(SCR *VAR_1, TEXT *VAR_2, CHAR_T *VAR_3, u_int VAR_4)
{
 u_char *VAR_5;
 CHAR_T VAR_6;
 size_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 CHAR_T *VAR_12;





 if (FUNC_4(VAR_0)) {
  if (VAR_2->owrite) {
   --VAR_2->owrite;
   VAR_2->lb[VAR_2->cno++] = *VAR_3;
   return (0);
  }
 } else if (VAR_2->owrite) {
  VAR_8 = VAR_2->cno;






  if (*VAR_3 == '\t') {
   VAR_6 = VAR_2->lb[VAR_8];
   VAR_2->lb[VAR_8] = '\t';
   (void)FUNC_6(VAR_1, VAR_2->lb, VAR_2->lno, &VAR_8, &VAR_11);
   VAR_2->lb[VAR_8] = VAR_6;
  } else
   VAR_11 = FUNC_1(VAR_1, *VAR_3);







  for (VAR_9 = 0; VAR_11 != 0 && VAR_2->owrite != 0;) {
   --VAR_2->owrite;

   if (VAR_2->lb[VAR_8] == '\t')
    (void)FUNC_6(VAR_1,
        VAR_2->lb, VAR_2->lno, &VAR_8, &VAR_10);
   else
    VAR_10 = FUNC_1(VAR_1, VAR_2->lb[VAR_8]);

   if (VAR_10 == VAR_11) {
    VAR_11 = 0;
    break;
   }
   if (VAR_10 < VAR_11) {
    ++VAR_9;
    VAR_11 -= VAR_10;
   } else {
    FUNC_0(VAR_1,
        VAR_2->lb, VAR_2->lb_len, VAR_2->len + VAR_10);
    VAR_7 = VAR_10 - VAR_11;
    FUNC_5(VAR_2->lb + VAR_8 + 1 + VAR_7,
        VAR_2->lb + VAR_8 + 1,
        VAR_2->owrite + VAR_2->insert);

    VAR_2->len += VAR_7;
    VAR_2->owrite += VAR_7;
    if (VAR_2->lb[VAR_8] == '\t' ||
       FUNC_3(VAR_1, VAR_2->lb[VAR_8]))
     for (VAR_12 = VAR_2->lb + VAR_8 + 1; VAR_7--;)
      *VAR_12++ = ' ';
    else
     for (VAR_5 = (u_char *)
         FUNC_2(VAR_1, VAR_2->lb[VAR_8]) + VAR_11,
         VAR_12 = VAR_2->lb + VAR_8 + 1; VAR_7--;)
      *VAR_12++ = *VAR_5++;
    VAR_11 = 0;
    break;
   }
  }






  if (VAR_9 != 0 && (VAR_2->len -= VAR_9) != 0)
   FUNC_5(VAR_2->lb + VAR_8, VAR_2->lb + VAR_8 + VAR_9,
       VAR_2->owrite + VAR_2->insert + VAR_9);


  if (VAR_11 == 0) {
   VAR_2->lb[VAR_2->cno++] = *VAR_3;
   return (0);
  }
 }


 FUNC_0(VAR_1, VAR_2->lb, VAR_2->lb_len, VAR_2->len + 1);

 ++VAR_2->len;
 if (VAR_2->insert) {
  if (VAR_2->insert == 1)
   VAR_2->lb[VAR_2->cno + 1] = VAR_2->lb[VAR_2->cno];
  else
   FUNC_5(VAR_2->lb + VAR_2->cno + 1,
       VAR_2->lb + VAR_2->cno, VAR_2->owrite + VAR_2->insert);
 }
 VAR_2->lb[VAR_2->cno++] = *VAR_3;
 return (0);
}
