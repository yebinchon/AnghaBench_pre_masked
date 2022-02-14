
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int gfpflags; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct kmem_cache *VAR_2, gfp_t VAR_3)
{
 if (VAR_0) {
  if (VAR_3 & VAR_1)
   FUNC_0(!(VAR_2->gfpflags & VAR_1));
  else
   FUNC_0(VAR_2->gfpflags & VAR_1);
 }
}
