
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ hx509_private_key ;
typedef int hx509_context ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;

void
FUNC_2(hx509_context VAR_0,
         hx509_private_key *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
 FUNC_1(&VAR_1[VAR_2]);
    FUNC_0(VAR_1);
}
