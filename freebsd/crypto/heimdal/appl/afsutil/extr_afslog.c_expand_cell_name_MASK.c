
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_4)
{
    FILE *VAR_5;
    const char *VAR_6;
    const char **VAR_7, *VAR_8[] = { VAR_2,
      VAR_0,
      VAR_3,
      VAR_1,
      ((void*)0) };
    for(VAR_7 = VAR_8; *VAR_7; VAR_7++) {
 VAR_5 = FUNC_2(*VAR_7, "r");
 if(VAR_5 == ((void*)0))
     continue;
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 FUNC_1(VAR_5);
 if(VAR_6)
     return VAR_6;
    }
    return VAR_4;
}
