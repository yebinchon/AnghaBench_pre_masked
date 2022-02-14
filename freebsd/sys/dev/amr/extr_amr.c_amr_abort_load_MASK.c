
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_list_lock; } ;
struct amr_command {int ac_status; struct amr_softc* ac_sc; } ;
typedef int ac_qhead_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amr_softc*,int *) ;
 int FUNC_1 (struct amr_command*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct amr_command *VAR_2)
{
    ac_qhead_t VAR_3;
    struct amr_softc *VAR_4 = VAR_2->ac_sc;

    FUNC_3(&VAR_4->amr_list_lock, VAR_1);

    VAR_2->ac_status = VAR_0;
    FUNC_2(&VAR_3);
    FUNC_1(VAR_2, &VAR_3);

    FUNC_5(&VAR_4->amr_list_lock);
    FUNC_0(VAR_4, &VAR_3);
    FUNC_4(&VAR_4->amr_list_lock);
}
