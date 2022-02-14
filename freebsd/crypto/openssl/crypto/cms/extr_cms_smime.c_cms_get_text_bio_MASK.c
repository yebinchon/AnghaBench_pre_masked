
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 unsigned int VAR_0 ;

__attribute__((used)) static BIO *FUNC_4(BIO *VAR_1, unsigned int VAR_2)
{
    BIO *VAR_3;
    if (VAR_1 == ((void*)0))
        VAR_3 = FUNC_0(FUNC_2());
    else if (VAR_2 & VAR_0) {
        VAR_3 = FUNC_0(FUNC_1());
        FUNC_3(VAR_3, 0);
    } else
        VAR_3 = VAR_1;
    return VAR_3;
}
