
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int * mm_res; int mm_rid; int dev; int * parent_dmat; int * buffer_dmat; scalar_t__ hcbs; int hcb_cnt; scalar_t__ sim; scalar_t__ bus_path; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct pvscsi_softc*,int ) ;
 int FUNC_7 (struct pvscsi_softc*) ;
 int FUNC_8 (struct pvscsi_softc*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct pvscsi_softc *VAR_4)
{

 if (VAR_4->sim) {
  int32_t VAR_5;

  if (VAR_4->bus_path) {
   FUNC_10(VAR_4->bus_path);
  }

  VAR_5 = FUNC_9(FUNC_3(VAR_4->sim));
  if (VAR_5 != VAR_0) {
   FUNC_4(VAR_4->dev,
       "Error deregistering bus, status=%d\n", VAR_5);
  }

  FUNC_2(VAR_4->sim, VAR_3);
 }

 FUNC_6(VAR_4, VAR_4->hcb_cnt);

 if (VAR_4->hcbs) {
  FUNC_5(VAR_4->hcbs, VAR_1);
 }

 FUNC_8(VAR_4);

 FUNC_7(VAR_4);

 if (VAR_4->buffer_dmat != ((void*)0)) {
  FUNC_0(VAR_4->buffer_dmat);
 }

 if (VAR_4->parent_dmat != ((void*)0)) {
  FUNC_0(VAR_4->parent_dmat);
 }

 if (VAR_4->mm_res != ((void*)0)) {
  FUNC_1(VAR_4->dev, VAR_2, VAR_4->mm_rid,
      VAR_4->mm_res);
 }
}
