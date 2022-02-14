
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int state; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct mtx *VAR_1, int VAR_2)
{
 if (VAR_2 == VAR_0) {
  FUNC_0(VAR_1->state == 1, ("mtx_assert(MA_OWNED) not true"));
 }
}
