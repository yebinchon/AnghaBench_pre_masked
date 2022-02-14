
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_state; int (* amr_cam_command ) (struct amr_softc*,struct amr_command**) ;} ;
struct amr_command {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amr_softc*,struct amr_command**) ;
 struct amr_command* FUNC_1 (struct amr_softc*) ;
 int FUNC_2 (struct amr_command*) ;
 scalar_t__ FUNC_3 (struct amr_command*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct amr_softc*,struct amr_command**) ;

void
FUNC_6(struct amr_softc *VAR_1)
{
    struct amr_command *VAR_2;


    for (;;) {


 if (VAR_1->amr_state & VAR_0)
     break;


 VAR_2 = FUNC_1(VAR_1);


 if (VAR_2 == ((void*)0))
     (void)FUNC_0(VAR_1, &VAR_2);


 if ((VAR_2 == ((void*)0)) && (VAR_1->amr_cam_command != ((void*)0)))
     VAR_1->amr_cam_command(VAR_1, &VAR_2);


 if (VAR_2 == ((void*)0))
     break;


 if (FUNC_3(VAR_2)) {
     FUNC_4(2, "controller busy, command deferred");
     FUNC_2(VAR_2);
     break;
 }
    }
}
