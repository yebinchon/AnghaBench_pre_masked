
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union amr_ccb {int dummy; } amr_ccb ;
struct amr_softc {int amr_maxio; int amr_nextslot; int amr_buffer64_dmat; int amr_buffer_dmat; scalar_t__ amr_ccb_busaddr; scalar_t__ amr_ccb; scalar_t__ amr_sgtable; scalar_t__ amr_sgbusaddr; scalar_t__ amr_sg64table; int amr_list_lock; int amr_cmd_clusters; } ;
struct amr_sgentry {int dummy; } ;
struct amr_sg64entry {int dummy; } ;
struct amr_command_cluster {struct amr_command* acc_command; } ;
struct TYPE_2__ {scalar_t__ sg32; scalar_t__ sg64; } ;
struct amr_command {int ac_slot; int ac_dma64map; int ac_dmamap; scalar_t__ ac_ccb_busaddr; scalar_t__ ac_ccb; TYPE_1__ ac_sg; scalar_t__ ac_sgbusaddr; struct amr_softc* ac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amr_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,struct amr_command_cluster*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct amr_command*) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 struct amr_command_cluster* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct amr_softc *VAR_7)
{
    struct amr_command_cluster *VAR_8;
    struct amr_command *VAR_9;
    int VAR_10, VAR_11;





    if (VAR_7->amr_maxio == 0)
 VAR_7->amr_maxio = 2;

    if (VAR_7->amr_nextslot > VAR_7->amr_maxio)
 return;
    VAR_8 = FUNC_4(VAR_1, VAR_3, VAR_4 | VAR_5);
    if (VAR_8 != ((void*)0)) {
 VAR_11 = VAR_7->amr_nextslot;
 FUNC_5(&VAR_7->amr_list_lock);
 FUNC_1(&VAR_7->amr_cmd_clusters, VAR_8, VAR_6);
 FUNC_6(&VAR_7->amr_list_lock);
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
     VAR_9 = &VAR_8->acc_command[VAR_10];
     VAR_9->ac_sc = VAR_7;
     VAR_9->ac_slot = VAR_11;







     if (FUNC_0(VAR_7)) {
  VAR_9->ac_sgbusaddr = VAR_7->amr_sgbusaddr +
      (VAR_9->ac_slot * VAR_2 * sizeof(struct amr_sg64entry));
         VAR_9->ac_sg.sg64 = VAR_7->amr_sg64table + (VAR_9->ac_slot * VAR_2);
     } else {
  VAR_9->ac_sgbusaddr = VAR_7->amr_sgbusaddr +
      (VAR_9->ac_slot * VAR_2 * sizeof(struct amr_sgentry));
         VAR_9->ac_sg.sg32 = VAR_7->amr_sgtable + (VAR_9->ac_slot * VAR_2);
     }

     VAR_9->ac_ccb = VAR_7->amr_ccb + VAR_9->ac_slot;
     VAR_9->ac_ccb_busaddr = VAR_7->amr_ccb_busaddr +
  (VAR_9->ac_slot * sizeof(union amr_ccb));

     if (FUNC_3(VAR_7->amr_buffer_dmat, 0, &VAR_9->ac_dmamap))
  break;
     if (FUNC_0(VAR_7) &&
  (FUNC_3(VAR_7->amr_buffer64_dmat, 0,&VAR_9->ac_dma64map)))
  break;
     FUNC_2(VAR_9);
     if (++VAR_11 > VAR_7->amr_maxio)
  break;
 }
 VAR_7->amr_nextslot = VAR_11;
    }
}
