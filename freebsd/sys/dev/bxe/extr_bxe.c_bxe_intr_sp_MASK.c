
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int sp_tq_task; int sp_tq; int igu_dsb_id; } ;


 int FUNC_0 (struct bxe_softc*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
    struct bxe_softc *VAR_5 = (struct bxe_softc *)VAR_4;

    FUNC_0(VAR_5, (VAR_0 | VAR_1), "---> SP INTR <---\n");


    FUNC_1(VAR_5, VAR_5->igu_dsb_id, VAR_3, 0, VAR_2, 0);


    FUNC_2(VAR_5->sp_tq, &VAR_5->sp_tq_task);
}
