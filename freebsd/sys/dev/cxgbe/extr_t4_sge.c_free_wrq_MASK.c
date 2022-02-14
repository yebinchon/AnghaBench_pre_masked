
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_wrq {int eq; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct sge_wrq*,int) ;
 int FUNC_1 (struct adapter*,int *) ;

__attribute__((used)) static int
FUNC_2(struct adapter *VAR_0, struct sge_wrq *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->eq);
 if (VAR_2)
  return (VAR_2);

 FUNC_0(VAR_1, sizeof(*VAR_1));
 return (0);
}
