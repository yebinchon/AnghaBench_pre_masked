
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sge_txq {int cntxt_id; int db_pending; int flags; } ;
struct TYPE_4__ {int * tb; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static __inline void
FUNC_7(adapter_t *VAR_4, struct sge_txq *VAR_5, int VAR_6)
{
 if (VAR_6 || ++VAR_5->db_pending >= 32) {
  FUNC_6();
  FUNC_4(VAR_4, VAR_0,
      VAR_1 | FUNC_1(VAR_5->cntxt_id));
  VAR_5->db_pending = 0;
 }

}
