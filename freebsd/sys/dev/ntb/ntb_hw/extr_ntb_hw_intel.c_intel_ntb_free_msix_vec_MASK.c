
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {int * msix_vec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct ntb_softc *VAR_1)
{

 if (VAR_1->msix_vec == ((void*)0))
  return;

 FUNC_0(VAR_1->msix_vec, VAR_0);
 VAR_1->msix_vec = ((void*)0);
}
