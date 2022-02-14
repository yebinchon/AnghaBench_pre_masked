
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_PURPOSE ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;

__attribute__((used)) static int FUNC_2(const X509_PURPOSE *VAR_2, const X509 *VAR_3,
                                    int VAR_4)
{
    int VAR_5;
    VAR_5 = FUNC_1(VAR_3, VAR_4);
    if (!VAR_5 || VAR_4)
        return VAR_5;
    if (FUNC_0(VAR_3, VAR_0 | VAR_1))
        return 0;
    return VAR_5;
}
