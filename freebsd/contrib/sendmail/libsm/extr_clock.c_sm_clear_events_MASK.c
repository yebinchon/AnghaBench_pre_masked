
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_1__ it_value; TYPE_2__ it_interval; } ;
struct TYPE_8__ {struct TYPE_8__* ev_link; } ;
typedef TYPE_3__ SM_EVENT ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct itimerval*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6()
{
 register SM_EVENT *VAR_4;



 int VAR_5;
 (void) FUNC_2(0);


 if (VAR_2 == ((void*)0))
  return;

 VAR_5 = FUNC_4(VAR_1);


 for (VAR_4 = VAR_2; VAR_4->ev_link != ((void*)0); VAR_4 = VAR_4->ev_link)
  continue;

 FUNC_0();
 VAR_4->ev_link = VAR_3;
 VAR_3 = VAR_2;
 VAR_2 = ((void*)0);
 FUNC_1();


 if (VAR_5 == 0)
  (void) FUNC_5(VAR_1);
}
