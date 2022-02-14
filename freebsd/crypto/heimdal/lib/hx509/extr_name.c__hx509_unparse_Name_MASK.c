
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_name ;
typedef int Name ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char**) ;

int
FUNC_3(const Name *VAR_0, char **VAR_1)
{
    hx509_name VAR_2;
    int VAR_3;

    VAR_3 = FUNC_0(VAR_0, &VAR_2);
    if (VAR_3)
 return VAR_3;

    VAR_3 = FUNC_2(VAR_2, VAR_1);
    FUNC_1(&VAR_2);
    return VAR_3;
}
