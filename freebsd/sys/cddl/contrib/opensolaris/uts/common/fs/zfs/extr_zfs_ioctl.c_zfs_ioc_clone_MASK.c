
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int *,int *) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,char*,int **) ;
 scalar_t__ FUNC_5 (int *,char*,char**) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*,int ,int *,int *) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_2, nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 int VAR_5 = 0;
 nvlist_t *VAR_6 = ((void*)0);
 char *VAR_7;

 if (FUNC_5(VAR_3, "origin", &VAR_7) != 0)
  return (FUNC_0(VAR_0));
 (void) FUNC_4(VAR_3, "props", &VAR_6);

 if (FUNC_6(VAR_2, '@') ||
     FUNC_6(VAR_2, '%'))
  return (FUNC_0(VAR_0));

 if (FUNC_1(VAR_7, ((void*)0), ((void*)0)) != 0)
  return (FUNC_0(VAR_0));
 VAR_5 = FUNC_2(VAR_2, VAR_7);
 if (VAR_5 != 0)
  return (VAR_5);




 if (VAR_5 == 0) {
  VAR_5 = FUNC_7(VAR_2, VAR_1,
      VAR_6, VAR_4);
  if (VAR_5 != 0)
   (void) FUNC_3(VAR_2);
 }




 return (VAR_5);
}
