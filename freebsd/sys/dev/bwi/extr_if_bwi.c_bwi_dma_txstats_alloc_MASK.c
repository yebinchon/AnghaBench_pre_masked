
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_txstats_data {void* stats_ring; void* stats; int stats_ctrl_base; int * stats_dtag; int stats_dmap; int stats_paddr; int * stats_ring_dtag; int stats_ring_dmap; int stats_ring_paddr; } ;
struct bwi_txstats {int dummy; } ;
struct bwi_softc {int sc_dev; int sc_parent_dtag; struct bwi_txstats_data* sc_txstats; } ;
typedef int bus_size_t ;


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
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,void*,int,int ,int *,int ) ;
 int FUNC_3 (int *,void**,int,int *) ;
 int FUNC_4 (int *,void*,int ) ;
 int VAR_11 ;
 int FUNC_5 (int ,char*) ;
 struct bwi_txstats_data* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int
FUNC_8(struct bwi_softc *VAR_12, uint32_t VAR_13,
        bus_size_t VAR_14)
{
 struct bwi_txstats_data *VAR_15;
 bus_size_t VAR_16;
 int VAR_17;

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_8, VAR_9 | VAR_10);
 if (VAR_15 == ((void*)0)) {
  FUNC_5(VAR_12->sc_dev, "can't allocate txstats data\n");
  return VAR_7;
 }
 VAR_12->sc_txstats = VAR_15;




 VAR_16 = FUNC_7(VAR_14 * VAR_6, VAR_5);

 VAR_17 = FUNC_0(VAR_12->sc_parent_dtag,
    VAR_5,
    0,
    VAR_3,
    VAR_3,
    ((void*)0), ((void*)0),
    VAR_16,
    1,
    VAR_16,
    0,
    ((void*)0), ((void*)0),
    &VAR_15->stats_ring_dtag);
 if (VAR_17) {
  FUNC_5(VAR_12->sc_dev, "can't create txstats ring "
         "DMA tag\n");
  return VAR_17;
 }

 VAR_17 = FUNC_3(VAR_15->stats_ring_dtag, &VAR_15->stats_ring,
     VAR_1 | VAR_2,
     &VAR_15->stats_ring_dmap);
 if (VAR_17) {
  FUNC_5(VAR_12->sc_dev, "can't allocate txstats ring "
         "DMA mem\n");
  FUNC_1(VAR_15->stats_ring_dtag);
  VAR_15->stats_ring_dtag = ((void*)0);
  return VAR_17;
 }

 VAR_17 = FUNC_2(VAR_15->stats_ring_dtag, VAR_15->stats_ring_dmap,
    VAR_15->stats_ring, VAR_16,
    VAR_11, &VAR_15->stats_ring_paddr,
    VAR_0);
 if (VAR_17) {
  FUNC_5(VAR_12->sc_dev, "can't load txstats ring DMA mem\n");
  FUNC_4(VAR_15->stats_ring_dtag, VAR_15->stats_ring,
    VAR_15->stats_ring_dmap);
  FUNC_1(VAR_15->stats_ring_dtag);
  VAR_15->stats_ring_dtag = ((void*)0);
  return VAR_17;
 }




 VAR_16 = FUNC_7(sizeof(struct bwi_txstats) * VAR_6,
      VAR_4);

 VAR_17 = FUNC_0(VAR_12->sc_parent_dtag,
    VAR_4,
    0,
    VAR_3,
    VAR_3,
    ((void*)0), ((void*)0),
    VAR_16,
    1,
    VAR_16,
    0,
    ((void*)0), ((void*)0),
    &VAR_15->stats_dtag);
 if (VAR_17) {
  FUNC_5(VAR_12->sc_dev, "can't create txstats DMA tag\n");
  return VAR_17;
 }

 VAR_17 = FUNC_3(VAR_15->stats_dtag, (void **)&VAR_15->stats,
     VAR_1 | VAR_2,
     &VAR_15->stats_dmap);
 if (VAR_17) {
  FUNC_5(VAR_12->sc_dev, "can't allocate txstats DMA mem\n");
  FUNC_1(VAR_15->stats_dtag);
  VAR_15->stats_dtag = ((void*)0);
  return VAR_17;
 }

 VAR_17 = FUNC_2(VAR_15->stats_dtag, VAR_15->stats_dmap, VAR_15->stats,
    VAR_16, VAR_11, &VAR_15->stats_paddr,
    VAR_0);
 if (VAR_17) {
  FUNC_5(VAR_12->sc_dev, "can't load txstats DMA mem\n");
  FUNC_4(VAR_15->stats_dtag, VAR_15->stats, VAR_15->stats_dmap);
  FUNC_1(VAR_15->stats_dtag);
  VAR_15->stats_dtag = ((void*)0);
  return VAR_17;
 }

 VAR_15->stats_ctrl_base = VAR_13;
 return 0;
}
