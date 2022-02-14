
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {int sc_state; int sc_callout; int * sc_sigio; TYPE_1__ sc_selp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int ,void (*) (void*),int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_9)
{

 if (!VAR_4)
  return;
 if (VAR_8 == 0)
  goto done;
 VAR_8 = 0;
 FUNC_6(&VAR_7.sc_selp, VAR_1);
 FUNC_1(&VAR_7.sc_selp.si_note, 0);
 if ((VAR_7.sc_state & VAR_0) && VAR_7.sc_sigio != ((void*)0))
  FUNC_4(&VAR_7.sc_sigio, VAR_3, 0);
 FUNC_3(&VAR_5, VAR_1);
done:
 if (VAR_6 < 1) {
  FUNC_5("syslog wakeup is less than one.  Adjusting to 1.\n");
  VAR_6 = 1;
 }
 FUNC_2(&VAR_7.sc_callout,
     VAR_2 / VAR_6, 0, FUNC_7, ((void*)0), FUNC_0(1));
}
