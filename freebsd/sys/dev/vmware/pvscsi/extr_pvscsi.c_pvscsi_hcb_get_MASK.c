
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int free_list; int lock; } ;
struct pvscsi_hcb {int dummy; } ;


 int VAR_0 ;
 struct pvscsi_hcb* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static struct pvscsi_hcb *
FUNC_3(struct pvscsi_softc *VAR_2)
{
 struct pvscsi_hcb *VAR_3;

 FUNC_2(&VAR_2->lock, VAR_0);

 VAR_3 = FUNC_0(&VAR_2->free_list);
 if (VAR_3) {
  FUNC_1(&VAR_2->free_list, VAR_1);
 }

 return (VAR_3);
}
