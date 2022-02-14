
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdt_softc {int sc_init_level; int sc_parent_dmat; int sc_buffer_dmat; int sc_gcscratch_dmat; int sc_gcscratch_dmamap; int sc_gcscratch; TYPE_1__* sc_gccbs; int sc_dev; } ;
struct TYPE_2__ {int gc_dmamap; int gc_timeout; int gc_map_flag; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct gdt_softc *VAR_3)
{
    int VAR_4;

    FUNC_0(VAR_0, ("iir_free()\n"));

    switch (VAR_3->sc_init_level) {
      default:
        FUNC_7(VAR_3->sc_dev);
      case 5:
        for (VAR_4 = VAR_1-1; VAR_4 >= 0; VAR_4--)
            if (VAR_3->sc_gccbs[VAR_4].gc_map_flag) {
  FUNC_5(&VAR_3->sc_gccbs[VAR_4].gc_timeout);
                FUNC_2(VAR_3->sc_buffer_dmat,
                                   VAR_3->sc_gccbs[VAR_4].gc_dmamap);
     }
        FUNC_3(VAR_3->sc_gcscratch_dmat, VAR_3->sc_gcscratch_dmamap);
        FUNC_6(VAR_3->sc_gccbs, VAR_2);
      case 4:
        FUNC_4(VAR_3->sc_gcscratch_dmat, VAR_3->sc_gcscratch, VAR_3->sc_gcscratch_dmamap);
      case 3:
        FUNC_1(VAR_3->sc_gcscratch_dmat);
      case 2:
        FUNC_1(VAR_3->sc_buffer_dmat);
      case 1:
        FUNC_1(VAR_3->sc_parent_dmat);
      case 0:
        break;
    }
}
