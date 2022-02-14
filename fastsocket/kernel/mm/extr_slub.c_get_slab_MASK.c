
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct kmem_cache* VAR_1 ;
 struct kmem_cache* FUNC_0 (int,int) ;
 int FUNC_1 (size_t) ;
 struct kmem_cache* VAR_2 ;
 int* VAR_3 ;
 size_t FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct kmem_cache *FUNC_4(size_t VAR_4, gfp_t VAR_5)
{
 int VAR_6;

 if (VAR_4 <= 192) {
  if (!VAR_4)
   return VAR_1;

  VAR_6 = VAR_3[FUNC_2(VAR_4)];
 } else
  VAR_6 = FUNC_1(VAR_4 - 1);






 return &VAR_2[VAR_6];
}
