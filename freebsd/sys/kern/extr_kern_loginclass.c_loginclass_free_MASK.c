
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loginclass {int lc_racct; int lc_refcount; } ;


 int FUNC_0 (struct loginclass*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct loginclass*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct loginclass *VAR_3)
{

 if (FUNC_4(&VAR_3->lc_refcount))
  return;

 FUNC_5(&VAR_2);
 if (!FUNC_3(&VAR_3->lc_refcount)) {
  FUNC_6(&VAR_2);
  return;
 }

 FUNC_2(&VAR_3->lc_racct);
 FUNC_0(VAR_3, VAR_1);
 FUNC_6(&VAR_2);

 FUNC_1(VAR_3, VAR_0);
}
