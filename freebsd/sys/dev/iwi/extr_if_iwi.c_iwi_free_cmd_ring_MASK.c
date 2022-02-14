
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int dummy; } ;
struct iwi_cmd_ring {int * desc_dmat; int desc_map; int * desc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct iwi_softc *VAR_1, struct iwi_cmd_ring *VAR_2)
{
 if (VAR_2->desc != ((void*)0)) {
  FUNC_1(VAR_2->desc_dmat, VAR_2->desc_map,
      VAR_0);
  FUNC_2(VAR_2->desc_dmat, VAR_2->desc_map);
  FUNC_3(VAR_2->desc_dmat, VAR_2->desc, VAR_2->desc_map);
 }

 if (VAR_2->desc_dmat != ((void*)0))
  FUNC_0(VAR_2->desc_dmat);
}
