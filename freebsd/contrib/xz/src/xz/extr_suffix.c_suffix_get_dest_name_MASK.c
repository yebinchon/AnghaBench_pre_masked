
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,size_t const) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,size_t const) ;

extern char *
FUNC_4(const char *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0));



 const size_t VAR_3 = FUNC_2(VAR_2);

 return VAR_1 == VAR_0
   ? FUNC_1(VAR_2, VAR_3)
   : FUNC_3(VAR_2, VAR_3);
}
