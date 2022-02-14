
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_eq {int dummy; } ;
struct sge_wrq {int adapter; int wr_list; int incomplete_wrs; struct sge_eq eq; } ;


 int FUNC_0 (struct sge_eq*) ;
 int FUNC_1 (struct sge_eq*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,struct sge_wrq*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, int VAR_1)
{
 struct sge_wrq *VAR_2 = VAR_0;
 struct sge_eq *VAR_3 = &VAR_2->eq;

 FUNC_0(VAR_3);
 if (FUNC_3(&VAR_2->incomplete_wrs) && !FUNC_2(&VAR_2->wr_list))
  FUNC_4(VAR_2->adapter, VAR_2);
 FUNC_1(VAR_3);
}
