
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CK_RV ;
typedef int * CK_MECHANISM_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int * const,int) ;

__attribute__((used)) static CK_RV
FUNC_3(CK_MECHANISM_PTR *VAR_2, const CK_MECHANISM_PTR VAR_3)
{
    CK_MECHANISM_PTR VAR_4;

    VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (VAR_4 == ((void*)0))
 return VAR_0;

    if (*VAR_2)
 FUNC_0(*VAR_2);
    *VAR_2 = VAR_4;
    FUNC_2(VAR_4, VAR_3, sizeof(*VAR_4));

    return VAR_1;
}
