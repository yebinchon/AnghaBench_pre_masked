
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int val; } ;
struct ecore_ilt_client_cfg {TYPE_1__ p_size; } ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {struct ecore_ilt_client_cfg* clients; } ;
typedef enum ilt_clients { ____Placeholder_ilt_clients } ilt_clients ;


 int FUNC_0 (int ) ;

u32 FUNC_1(struct ecore_hwfn *VAR_0,
    enum ilt_clients VAR_1)
{
 struct ecore_cxt_mngr *VAR_2 = VAR_0->p_cxt_mngr;
 struct ecore_ilt_client_cfg *VAR_3 = &VAR_2->clients[VAR_1];

 return FUNC_0(VAR_3->p_size.val);
}
