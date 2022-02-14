
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,size_t const) ;

__attribute__((used)) static unsigned FUNC_2(const char** VAR_0, const char* VAR_1)
{
    size_t const VAR_2 = FUNC_0(VAR_1);
    int const VAR_3 = !FUNC_1(*VAR_0, VAR_1, VAR_2);
    if (VAR_3) *VAR_0 += VAR_2;
    return VAR_3;
}
