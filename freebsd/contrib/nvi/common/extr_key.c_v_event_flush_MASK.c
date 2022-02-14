
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {scalar_t__ i_cnt; size_t i_next; TYPE_1__* i_event; } ;
struct TYPE_6__ {TYPE_3__* gp; } ;
struct TYPE_5__ {int e_ch; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;

int
FUNC_2(
 SCR *VAR_0,
 u_int VAR_1)
{
 GS *VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_0->gp; VAR_2->i_cnt != 0 &&
     FUNC_0(&VAR_2->i_event[VAR_2->i_next].e_ch, VAR_1); VAR_3 = 1)
  FUNC_1(1);
 return (VAR_3);
}
