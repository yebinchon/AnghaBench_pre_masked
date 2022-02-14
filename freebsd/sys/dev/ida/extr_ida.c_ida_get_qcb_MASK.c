
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ida_softc {int free_qcbs; } ;
struct ida_req {int dummy; } ;
struct ida_qcb {int hwqcb; } ;
struct ida_hdr {int dummy; } ;
struct TYPE_2__ {int sle; } ;


 struct ida_qcb* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static __inline struct ida_qcb *
FUNC_3(struct ida_softc *VAR_1)
{
 struct ida_qcb *VAR_2;

 if ((VAR_2 = FUNC_0(&VAR_1->free_qcbs)) != ((void*)0)) {
  FUNC_1(&VAR_1->free_qcbs, VAR_0.sle);
  FUNC_2(VAR_2->hwqcb, sizeof(struct ida_hdr) + sizeof(struct ida_req));
 }
 return (VAR_2);
}
