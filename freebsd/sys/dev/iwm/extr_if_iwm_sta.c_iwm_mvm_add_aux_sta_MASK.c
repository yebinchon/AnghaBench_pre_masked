
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tfd_queue_msk; int sta_id; } ;
struct iwm_softc {TYPE_1__ sc_aux_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwm_softc*,int ,int,int ) ;
 int FUNC_1 (struct iwm_softc*,TYPE_1__*,int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int
FUNC_3(struct iwm_softc *VAR_5)
{
 int VAR_6;

 VAR_5->sc_aux_sta.sta_id = VAR_0;
 VAR_5->sc_aux_sta.tfd_queue_msk = (1 << VAR_2);


 VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_2,
     VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5, &VAR_5->sc_aux_sta, ((void*)0),
      VAR_1, 0);

 if (VAR_6) {
  FUNC_2(&VAR_5->sc_aux_sta, 0, sizeof(VAR_5->sc_aux_sta));
  VAR_5->sc_aux_sta.sta_id = VAR_3;
 }
 return VAR_6;
}
