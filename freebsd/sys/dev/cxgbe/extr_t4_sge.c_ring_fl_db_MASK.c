
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sge_fl {int pidx; scalar_t__ dbval; int sidx; int dbidx; int * udb; } ;
struct adapter {int sge_kdoorbell_reg; } ;


 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct adapter*,int ,scalar_t__) ;
 int FUNC_6 () ;

__attribute__((used)) static inline void
FUNC_7(struct adapter *VAR_0, struct sge_fl *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->pidx / 8, VAR_1->dbidx, VAR_1->sidx);
 FUNC_2(VAR_2 > 0);

 FUNC_6();
 VAR_3 = VAR_1->dbval | FUNC_3(VAR_2);
 if (VAR_1->udb)
  *VAR_1->udb = FUNC_4(VAR_3);
 else
  FUNC_5(VAR_0, VAR_0->sge_kdoorbell_reg, VAR_3);
 FUNC_1(VAR_1->dbidx, VAR_2, VAR_1->sidx);
}
