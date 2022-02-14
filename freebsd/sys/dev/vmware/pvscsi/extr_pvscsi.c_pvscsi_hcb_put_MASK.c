
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int free_list; int lock; } ;
struct pvscsi_hcb {int recovery; int * e; int * ccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct pvscsi_hcb*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct pvscsi_softc *VAR_3, struct pvscsi_hcb *VAR_4)
{

 FUNC_1(&VAR_3->lock, VAR_0);
 VAR_4->ccb = ((void*)0);
 VAR_4->e = ((void*)0);
 VAR_4->recovery = VAR_1;
 FUNC_0(&VAR_3->free_list, VAR_4, VAR_2);
}
