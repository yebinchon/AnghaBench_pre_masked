
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rangelock {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mtx*) ;
 int FUNC_2 (struct rangelock*,void*,struct mtx*,int) ;

void
FUNC_3(struct rangelock *VAR_0, void *VAR_1, struct mtx *VAR_2)
{

 FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 FUNC_1(VAR_2);
 FUNC_2(VAR_0, VAR_1, VAR_2, 1);
}
