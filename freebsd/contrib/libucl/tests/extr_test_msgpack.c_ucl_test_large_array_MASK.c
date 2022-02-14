
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ucl_object_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 () ;

__attribute__((used)) static ucl_object_t*
FUNC_4 (void)
{
 ucl_object_t *VAR_2, *VAR_3;
 int VAR_4, VAR_5;
 uint32_t VAR_6;

 VAR_2 = FUNC_2 (VAR_0);
 VAR_4 = 65537;

 VAR_1 ++;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 ++) {
  VAR_3 = FUNC_3 ();
  FUNC_0 (VAR_3 != ((void*)0));

  FUNC_1 (VAR_2, VAR_3);
 }

 return VAR_2;
}
