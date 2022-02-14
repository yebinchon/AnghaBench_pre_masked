
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct aac_softc {int aac_common_busaddr; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 char* VAR_0 ;
 int FUNC_0 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 struct aac_softc *VAR_5;

 VAR_5 = (struct aac_softc *)VAR_1;
 FUNC_0(VAR_5, VAR_0, "");

 VAR_5->aac_common_busaddr = VAR_2[0].ds_addr;
}
