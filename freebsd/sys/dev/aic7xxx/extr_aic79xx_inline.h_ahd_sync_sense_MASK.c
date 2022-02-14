
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {int sense_busaddr; TYPE_2__* sense_map; } ;
struct TYPE_3__ {int sense_dmat; } ;
struct ahd_softc {TYPE_1__ scb_data; } ;
struct TYPE_4__ {int dmamap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,int ,int ,int ,int ,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct ahd_softc *VAR_1, struct scb *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1, VAR_1->scb_data.sense_dmat,
   VAR_2->sense_map->dmamap,
             VAR_2->sense_busaddr,
          VAR_0, VAR_3);
}
