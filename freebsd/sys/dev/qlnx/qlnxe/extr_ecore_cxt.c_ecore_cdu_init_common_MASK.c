
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {TYPE_3__* p_cxt_mngr; } ;
struct TYPE_6__ {int* task_type_size; TYPE_2__* clients; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_5__ {TYPE_1__ p_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ecore_hwfn*) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct ecore_hwfn*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 0;


 VAR_15 = VAR_14->p_cxt_mngr->clients[VAR_12].p_size.val;
 VAR_18 = FUNC_0(VAR_14);
 VAR_16 = FUNC_1(VAR_15) / VAR_18;
 VAR_17 = FUNC_1(VAR_15) - VAR_16 * VAR_18;

 FUNC_2(VAR_19, VAR_1, VAR_18);
 FUNC_2(VAR_19, VAR_0, VAR_17);
 FUNC_2(VAR_19, (u32)VAR_2, VAR_16);
 FUNC_3(VAR_14, VAR_9, VAR_19);


 VAR_15 = VAR_14->p_cxt_mngr->clients[VAR_13].p_size.val;
 VAR_18 = VAR_14->p_cxt_mngr->task_type_size[0];
 VAR_16 = FUNC_1(VAR_15) / VAR_18;
 VAR_17 = FUNC_1(VAR_15) - VAR_16 * VAR_18;


 VAR_19 = 0;
 FUNC_2(VAR_19, (u32)VAR_4, (VAR_18 >> 3));
 FUNC_2(VAR_19, VAR_3, (VAR_17 >> 3));
 FUNC_2(VAR_19, VAR_5, VAR_16);
 FUNC_3(VAR_14, VAR_10, VAR_19);


 VAR_18 = VAR_14->p_cxt_mngr->task_type_size[1];
 VAR_16 = FUNC_1(VAR_15) / VAR_18;
 VAR_17 = FUNC_1(VAR_15) - VAR_16 * VAR_18;


 VAR_19 = 0;
 FUNC_2(VAR_19, (u32)VAR_7, (VAR_18 >> 3));
 FUNC_2(VAR_19, VAR_6, (VAR_17 >> 3));
 FUNC_2(VAR_19, VAR_8, VAR_16);
 FUNC_3(VAR_14, VAR_11, VAR_19);
}
