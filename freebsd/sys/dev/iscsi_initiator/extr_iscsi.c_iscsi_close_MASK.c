
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {TYPE_1__* si_drv2; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ isc_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct cdev*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
     isc_session_t *VAR_8;

     FUNC_1(8);

     FUNC_0(3, "session=%d flag=%x", FUNC_2(VAR_4), VAR_5);

     if(FUNC_2(VAR_4) == VAR_3) {
   return 0;
     }
     VAR_8 = VAR_4->si_drv2;
     if(VAR_8 != ((void*)0)) {
   FUNC_4(3, "sp->flags=%x", VAR_8->flags );
   if(VAR_8->flags & VAR_0)

        FUNC_5(VAR_8, VAR_1, "isc-cls", 60*VAR_2);
   FUNC_3(VAR_8);
     }
     FUNC_0(2, "done");
     return 0;
}
