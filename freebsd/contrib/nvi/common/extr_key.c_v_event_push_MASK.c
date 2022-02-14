
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_12__ {int e_ch; int e_c; int e_value; int e_event; } ;
struct TYPE_11__ {size_t i_next; size_t i_cnt; size_t i_nelem; TYPE_3__* i_event; } ;
struct TYPE_10__ {TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;
typedef TYPE_3__ EVENT ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (size_t,int) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;

int
FUNC_5(
 SCR *VAR_2,
 EVENT *VAR_3,
 CHAR_T *VAR_4,
 size_t VAR_5,
 u_int VAR_6)
{
 EVENT *VAR_7;
 GS *VAR_8;
 size_t VAR_9;


 VAR_8 = VAR_2->gp;
 if (VAR_5 <= VAR_8->i_next ||
     (VAR_8->i_event != ((void*)0) && VAR_8->i_cnt == 0 && VAR_5 <= VAR_8->i_nelem)) {
  if (VAR_8->i_cnt != 0)
   VAR_8->i_next -= VAR_5;
  goto copy;
 }







 VAR_9 = VAR_8->i_cnt + VAR_8->i_next + VAR_5 + 30;
 if (VAR_9 >= VAR_8->i_nelem && FUNC_4(VAR_2, FUNC_3(VAR_9, 64)))
  return (1);
 if (VAR_8->i_cnt)
  FUNC_0(VAR_8->i_event + VAR_8->i_next,
      VAR_8->i_event + 30 + VAR_5, VAR_8->i_cnt);
 VAR_8->i_next = 30;


copy: VAR_8->i_cnt += VAR_5;
 for (VAR_7 = VAR_8->i_event + VAR_8->i_next; VAR_5--; ++VAR_7) {
  if (VAR_3 != ((void*)0))
   *VAR_7 = *VAR_3++;
  else {
   VAR_7->e_event = VAR_0;
   VAR_7->e_c = *VAR_4++;
   VAR_7->e_value = FUNC_2(VAR_2, VAR_7->e_c);
   FUNC_1(&VAR_7->e_ch, VAR_6);
  }
 }
 return (0);
}
