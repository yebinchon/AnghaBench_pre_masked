
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int heim_oid ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (char const*,char*,int *) ;
 int FUNC_2 (int,char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, const heim_oid *VAR_1, heim_oid *VAR_2)
{
    int VAR_3;
    if (VAR_0)
 VAR_3 = FUNC_1 (VAR_0, " .", VAR_2);
    else
 VAR_3 = FUNC_0(VAR_1, VAR_2);
    if (VAR_3)
 FUNC_2(1, "parse_oid failed for: %s", VAR_0 ? VAR_0 : "default oid");
}
