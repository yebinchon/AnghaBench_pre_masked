
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_list_lock; } ;
struct amr_command {int ac_flags; int * ac_complete; struct amr_softc* ac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amr_command*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct amr_command*,int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct amr_command *VAR_4)
{
    int VAR_5 = 0;
    struct amr_softc *VAR_6 = VAR_4->ac_sc;

    FUNC_1(1);

    VAR_4->ac_complete = ((void*)0);
    VAR_4->ac_flags |= VAR_1;
    if ((VAR_5 = FUNC_0(VAR_4)) != 0) {
 return(VAR_5);
    }

    while ((VAR_4->ac_flags & VAR_0) && (VAR_5 != VAR_2)) {
 VAR_5 = FUNC_2(VAR_4,&VAR_6->amr_list_lock, VAR_3, "amrwcmd", 0);
    }

    return(VAR_5);
}
