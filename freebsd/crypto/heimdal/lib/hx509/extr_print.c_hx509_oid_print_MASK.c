
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_vprint_func ;
typedef int heim_oid ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int const*,char**) ;
 int FUNC_2 (int ,void*,char*,char*) ;

void
FUNC_3(const heim_oid *VAR_0, hx509_vprint_func VAR_1, void *VAR_2)
{
    char *VAR_3;
    FUNC_1(VAR_0, &VAR_3);
    FUNC_2(VAR_1, VAR_2, "%s", VAR_3);
    FUNC_0(VAR_3);
}
