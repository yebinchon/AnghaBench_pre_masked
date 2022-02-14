
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sge_rspq {int cntxt_id; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static __inline void
FUNC_3(adapter_t *VAR_1, const struct sge_rspq *VAR_2, u_int VAR_3)
{


 FUNC_2(VAR_1, VAR_0,
       FUNC_1(VAR_2->cntxt_id) | FUNC_0(VAR_3));
}
