
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ecore_iwarp_ep {scalar_t__ connect_mode; scalar_t__ state; int syn; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int ll2_syn_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_iwarp_ep*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_iwarp_ep*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_iwarp_ep*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct ecore_hwfn *VAR_4,
        struct ecore_iwarp_ep *VAR_5,
        u8 VAR_6)
{
 if (VAR_5->connect_mode == VAR_3) {

  FUNC_0(
   VAR_4, VAR_5->syn,
   VAR_4->p_rdma_info->iwarp.ll2_syn_handle);

  VAR_5->syn = VAR_1;

  if (VAR_5->state == VAR_0)
   return;


  if (VAR_6 == VAR_2)
   FUNC_2(VAR_4, VAR_5);
  else
   FUNC_3(VAR_4, VAR_5,
            VAR_6);

 } else {
  if (VAR_6 == VAR_2)
   FUNC_1(VAR_4, VAR_5);
  else
   FUNC_3(VAR_4, VAR_5,
            VAR_6);
 }
}
