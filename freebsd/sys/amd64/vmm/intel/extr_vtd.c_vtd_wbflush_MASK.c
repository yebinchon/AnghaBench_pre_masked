
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtdmap {int gsr; int gcr; int cap; int ext_cap; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct vtdmap *VAR_2)
{

 if (FUNC_1(VAR_2->ext_cap) == 0)
  FUNC_2();

 if (FUNC_0(VAR_2->cap)) {
  VAR_2->gcr = VAR_0;
  while ((VAR_2->gsr & VAR_1) != 0)
   ;
 }
}
