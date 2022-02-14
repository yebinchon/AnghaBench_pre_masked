
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,size_t,unsigned char const*,size_t,int ) ;
 int FUNC_1 (unsigned char const*,size_t,unsigned char const*,size_t,int ) ;

__attribute__((used)) static int FUNC_2(const unsigned char *VAR_0, size_t VAR_1,
                       const unsigned char *VAR_2, size_t VAR_3,
                       unsigned int VAR_4)
{
    size_t VAR_5 = VAR_1;
    if (VAR_1 != VAR_3)
        return 0;





    while (VAR_5 > 0) {
        --VAR_5;
        if (VAR_0[VAR_5] == '@' || VAR_2[VAR_5] == '@') {
            if (!FUNC_1(VAR_0 + VAR_5, VAR_1 - VAR_5, VAR_2 + VAR_5, VAR_1 - VAR_5, 0))
                return 0;
            break;
        }
    }
    if (VAR_5 == 0)
        VAR_5 = VAR_1;
    return FUNC_0(VAR_0, VAR_5, VAR_2, VAR_5, 0);
}
