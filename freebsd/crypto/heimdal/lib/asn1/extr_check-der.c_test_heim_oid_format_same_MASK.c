
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int heim_oid ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (char*,char*,int *) ;
 int FUNC_3 (int const*,char,char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,...) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_0, const heim_oid *VAR_1)
{
    int VAR_2;
    char *VAR_3;
    heim_oid VAR_4;

    VAR_2 = FUNC_3(VAR_1, ' ', &VAR_3);
    if (VAR_2) {
 FUNC_5("fail to print oid: %s\n", VAR_0);
 return 1;
    }
    VAR_2 = FUNC_6(VAR_3, VAR_0);
    if (VAR_2) {
 FUNC_5("oid %s != formated oid %s\n", VAR_0, VAR_3);
 FUNC_4(VAR_3);
 return VAR_2;
    }

    VAR_2 = FUNC_2(VAR_3, " ", &VAR_4);
    if (VAR_2) {
 FUNC_5("failed to parse %s\n", VAR_3);
 FUNC_4(VAR_3);
 return VAR_2;
    }
    FUNC_4(VAR_3);
    VAR_2 = FUNC_1(&VAR_4, VAR_1);
    FUNC_0(&VAR_4);

    return VAR_2;
}
