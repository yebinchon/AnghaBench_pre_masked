
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t conn_state; int id; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
typedef size_t VCHIQ_CONNSTATE_T ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,size_t,size_t) ;

inline void
FUNC_2(VCHIQ_STATE_T *VAR_2, VCHIQ_CONNSTATE_T VAR_3)
{
 VCHIQ_CONNSTATE_T VAR_4 = VAR_2->conn_state;
 FUNC_0(VAR_1, "%d: %s->%s", VAR_2->id,
  VAR_0[VAR_4],
  VAR_0[VAR_3]);
 VAR_2->conn_state = VAR_3;
 FUNC_1(VAR_2, VAR_4, VAR_3);
}
