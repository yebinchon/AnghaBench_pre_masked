
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrqe {int dummy; } ;
struct sge_wrq {int dummy; } ;
struct cpl_tid_release {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpl_tid_release*,int ,int) ;
 struct wrqe* FUNC_1 (int,struct sge_wrq*) ;
 int FUNC_2 (struct adapter*,int) ;
 int FUNC_3 (struct adapter*,struct wrqe*) ;
 struct cpl_tid_release* FUNC_4 (struct wrqe*) ;

void
FUNC_5(struct adapter *VAR_1, int VAR_2, struct sge_wrq *VAR_3)
{
 struct wrqe *VAR_4;
 struct cpl_tid_release *VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_5), VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_1, VAR_2);
  return;
 }
 VAR_5 = FUNC_4(VAR_4);

 FUNC_0(VAR_5, VAR_0, VAR_2);

 FUNC_3(VAR_1, VAR_4);
}
