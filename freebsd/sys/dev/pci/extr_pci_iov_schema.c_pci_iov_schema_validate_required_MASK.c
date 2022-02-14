
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,char*,int ) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,char const*) ;
 int const* FUNC_3 (int const*,char const*) ;
 char* FUNC_4 (int const*,int*,void**) ;
 int FUNC_5 (int const*,char const*,int const*) ;

__attribute__((used)) static int
FUNC_6(const nvlist_t *VAR_1, nvlist_t *VAR_2)
{
 const nvlist_t *VAR_3;
 const char *VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_5 = ((void*)0);
 while ((VAR_4 = FUNC_4(VAR_1, &VAR_6, &VAR_5)) != ((void*)0)) {
  VAR_3 = FUNC_3(VAR_1, VAR_4);

  if (FUNC_0(VAR_3, "required", 0)) {
   if (!FUNC_2(VAR_2, VAR_4))
    return (VAR_0);
  }

  if (FUNC_2(VAR_3, "default") &&
      !FUNC_2(VAR_2, VAR_4))
   FUNC_5(VAR_3, VAR_4, VAR_2);
 }

 return (FUNC_1(VAR_2));
}
