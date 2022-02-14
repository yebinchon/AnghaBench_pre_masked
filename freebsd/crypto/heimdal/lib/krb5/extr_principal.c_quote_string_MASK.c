
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,size_t,char const) ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char* FUNC_1 (char const*,char const) ;

__attribute__((used)) static size_t
FUNC_2(const char *VAR_2, char *VAR_3, size_t VAR_4, size_t VAR_5, int VAR_6)
{
    const char *VAR_7, *VAR_8;
    for(VAR_7 = VAR_2; *VAR_7 && VAR_4 < VAR_5; VAR_7++){
 VAR_8 = FUNC_1(VAR_0, *VAR_7);
 if (VAR_8 && VAR_6) {
     FUNC_0(VAR_3, VAR_4, VAR_5, VAR_1[VAR_8 - VAR_0]);
 } else if (VAR_8) {
     FUNC_0(VAR_3, VAR_4, VAR_5, '\\');
     FUNC_0(VAR_3, VAR_4, VAR_5, VAR_1[VAR_8 - VAR_0]);
 }else
     FUNC_0(VAR_3, VAR_4, VAR_5, *VAR_7);
    }
    if(VAR_4 < VAR_5)
 VAR_3[VAR_4] = '\0';
    return VAR_4;
}
