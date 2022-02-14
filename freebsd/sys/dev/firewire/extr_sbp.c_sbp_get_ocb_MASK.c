
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_ocb {int * ccb; } ;
struct sbp_dev {int free_ocbs; int flags; TYPE_1__* target; } ;
struct TYPE_2__ {int sbp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct sbp_ocb* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sbp_ocb*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct sbp_ocb *
FUNC_4(struct sbp_dev *VAR_1)
{
 struct sbp_ocb *VAR_2;

 FUNC_0(VAR_1->target->sbp);
 VAR_2 = FUNC_1(&VAR_1->free_ocbs);
 if (VAR_2 == ((void*)0)) {
  VAR_1->flags |= VAR_0;
  FUNC_3("ocb shortage!!!\n");
  return ((void*)0);
 }
 FUNC_2(&VAR_1->free_ocbs, VAR_2);
 VAR_2->ccb = ((void*)0);
 return (VAR_2);
}
