
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct vmci_handle {int dummy; } ;
struct TYPE_6__ {int ref_count; int flags; } ;
struct qp_guest_endpoint {TYPE_2__ qp; scalar_t__ hibernate_failure; } ;
struct TYPE_5__ {int mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct vmci_handle) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qp_guest_endpoint*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct vmci_handle) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int,struct vmci_handle) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vmci_handle) ;

__attribute__((used)) static int
FUNC_9(struct vmci_handle VAR_4)
{
 struct qp_guest_endpoint *VAR_5;
 int VAR_6;
 uint32_t VAR_7;

 FUNC_0(!FUNC_1(VAR_4));

 FUNC_6(&VAR_3.mutex);

 VAR_5 = (struct qp_guest_endpoint *)FUNC_3(
     &VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_7(&VAR_3.mutex);
  return (VAR_0);
 }

 FUNC_0(VAR_5->qp.ref_count >= 1);

 if (VAR_5->qp.flags & VAR_1) {
  VAR_6 = VAR_2;

  if (VAR_5->qp.ref_count > 1) {
   VAR_6 = FUNC_5(0, VAR_4);






  }
 } else {
  VAR_6 = FUNC_8(VAR_4);
  if (VAR_5->hibernate_failure) {
   if (VAR_6 == VAR_0) {
    FUNC_0(VAR_5->qp.ref_count == 1);
    VAR_6 = VAR_2;
   }
  }
  if (VAR_6 < VAR_2) {
   FUNC_7(&VAR_3.mutex);
   return (VAR_6);
  }
 }






 VAR_5->qp.ref_count--;
 if (VAR_5->qp.ref_count == 0)
  FUNC_4(&VAR_3, &VAR_5->qp);


 VAR_7 = VAR_5 ? VAR_5->qp.ref_count :
     0xffffffff;




 FUNC_7(&VAR_3.mutex);

 if (VAR_7 == 0)
  FUNC_2(VAR_5);
 return (VAR_6);
}
