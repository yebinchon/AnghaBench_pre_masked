
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int ASN1_TIME ;


 int FUNC_0 (int *,struct tm*) ;
 int VAR_0 ;
 int * FUNC_1 (int *,struct tm*,int ) ;

int FUNC_2(ASN1_TIME *VAR_1)
{
    struct tm VAR_2;

    if (!FUNC_0(VAR_1, &VAR_2))
        return 0;

    return FUNC_1(VAR_1, &VAR_2, VAR_0) != ((void*)0);
}
