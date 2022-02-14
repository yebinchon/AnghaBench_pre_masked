
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_buffer_dmat; int twe_immediate_map; int twe_immediate_dmat; int twe_cmdmap; int twe_cmd_dmat; } ;
struct twe_request {int tr_flags; int * tr_realdata; int * tr_data; int tr_dmamap; int tr_length; struct twe_softc* tr_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct twe_softc*) ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(struct twe_request *VAR_8)
{
    struct twe_softc *VAR_9 = VAR_8->tr_sc;

    FUNC_4(4);

    if (!VAR_7)
 FUNC_0(VAR_9);
    FUNC_2(VAR_9->twe_cmd_dmat, VAR_9->twe_cmdmap, VAR_1);




    if (VAR_8->tr_data != ((void*)0)) {
 if (VAR_8->tr_flags & VAR_3) {
     if (VAR_8->tr_flags & VAR_5) {
  FUNC_2(VAR_9->twe_immediate_dmat, VAR_9->twe_immediate_map,
    VAR_0);
     } else {
  FUNC_2(VAR_9->twe_buffer_dmat, VAR_8->tr_dmamap,
    VAR_0);
     }


     if (VAR_8->tr_flags & VAR_2)
  FUNC_1(VAR_8->tr_data, VAR_8->tr_realdata, VAR_8->tr_length);
 }
 if (VAR_8->tr_flags & VAR_4) {
     if (VAR_8->tr_flags & VAR_5) {
  FUNC_2(VAR_9->twe_immediate_dmat, VAR_9->twe_immediate_map,
    VAR_1);
     } else {
  FUNC_2(VAR_9->twe_buffer_dmat, VAR_8->tr_dmamap,
    VAR_1);
     }
 }

 if (VAR_8->tr_flags & VAR_5) {
     FUNC_3(VAR_9->twe_immediate_dmat, VAR_9->twe_immediate_map);
 } else {
     FUNC_3(VAR_9->twe_buffer_dmat, VAR_8->tr_dmamap);
 }
    }


    if (VAR_8->tr_flags & VAR_2) {
 FUNC_5(VAR_8->tr_data, VAR_6);
 VAR_8->tr_data = VAR_8->tr_realdata;
    }
}
