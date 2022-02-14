
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static ucl_object_t*
FUNC_4 (void)
{
 ucl_object_t *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_3 (VAR_0);
 VAR_3 = FUNC_0 () % VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 ++) {
  FUNC_1 (VAR_2, FUNC_2 (FUNC_0 () % 2));
 }

 return VAR_2;
}
