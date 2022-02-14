
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int val; } ;
struct ecore_ilt_client_cfg {TYPE_1__ p_size; } ;
struct ecore_hwfn {TYPE_3__* p_cxt_mngr; } ;
typedef enum ilt_clients { ____Placeholder_ilt_clients } ilt_clients ;
struct TYPE_6__ {struct ecore_ilt_client_cfg* clients; TYPE_2__* conn_cfg; } ;
struct TYPE_5__ {int cid_count; } ;


 scalar_t__ FUNC_0 (struct ecore_hwfn*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;

__attribute__((used)) static u32 FUNC_2(struct ecore_hwfn *VAR_2,
       enum ilt_clients VAR_3)
{
 u32 VAR_4 = VAR_2->p_cxt_mngr->conn_cfg[VAR_1].cid_count;
 struct ecore_ilt_client_cfg *VAR_5;
 u32 VAR_6 = 0;
 u32 VAR_7;



 if (VAR_3 == VAR_0) {
  VAR_5 = &VAR_2->p_cxt_mngr->clients[VAR_0];

  VAR_7 = FUNC_1(VAR_5->p_size.val) /
        (u32)FUNC_0(VAR_2);

  VAR_6 = VAR_4 / VAR_7;
 }

 return VAR_6;
}
