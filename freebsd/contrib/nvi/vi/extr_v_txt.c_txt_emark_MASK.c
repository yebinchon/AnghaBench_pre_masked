
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {char* lb; size_t owrite; int lno; scalar_t__ len; int insert; int lb_len; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef char CHAR_T ;


 int FUNC_0 (int *,char*,int ,scalar_t__) ;
 char VAR_0 ;
 size_t FUNC_1 (int *,char) ;
 scalar_t__ FUNC_2 (int *,char) ;
 scalar_t__ FUNC_3 (int *,char) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,char*,int ,size_t*,size_t*) ;

__attribute__((used)) static int
FUNC_7(SCR *VAR_2, TEXT *VAR_3, size_t VAR_4)
{
 CHAR_T VAR_5;
 u_char *VAR_6;
 size_t VAR_7, VAR_8, VAR_9;
 CHAR_T *VAR_10;

 VAR_5 = VAR_0;





 VAR_8 = FUNC_1(VAR_2, VAR_5);
 if (VAR_3->lb[VAR_4] == '\t')
  (void)FUNC_6(VAR_2, VAR_3->lb, VAR_3->lno, &VAR_4, &VAR_9);
 else
  VAR_9 = FUNC_1(VAR_2, VAR_3->lb[VAR_4]);






 if (VAR_9 > VAR_8) {
  FUNC_0(VAR_2, VAR_3->lb, VAR_3->lb_len, VAR_3->len + VAR_9);
  VAR_7 = VAR_9 - VAR_8;
  if (VAR_3->insert != 0)
   FUNC_4(VAR_3->lb + VAR_4 + 1 + VAR_7,
       VAR_3->lb + VAR_4 + 1, VAR_3->insert);

  VAR_3->len += VAR_7;
  VAR_3->owrite += VAR_7;
  VAR_10 = VAR_3->lb + VAR_4;
  if (VAR_3->lb[VAR_4] == '\t' ||
      FUNC_3(VAR_2, VAR_3->lb[VAR_4]))
   for (VAR_4 += VAR_7; VAR_7--;)
    *VAR_10++ = ' ';
  else
   for (VAR_6 = (u_char *)
       FUNC_2(VAR_2, VAR_3->lb[VAR_4]),
       VAR_4 += VAR_7; VAR_7--;)
    *VAR_10++ = *VAR_6++;
 }
 VAR_3->lb[VAR_4] = VAR_5;
 return (FUNC_5(VAR_2, VAR_3->lno, VAR_1));
}
