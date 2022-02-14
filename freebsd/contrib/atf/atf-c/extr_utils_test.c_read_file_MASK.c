
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int const,void* const,size_t const) ;

__attribute__((used)) static ssize_t
FUNC_5(const char *VAR_1, void *const VAR_2, const size_t VAR_3)
{
    const int VAR_4 = FUNC_3(VAR_1, VAR_0);
    FUNC_1(VAR_4 != -1, "Cannot open %s", VAR_1);
    const ssize_t VAR_5 = FUNC_4(VAR_4, VAR_2, VAR_3 - 1);
    FUNC_2(VAR_4);
    FUNC_0(VAR_5 != -1);
    ((char *)VAR_2)[VAR_5] = '\0';
    return VAR_5;
}
