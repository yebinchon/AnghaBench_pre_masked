
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int int32_t ;
typedef int buf ;
typedef int GUID ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int const*,char**,int *) ;

__attribute__((used)) static inline const char *
FUNC_3(const GUID *VAR_0)
{
 static char VAR_1[36 + 1];
 char *VAR_2 = ((void*)0);
 int32_t VAR_3;

 FUNC_2((const uuid_t *)VAR_0, &VAR_2, &VAR_3);
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_1, VAR_2, sizeof(VAR_1));
 else
  FUNC_1(VAR_1, "groot-cannot-decode-guid-groot-smash",
      sizeof(VAR_1));
 FUNC_0(VAR_2);
 return VAR_1;
}
