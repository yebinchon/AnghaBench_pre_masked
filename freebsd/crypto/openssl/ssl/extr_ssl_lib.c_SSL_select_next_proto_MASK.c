
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,unsigned char const) ;

int FUNC_1(unsigned char **VAR_3, unsigned char *VAR_4,
                          const unsigned char *VAR_5,
                          unsigned int VAR_6,
                          const unsigned char *VAR_7, unsigned int VAR_8)
{
    unsigned int VAR_9, VAR_10;
    const unsigned char *VAR_11;
    int VAR_12 = VAR_2;




    for (VAR_9 = 0; VAR_9 < VAR_6;) {
        for (VAR_10 = 0; VAR_10 < VAR_8;) {
            if (VAR_5[VAR_9] == VAR_7[VAR_10] &&
                FUNC_0(&VAR_5[VAR_9 + 1], &VAR_7[VAR_10 + 1], VAR_5[VAR_9]) == 0) {

                VAR_11 = &VAR_5[VAR_9];
                VAR_12 = VAR_0;
                goto found;
            }
            VAR_10 += VAR_7[VAR_10];
            VAR_10++;
        }
        VAR_9 += VAR_5[VAR_9];
        VAR_9++;
    }


    VAR_11 = VAR_7;
    VAR_12 = VAR_1;

 found:
    *VAR_3 = (unsigned char *)VAR_11 + 1;
    *VAR_4 = VAR_11[0];
    return VAR_12;
}
