
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ ref_count; int handle; } ;
struct qp_guest_endpoint {TYPE_2__ qp; } ;
struct TYPE_6__ {int mutex; int hibernate; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct qp_guest_endpoint*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void
FUNC_8(void)
{
 struct qp_guest_endpoint *VAR_2;

 FUNC_5(&VAR_1.mutex);

 while ((VAR_2 =
     (struct qp_guest_endpoint *)FUNC_3(
     &VAR_1)) != ((void*)0)) {



  if (!(VAR_2->qp.flags & VAR_0))
   FUNC_7(VAR_2->qp.handle);



  VAR_2->qp.ref_count = 0;
  FUNC_4(&VAR_1, &VAR_2->qp);
  FUNC_1(VAR_2);
 }

 FUNC_0(&VAR_1.hibernate, 0);
 FUNC_6(&VAR_1.mutex);
 FUNC_2(&VAR_1);
}
