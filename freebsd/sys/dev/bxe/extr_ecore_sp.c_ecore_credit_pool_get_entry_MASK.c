
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_credit_pool_obj {int base_pool_offset; int * pool_mirror; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_2(
 struct ecore_credit_pool_obj *VAR_4,
 int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 *VAR_5 = -1;


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {


  if (!VAR_4->pool_mirror[VAR_7])
   continue;


  for (VAR_6 = VAR_7 * VAR_0, VAR_8 = 0;
        VAR_8 < VAR_0; VAR_6++, VAR_8++)

   if (FUNC_1(VAR_4->pool_mirror, VAR_6)) {

    FUNC_0(VAR_4->pool_mirror, VAR_6);
    *VAR_5 = VAR_4->base_pool_offset + VAR_6;
    return VAR_3;
   }
 }

 return VAR_2;
}
