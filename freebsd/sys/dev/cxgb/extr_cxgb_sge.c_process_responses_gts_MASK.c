
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int next_holdoff; int cidx; int cntxt_id; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct sge_rspq*) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static __inline int
FUNC_7(adapter_t *VAR_2, struct sge_rspq *VAR_3)
{
 int VAR_4;
 static int VAR_5 = 0;

 VAR_4 = FUNC_4(VAR_2, FUNC_5(VAR_3), -1);

 if (VAR_1 && (VAR_3->next_holdoff != VAR_5)) {
  FUNC_3("next_holdoff=%d\n", VAR_3->next_holdoff);
  VAR_5 = VAR_3->next_holdoff;
 }
 FUNC_6(VAR_2, VAR_0, FUNC_2(VAR_3->cntxt_id) |
     FUNC_1(VAR_3->next_holdoff) | FUNC_0(VAR_3->cidx));

 return (VAR_4);
}
