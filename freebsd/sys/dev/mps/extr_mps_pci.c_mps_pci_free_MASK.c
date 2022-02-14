
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {int mps_flags; int * mps_regs_resource; int mps_regs_rid; int mps_dev; int * mps_parent_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (struct mps_softc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct mps_softc *VAR_2)
{

 if (VAR_2->mps_parent_dmat != ((void*)0)) {
  FUNC_0(VAR_2->mps_parent_dmat);
 }

 FUNC_2(VAR_2);

 if (VAR_2->mps_flags & VAR_0)
  FUNC_3(VAR_2->mps_dev);

 if (VAR_2->mps_regs_resource != ((void*)0)) {
  FUNC_1(VAR_2->mps_dev, VAR_1,
      VAR_2->mps_regs_rid, VAR_2->mps_regs_resource);
 }

 return;
}
