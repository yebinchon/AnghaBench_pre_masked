
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ e_event; int e_len; scalar_t__ e_flags; int e_c; int e_value; int * e_csp; } ;
struct TYPE_9__ {size_t i_nelem; size_t i_next; size_t i_cnt; TYPE_3__* i_event; } ;
struct TYPE_8__ {TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;
typedef TYPE_3__ EVENT ;
typedef int CHAR_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(
 SCR *VAR_2,
 EVENT *VAR_3)
{
 CHAR_T *VAR_4;
 EVENT *VAR_5;
 GS *VAR_6;
 size_t VAR_7;


 VAR_7 = VAR_3->e_event == VAR_1 ? VAR_3->e_len : 1;
 VAR_6 = VAR_2->gp;
 if (VAR_6->i_event == ((void*)0) ||
     VAR_7 > VAR_6->i_nelem - (VAR_6->i_next + VAR_6->i_cnt))
  FUNC_2(VAR_2, FUNC_1(VAR_7, 64));
 VAR_5 = VAR_6->i_event + VAR_6->i_next + VAR_6->i_cnt;
 VAR_6->i_cnt += VAR_7;


 if (VAR_3->e_event == VAR_1)
  for (VAR_4 = VAR_3->e_csp; VAR_7--; ++VAR_5) {
   VAR_5->e_event = VAR_0;
   VAR_5->e_c = *VAR_4++;
   VAR_5->e_value = FUNC_0(VAR_2, VAR_5->e_c);
   VAR_5->e_flags = 0;
  }
 else
  *VAR_5 = *VAR_3;
 return (0);
}
