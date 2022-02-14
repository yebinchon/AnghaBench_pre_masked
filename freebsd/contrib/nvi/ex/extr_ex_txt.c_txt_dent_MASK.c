
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_long ;
struct TYPE_3__ {size_t len; char* lb; size_t ai; int lb_len; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;


 int FUNC_0 (int *,char*,int ,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(SCR *VAR_2, TEXT *VAR_3)
{
 u_long VAR_4, VAR_5;
 size_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5 = FUNC_2(VAR_2, VAR_1);
 VAR_4 = FUNC_2(VAR_2, VAR_0);


 for (VAR_7 = VAR_8 = 0; VAR_7 < VAR_3->len; ++VAR_7)
  if (VAR_3->lb[VAR_7] == '\t')
   VAR_8 += FUNC_1(VAR_8, VAR_5);
  else
   ++VAR_8;


 VAR_6 = VAR_8--;
 VAR_8 -= VAR_8 % VAR_4;
 for (VAR_6 = 0, VAR_10 = 0; VAR_6 + FUNC_1(VAR_6, VAR_5) <= VAR_8; ++VAR_10)
  VAR_6 += FUNC_1(VAR_6, VAR_5);
 VAR_9 = VAR_8 - VAR_6;


 FUNC_0(VAR_2, VAR_3->lb, VAR_3->lb_len, VAR_10 + VAR_9 + 1);


 VAR_3->ai = VAR_10 + VAR_9;


 for (VAR_3->len = 0; VAR_10 > 0; --VAR_10)
  VAR_3->lb[VAR_3->len++] = '\t';
 for (; VAR_9 > 0; --VAR_9)
  VAR_3->lb[VAR_3->len++] = ' ';
 return (0);
}
