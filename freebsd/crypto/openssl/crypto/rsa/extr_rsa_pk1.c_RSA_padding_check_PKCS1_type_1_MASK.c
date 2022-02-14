
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_2(unsigned char *VAR_7, int VAR_8,
                                   const unsigned char *VAR_9, int VAR_10,
                                   int VAR_11)
{
    int VAR_12, VAR_13;
    const unsigned char *VAR_14;

    VAR_14 = VAR_9;
    if (VAR_11 < 11)
        return -1;


    if (VAR_11 == VAR_10) {
        if ((*VAR_14++) != 0x00) {
            FUNC_0(VAR_0,
                   VAR_5);
            return -1;
        }
        VAR_10--;
    }

    if ((VAR_11 != (VAR_10 + 1)) || (*(VAR_14++) != 0x01)) {
        FUNC_0(VAR_0,
               VAR_3);
        return -1;
    }


    VAR_13 = VAR_10 - 1;
    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
        if (*VAR_14 != 0xff) {
            if (*VAR_14 == 0) {
                VAR_14++;
                break;
            } else {
                FUNC_0(VAR_0,
                       VAR_1);
                return -1;
            }
        }
        VAR_14++;
    }

    if (VAR_12 == VAR_13) {
        FUNC_0(VAR_0,
               VAR_6);
        return -1;
    }

    if (VAR_12 < 8) {
        FUNC_0(VAR_0,
               VAR_2);
        return -1;
    }
    VAR_12++;
    VAR_13 -= VAR_12;
    if (VAR_13 > VAR_8) {
        FUNC_0(VAR_0, VAR_4);
        return -1;
    }
    FUNC_1(VAR_7, VAR_14, (unsigned int)VAR_13);

    return VAR_13;
}
