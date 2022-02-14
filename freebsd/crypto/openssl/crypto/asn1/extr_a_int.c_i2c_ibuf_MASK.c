
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,size_t,unsigned char) ;

__attribute__((used)) static size_t FUNC_1(const unsigned char *VAR_0, size_t VAR_1, int VAR_2,
                       unsigned char **VAR_3)
{
    unsigned int VAR_4 = 0;
    size_t VAR_5, VAR_6;
    unsigned char *VAR_7, VAR_8 = 0;

    if (VAR_0 != ((void*)0) && VAR_1) {
        VAR_5 = VAR_1;
        VAR_6 = VAR_0[0];
        if (!VAR_2 && (VAR_6 > 127)) {
            VAR_4 = 1;
            VAR_8 = 0;
        } else if (VAR_2) {
            VAR_8 = 0xFF;
            if (VAR_6 > 128) {
                VAR_4 = 1;
            } else if (VAR_6 == 128) {




                for (VAR_4 = 0, VAR_6 = 1; VAR_6 < VAR_1; VAR_6++)
                    VAR_4 |= VAR_0[VAR_6];
                VAR_8 = VAR_4 != 0 ? 0xffU : 0;
                VAR_4 = VAR_8 & 1;
            }
        }
        VAR_5 += VAR_4;
    } else {
        VAR_5 = 1;
        VAR_1 = 0;
    }

    if (VAR_3 == ((void*)0) || (VAR_7 = *VAR_3) == ((void*)0))
        return VAR_5;






    *VAR_7 = VAR_8;
    VAR_7 += VAR_4;

    FUNC_0(VAR_7, VAR_0, VAR_1, VAR_8);

    *VAR_3 += VAR_5;
    return VAR_5;
}
