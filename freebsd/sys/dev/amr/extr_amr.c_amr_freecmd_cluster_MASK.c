
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amr_softc {int amr_buffer64_dmat; int amr_buffer_dmat; } ;
struct amr_command_cluster {TYPE_1__* acc_command; } ;
struct TYPE_2__ {int ac_dma64map; int ac_dmamap; struct amr_softc* ac_sc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amr_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct amr_command_cluster*,int ) ;

__attribute__((used)) static void
FUNC_3(struct amr_command_cluster *VAR_2)
{
    struct amr_softc *VAR_3 = VAR_2->acc_command[0].ac_sc;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
 if (VAR_2->acc_command[VAR_4].ac_sc == ((void*)0))
     break;
 FUNC_1(VAR_3->amr_buffer_dmat, VAR_2->acc_command[VAR_4].ac_dmamap);
 if (FUNC_0(VAR_3))
  FUNC_1(VAR_3->amr_buffer64_dmat, VAR_2->acc_command[VAR_4].ac_dma64map);
    }
    FUNC_2(VAR_2, VAR_1);
}
