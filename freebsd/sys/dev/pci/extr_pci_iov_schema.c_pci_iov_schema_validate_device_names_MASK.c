
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int nvlist_t ;


 int * FUNC_0 (int const*,char const*) ;
 char* FUNC_1 (int const*,int*,void**) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static int
FUNC_4(const nvlist_t *VAR_0, uint16_t VAR_1)
{
 const nvlist_t *VAR_2;
 void *VAR_3;
 const char *VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = ((void*)0);
 while ((VAR_4 = FUNC_1(VAR_0, &VAR_5, &VAR_3)) != ((void*)0)) {
  VAR_6 = FUNC_2(VAR_4, VAR_1);
  if (VAR_6 != 0)
   return (VAR_6);






  VAR_2 = FUNC_0(VAR_0, VAR_4);
  VAR_6 = FUNC_3(VAR_2);
  if (VAR_6 != 0)
   return (VAR_6);
 }

 return (0);
}
