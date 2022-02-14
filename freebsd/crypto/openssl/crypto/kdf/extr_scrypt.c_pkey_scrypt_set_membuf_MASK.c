
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,size_t) ;
 unsigned char* FUNC_2 (int) ;
 unsigned char* FUNC_3 (unsigned char const*,int const) ;

__attribute__((used)) static int FUNC_4(unsigned char **VAR_2, size_t *VAR_3,
                                  const unsigned char *VAR_4,
                                  const int VAR_5)
{
    if (VAR_4 == ((void*)0))
        return 1;

    if (VAR_5 < 0)
        return 0;

    if (*VAR_2 != ((void*)0))
        FUNC_1(*VAR_2, *VAR_3);

    if (VAR_5 > 0) {
        *VAR_2 = FUNC_3(VAR_4, VAR_5);
    } else {
        *VAR_2 = FUNC_2(1);
    }
    if (*VAR_2 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }

    *VAR_3 = VAR_5;
    return 1;
}
