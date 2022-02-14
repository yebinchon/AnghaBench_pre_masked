
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int * msix_vec; scalar_t__ msix_vec_count; int device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct amd_ntb_softc *VAR_1)
{
 if (VAR_1->msix_vec_count) {
  FUNC_1(VAR_1->device);
  VAR_1->msix_vec_count = 0;
 }

 if (VAR_1->msix_vec != ((void*)0)) {
  FUNC_0(VAR_1->msix_vec, VAR_0);
  VAR_1->msix_vec = ((void*)0);
 }
}
