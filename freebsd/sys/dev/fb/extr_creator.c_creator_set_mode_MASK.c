
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
struct creator_softc {int sc_bg_cache; int sc_fg_cache; int sc_fontinc_cache; int sc_fontw_cache; int sc_pmask_cache; scalar_t__ sc_fifo_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct creator_softc*,int ,int ,int) ;
 int FUNC_1 (struct creator_softc*,int) ;
 int FUNC_2 (struct creator_softc*) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_12, int VAR_13)
{
 struct creator_softc *VAR_14;

 VAR_14 = (struct creator_softc *)VAR_12;
 VAR_14->sc_bg_cache = -1;
 VAR_14->sc_fg_cache = -1;
 VAR_14->sc_fontinc_cache = -1;
 VAR_14->sc_fontw_cache = -1;
 VAR_14->sc_pmask_cache = -1;

 FUNC_2(VAR_14);
 VAR_14->sc_fifo_cache = 0;
 FUNC_1(VAR_14, 2);
 FUNC_0(VAR_14, VAR_4, VAR_6, VAR_3 |
     VAR_2 | VAR_0 | VAR_1);
 FUNC_0(VAR_14, VAR_4, VAR_5, VAR_10 | VAR_7 |
     VAR_9 | VAR_11 | VAR_8);
 return (0);
}
