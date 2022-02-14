
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ucl_object_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (size_t*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,char const*,size_t,int) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 () ;

__attribute__((used)) static ucl_object_t*
FUNC_5 (void)
{
 ucl_object_t *VAR_2, *VAR_3;
 int VAR_4, VAR_5;
 uint32_t VAR_6;
 size_t VAR_7;
 const char *VAR_8;

 VAR_2 = FUNC_3 (VAR_0);
 VAR_4 = 65537;

 VAR_1 ++;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 ++) {
  VAR_8 = FUNC_1 (&VAR_7);
  VAR_3 = FUNC_4 ();
  FUNC_0 (VAR_3 != ((void*)0));
  FUNC_0 (VAR_7 != 0);

  FUNC_2 (VAR_2, VAR_3, VAR_8, VAR_7, 1);
 }

 return VAR_2;
}
