
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zprop_source_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int **) ;
 int FUNC_4 (char const*,int,int *,int *) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2, nvlist_t *VAR_3,
    nvlist_t *VAR_4)
{
 int VAR_5 = 0;
 nvlist_t *VAR_6 = ((void*)0);
 FUNC_3(VAR_3, VAR_4, &VAR_6);
 if (!FUNC_1(VAR_6)) {




  zprop_source_t VAR_7 = (VAR_0 |
      (FUNC_0(VAR_2) ? VAR_1 : 0));
  VAR_5 = FUNC_4(VAR_2, VAR_7, VAR_6, ((void*)0));
 }
 FUNC_2(VAR_6);
 return (VAR_5);
}
