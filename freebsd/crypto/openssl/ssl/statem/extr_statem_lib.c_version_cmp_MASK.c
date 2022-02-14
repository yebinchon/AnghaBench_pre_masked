
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(const SSL *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_1(VAR_0);

    if (VAR_1 == VAR_2)
        return 0;
    if (!VAR_3)
        return VAR_1 < VAR_2 ? -1 : 1;
    return FUNC_0(VAR_1, VAR_2) ? -1 : 1;
}
