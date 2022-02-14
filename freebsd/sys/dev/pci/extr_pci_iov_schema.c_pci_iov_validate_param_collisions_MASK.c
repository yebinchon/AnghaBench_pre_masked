
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,char const*) ;
 int * FUNC_1 (int const*,int ) ;
 char* FUNC_2 (int const*,int*,void**) ;

__attribute__((used)) static int
FUNC_3(const nvlist_t *VAR_3)
{
 const nvlist_t *VAR_4, *VAR_5;
 const char *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_4 = FUNC_1(VAR_3, VAR_2);

 VAR_7 = ((void*)0);
 while ((VAR_6 = FUNC_2(VAR_5, &VAR_8, &VAR_7)) != ((void*)0)) {
  if (FUNC_0(VAR_4, VAR_6))
   return (VAR_1);
 }

 return (0);
}
