
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_tx_path_flush_cmd {int flush_ctl; int queues_ctl; } ;
struct iwm_softc {int sc_dev; } ;
typedef int flush_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwm_softc*,int ,int ,int,struct iwm_tx_path_flush_cmd*) ;

int
FUNC_4(struct iwm_softc *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 struct iwm_tx_path_flush_cmd VAR_6 = {
  .queues_ctl = FUNC_2(VAR_3),
  .flush_ctl = FUNC_1(VAR_0),
 };

 VAR_5 = FUNC_3(VAR_2, VAR_1, VAR_4,
     sizeof(VAR_6), &VAR_6);
 if (VAR_5)
                FUNC_0(VAR_2->sc_dev,
      "Flushing tx queue failed: %d\n", VAR_5);
 return VAR_5;
}
