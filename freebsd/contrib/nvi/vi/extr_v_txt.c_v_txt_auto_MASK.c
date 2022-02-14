
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_4__ {size_t ai; size_t len; int * lb; int lb_len; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef int CHAR_T ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,size_t) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ,int **,size_t*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(SCR *VAR_1, recno_t VAR_2, TEXT *VAR_3, size_t VAR_4, TEXT *VAR_5)
{
 size_t VAR_6;
 CHAR_T *VAR_7, *VAR_8;

 if (VAR_3 == ((void*)0)) {





  if (VAR_2 == 0) {
   VAR_5->ai = 0;
   return (0);
  }
  if (FUNC_2(VAR_1, VAR_2, VAR_0, &VAR_8, &VAR_4))
   return (1);
 } else
  VAR_8 = VAR_3->lb;


 for (VAR_7 = VAR_8; VAR_4 > 0; ++VAR_7, --VAR_4)
  if (!FUNC_3(*VAR_7))
   break;


 if ((VAR_6 = (VAR_7 - VAR_8)) == 0)
  return (0);


 FUNC_0(VAR_1, VAR_5->lb, VAR_5->lb_len, VAR_5->len + VAR_6);


 if (VAR_5->len != 0)
  FUNC_1(VAR_5->lb + VAR_6, VAR_5->lb, VAR_5->len);
 VAR_5->len += VAR_6;


 FUNC_1(VAR_5->lb, VAR_8, VAR_6);


 VAR_5->ai = VAR_6;
 return (0);
}
