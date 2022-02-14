
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union descriptor {int dummy; } descriptor ;
struct proc_ldt {scalar_t__ ldt_refcnt; int ldt_len; int ldt_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc_ldt*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

void
FUNC_4(struct proc_ldt *VAR_3)
{

 FUNC_1(&VAR_2, VAR_0);
 if (--VAR_3->ldt_refcnt == 0) {
  FUNC_2(&VAR_2);
  FUNC_3(VAR_3->ldt_base, VAR_3->ldt_len *
      sizeof(union descriptor));
  FUNC_0(VAR_3, VAR_1);
 } else
  FUNC_2(&VAR_2);
}
