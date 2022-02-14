
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 size_t FUNC_6 (char const*) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static const char *
FUNC_8(char **VAR_0, const char *VAR_1)
{
    char *VAR_2 = *VAR_0;
    char *VAR_3 = FUNC_7(VAR_1);

    if (VAR_3 != 0 && *VAR_3 != '\0') {
 const char *VAR_4 = ",";
 size_t VAR_5 = 1 + FUNC_6(VAR_3);

 if (*VAR_3 == ',')
     VAR_4 = "";
 else if (!FUNC_2(*VAR_0))
     VAR_4 = "";

 VAR_5 += FUNC_6(VAR_4);
 if (*VAR_0 != 0)
     VAR_5 += FUNC_6(*VAR_0);

 VAR_2 = FUNC_5(VAR_5);
 if (VAR_2 == 0)
     FUNC_3("add_to_tab_list");

 *VAR_2 = '\0';
 if (*VAR_0 != 0) {
     FUNC_1(VAR_2, *VAR_0, VAR_5);
     FUNC_4(*VAR_0);
 }
 FUNC_0(VAR_2, VAR_4, VAR_5);
 FUNC_0(VAR_2, VAR_3, VAR_5);

 *VAR_0 = VAR_2;
    }
    return VAR_2;
}
