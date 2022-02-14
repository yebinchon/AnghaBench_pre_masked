
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_buffer_dmat; int amr_buffer64_dmat; } ;
struct amr_command {scalar_t__ ac_data; int ac_length; int ac_datamap; int ac_tag; int ac_dmamap; int ac_dma64map; struct amr_softc* ac_sc; } ;


 scalar_t__ FUNC_0 (struct amr_command*) ;
 int VAR_0 ;
 int FUNC_1 (struct amr_softc*,struct amr_command*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ,int ,struct amr_command*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct amr_command *VAR_2)
{
    struct amr_softc *VAR_3 = VAR_2->ac_sc;
    int VAR_4;

    FUNC_3(2);

    VAR_4 = 0;

    if (FUNC_0(VAR_2)) {
 VAR_2->ac_tag = VAR_3->amr_buffer64_dmat;
 VAR_2->ac_datamap = VAR_2->ac_dma64map;
    } else {
 VAR_2->ac_tag = VAR_3->amr_buffer_dmat;
 VAR_2->ac_datamap = VAR_2->ac_dmamap;
    }


    if (VAR_2->ac_data != 0) {
 if (FUNC_2(VAR_2->ac_tag, VAR_2->ac_datamap, VAR_2->ac_data,
     VAR_2->ac_length, VAR_1, VAR_2, VAR_0) != 0) {
     VAR_4 = 1;
 }
    } else {
 VAR_4 = FUNC_1(VAR_3, VAR_2);
    }

    return (VAR_4);
}
