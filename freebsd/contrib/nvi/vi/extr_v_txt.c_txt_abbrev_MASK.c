
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VI_PRIVATE ;
struct TYPE_6__ {int olen; int * output; } ;
struct TYPE_5__ {int cno; int offset; size_t ai; int owrite; int len; int insert; int * lb; } ;
typedef TYPE_1__ TEXT ;
typedef TYPE_2__ SEQ ;
typedef int SCR ;
typedef int CHAR_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int *,int *,int *,int *,size_t,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int,int ) ;

__attribute__((used)) static int
FUNC_7(SCR *VAR_2, TEXT *VAR_3, CHAR_T *VAR_4, int VAR_5, int *VAR_6, int *VAR_7)
{
 VI_PRIVATE *VAR_8;
 CHAR_T VAR_9, *VAR_10;
 SEQ *VAR_11;
 size_t VAR_12, VAR_13;


 *VAR_6 = 0;
 if (VAR_3->cno == VAR_3->offset)
  return (0);

 VAR_8 = FUNC_1(VAR_2);
 VAR_13 = VAR_3->cno - 1;
 VAR_10 = VAR_3->lb + VAR_13;
 VAR_12 = 1;
 if (VAR_13 == VAR_3->offset || FUNC_4(VAR_10[-1]))
  goto search;
 if (FUNC_3(VAR_10[-1]))
  for (;;) {
   --VAR_13; --VAR_10; ++VAR_12;
   if (VAR_13 == VAR_3->offset || !FUNC_3(VAR_10[-1]))
    break;
  }
 else
  for (;;) {
   --VAR_13; --VAR_10; ++VAR_12;
   if (VAR_13 == VAR_3->offset ||
       FUNC_3(VAR_10[-1]) || FUNC_4(VAR_10[-1]))
    break;
  }
search: if (VAR_5)
  if (VAR_13 == VAR_3->ai || VAR_13 == VAR_3->offset)
   if (FUNC_2(VAR_10, VAR_12)) {
    *VAR_7 = 1;
    return (0);
   } else
    *VAR_7 = 0;
  else
   if (*VAR_7)
    return (0);


 if ((VAR_11 = FUNC_5(VAR_2, ((void*)0), ((void*)0), VAR_10, VAR_12, VAR_1, ((void*)0))) == ((void*)0))
  return (0);
 VAR_9 = *VAR_4;
 if (FUNC_6(VAR_2, ((void*)0), &VAR_9, 1, VAR_0))
  return (1);
 if (FUNC_6(VAR_2, ((void*)0), VAR_11->output, VAR_11->olen, VAR_0))
  return (1);
 VAR_3->cno -= VAR_12;
 if (VAR_11->olen >= VAR_12)
  VAR_3->owrite += VAR_12;
 else {
  if (VAR_3->insert)
   FUNC_0(VAR_3->lb + VAR_3->cno + VAR_11->olen,
       VAR_3->lb + VAR_3->cno + VAR_3->owrite + VAR_12, VAR_3->insert);
  VAR_3->owrite += VAR_11->olen;
  VAR_3->len -= VAR_12 - VAR_11->olen;
 }
 *VAR_6 = VAR_12;
 return (0);
}
