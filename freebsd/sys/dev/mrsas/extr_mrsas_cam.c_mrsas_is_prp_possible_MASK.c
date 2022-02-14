
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct mrsas_softc {int sge_holes; int nvme_page_size; } ;
struct mrsas_mpt_cmd {int length; struct mrsas_softc* sc; } ;
struct TYPE_3__ {int ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static boolean_t FUNC_2(struct mrsas_mpt_cmd *VAR_1,
 bus_dma_segment_t *VAR_2, int VAR_3)
{
 struct mrsas_softc *VAR_4 = VAR_1->sc;
 int VAR_5;
 u_int32_t VAR_6 = 0;
 bool VAR_7 = 0;
 u_int32_t VAR_8;

 VAR_8 = FUNC_0(VAR_4->nvme_page_size, VAR_0);
 VAR_6 = VAR_1->length;

 if (VAR_6 > (VAR_8 * 5))
  VAR_7 = 1;
 else if ((VAR_6 > (VAR_8 * 4)) &&
  (VAR_6 <= (VAR_8 * 5))) {

  if ((VAR_2[0].ds_len) < (VAR_6 - (VAR_8 * 4)))
   VAR_7 = 1;
 }


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

  if ((VAR_5 != 0) && (VAR_5 != (VAR_3 - 1))) {
    if ((VAR_2[VAR_5].ds_addr % VAR_8) ||
     (VAR_2[VAR_5].ds_len % VAR_8)) {
     VAR_7 = 0;
     FUNC_1(&VAR_4->sge_holes);
     break;
    }
  }


  if ((VAR_3 > 1) && (VAR_5 == 0)) {
    if ((VAR_2[VAR_5].ds_addr + VAR_2[VAR_5].ds_len) % VAR_8) {
     VAR_7 = 0;
     FUNC_1(&VAR_4->sge_holes);
     break;
    }
  }


  if ((VAR_3 > 1) && (VAR_5 == (VAR_3 - 1))) {
    if (VAR_2[VAR_5].ds_addr % VAR_8) {
     VAR_7 = 0;
     FUNC_1(&VAR_4->sge_holes);
     break;
    }
  }

 }

 return VAR_7;
}
