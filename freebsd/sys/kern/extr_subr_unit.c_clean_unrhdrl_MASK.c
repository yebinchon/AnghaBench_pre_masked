
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unrhdr {int mtx; int ppfree; } ;
struct unr {int dummy; } ;


 int FUNC_0 (struct unr*) ;
 int VAR_0 ;
 struct unr* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct unr*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct unrhdr *VAR_2)
{
 struct unr *VAR_3;

 FUNC_3(VAR_2->mtx, VAR_0);
 while ((VAR_3 = FUNC_1(&VAR_2->ppfree)) != ((void*)0)) {
  FUNC_2(&VAR_2->ppfree, VAR_3, VAR_1);
  FUNC_5(VAR_2->mtx);
  FUNC_0(VAR_3);
  FUNC_4(VAR_2->mtx);
 }

}
