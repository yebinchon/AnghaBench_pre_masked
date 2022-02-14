
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {scalar_t__ (* amr_submit_command ) (struct amr_command*) ;int amr_state; int amr_buffer_dmat; int amr_buffer64_dmat; } ;
struct amr_command {int ac_flags; int ac_length; int * ac_data; int ac_datamap; int ac_tag; int ac_dmamap; int ac_dma64map; struct amr_softc* ac_sc; } ;
typedef int bus_dmamap_callback_t ;


 scalar_t__ FUNC_0 (struct amr_command*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct amr_command*) ;
 int FUNC_2 (struct amr_command*) ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,int *,struct amr_command*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct amr_command*) ;

__attribute__((used)) static int
FUNC_6(struct amr_command *VAR_7)
{
    bus_dmamap_callback_t *VAR_8;
    struct amr_softc *VAR_9 = VAR_7->ac_sc;

    FUNC_4(3);

    if (FUNC_0(VAR_7)) {
 VAR_7->ac_tag = VAR_9->amr_buffer64_dmat;
 VAR_7->ac_datamap = VAR_7->ac_dma64map;
    } else {
 VAR_7->ac_tag = VAR_9->amr_buffer_dmat;
 VAR_7->ac_datamap = VAR_7->ac_dmamap;
    }

    if (VAR_7->ac_flags & VAR_0)
 VAR_8 = VAR_5;
    else
 VAR_8 = VAR_6;


    if ((VAR_7->ac_flags & VAR_1) == 0 && (VAR_7->ac_data != ((void*)0))) {

 if (FUNC_3(VAR_7->ac_tag, VAR_7->ac_datamap, VAR_7->ac_data,
      VAR_7->ac_length, VAR_8, VAR_7, 0) == VAR_4) {
     VAR_9->amr_state |= VAR_2;
 }
   } else {
     if (VAR_9->amr_submit_command(VAR_7) == VAR_3) {
     FUNC_1(VAR_7);
     FUNC_2(VAR_7);
 }
   }

    return (0);
}
