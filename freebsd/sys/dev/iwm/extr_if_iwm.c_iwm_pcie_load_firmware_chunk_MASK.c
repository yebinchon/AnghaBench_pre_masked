
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_softc {int sc_dev; scalar_t__ sc_fw_chunk_done; int sc_mtx; int sc_fw; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iwm_softc*,int ,int) ;
 int FUNC_6 (int ,char*,int,int) ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct iwm_softc*) ;
 int FUNC_9 (struct iwm_softc*) ;
 int FUNC_10 (int *,int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_11(struct iwm_softc *VAR_13, uint32_t VAR_14,
        bus_addr_t VAR_15, uint32_t VAR_16)
{
 VAR_13->sc_fw_chunk_done = 0;

 if (!FUNC_8(VAR_13))
  return VAR_0;

 FUNC_5(VAR_13, FUNC_2(VAR_4),
     VAR_10);

 FUNC_5(VAR_13, FUNC_0(VAR_4),
     VAR_14);

 FUNC_5(VAR_13, FUNC_3(VAR_4),
     VAR_15 & VAR_2);

 FUNC_5(VAR_13, FUNC_4(VAR_4),
     (FUNC_7(VAR_15)
      << VAR_3) | VAR_16);

 FUNC_5(VAR_13, FUNC_1(VAR_4),
     1 << VAR_6 |
     1 << VAR_5 |
     VAR_7);

 FUNC_5(VAR_13, FUNC_2(VAR_4),
     VAR_9 |
     VAR_11 |
     VAR_8);

 FUNC_9(VAR_13);


 FUNC_10(&VAR_13->sc_fw, &VAR_13->sc_mtx, 0, "iwmfw", VAR_12 * 5);

 if (!VAR_13->sc_fw_chunk_done) {
  FUNC_6(VAR_13->sc_dev,
      "fw chunk addr 0x%x len %d failed to load\n",
      VAR_14, VAR_16);
  return VAR_1;
 }

 return 0;
}
