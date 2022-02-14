
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int func_obj; scalar_t__ dmae_ready; } ;


 int FUNC_0 (struct bxe_softc*,int ) ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct bxe_softc*,int *,int ,int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_3)
{
    VAR_3->dmae_ready = 0;

    FUNC_2(VAR_3,
                        &VAR_3->func_obj,
                        FUNC_0(VAR_3, VAR_2),
                        FUNC_1(VAR_3, VAR_2),
                        FUNC_0(VAR_3, VAR_1),
                        FUNC_1(VAR_3, VAR_1),
                        &VAR_0);
}
