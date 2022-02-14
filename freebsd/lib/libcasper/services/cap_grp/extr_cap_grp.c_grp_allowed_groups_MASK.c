
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int const*,char const*,int ) ;
 int FUNC_1 (int const*,char const*) ;
 char* FUNC_2 (int const*,char const*) ;
 char* FUNC_3 (int const*,int*,void**) ;

__attribute__((used)) static int
FUNC_4(const nvlist_t *VAR_2, const nvlist_t *VAR_3)
{
 const char *VAR_4, *VAR_5;
 void *VAR_6;
 gid_t VAR_7;
 int VAR_8;

 VAR_6 = ((void*)0);
 while ((VAR_4 = FUNC_3(VAR_3, &VAR_8, &VAR_6)) != ((void*)0)) {
  switch (VAR_8) {
  case 129:
   VAR_7 = (gid_t)FUNC_1(VAR_3, VAR_4);
   VAR_5 = ((void*)0);
   break;
  case 128:
   VAR_7 = (gid_t)-1;
   VAR_5 = FUNC_2(VAR_3, VAR_4);
   break;
  default:
   return (VAR_0);
  }
  if (!FUNC_0(VAR_2, VAR_5, VAR_7))
   return (VAR_1);
 }

 return (0);
}
