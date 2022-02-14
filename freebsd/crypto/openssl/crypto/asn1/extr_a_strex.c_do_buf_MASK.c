
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utfbuf ;
typedef int char_io ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int FUNC_1 (unsigned char*,int,unsigned long*) ;
 int FUNC_2 (unsigned char*,int,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned short,char*,int *,void*) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_8, int VAR_9,
                  int VAR_10, unsigned short VAR_11, char *VAR_12, char_io *VAR_13,
                  void *VAR_14)
{
    int VAR_15, VAR_16, VAR_17, VAR_18;
    unsigned short VAR_19;
    unsigned char *VAR_20, *VAR_21;
    unsigned long VAR_22;

    VAR_20 = VAR_8;
    VAR_21 = VAR_8 + VAR_9;
    VAR_16 = 0;
    VAR_18 = VAR_10 & VAR_5;

    switch (VAR_18) {
    case 4:
        if (VAR_9 & 3) {
            FUNC_0(VAR_0, VAR_2);
            return -1;
        }
        break;
    case 2:
        if (VAR_9 & 1) {
            FUNC_0(VAR_0, VAR_1);
            return -1;
        }
        break;
    default:
        break;
    }

    while (VAR_20 != VAR_21) {
        if (VAR_20 == VAR_8 && VAR_11 & VAR_3)
            VAR_19 = VAR_6;
        else
            VAR_19 = 0;

        switch (VAR_18) {
        case 4:
            VAR_22 = ((unsigned long)*VAR_20++) << 24;
            VAR_22 |= ((unsigned long)*VAR_20++) << 16;
            VAR_22 |= ((unsigned long)*VAR_20++) << 8;
            VAR_22 |= *VAR_20++;
            break;

        case 2:
            VAR_22 = ((unsigned long)*VAR_20++) << 8;
            VAR_22 |= *VAR_20++;
            break;

        case 1:
            VAR_22 = *VAR_20++;
            break;

        case 0:
            VAR_15 = FUNC_1(VAR_20, VAR_9, &VAR_22);
            if (VAR_15 < 0)
                return -1;
            VAR_9 -= VAR_15;
            VAR_20 += VAR_15;
            break;
        default:
            return -1;
        }
        if (VAR_20 == VAR_21 && VAR_11 & VAR_3)
            VAR_19 = VAR_7;
        if (VAR_10 & VAR_4) {
            unsigned char VAR_23[6];
            int VAR_24;
            VAR_24 = FUNC_2(VAR_23, sizeof(VAR_23), VAR_22);
            for (VAR_15 = 0; VAR_15 < VAR_24; VAR_15++) {






                VAR_17 = FUNC_3(VAR_23[VAR_15], VAR_11 | VAR_19, VAR_12,
                                  VAR_13, VAR_14);
                if (VAR_17 < 0)
                    return -1;
                VAR_16 += VAR_17;
            }
        } else {
            VAR_17 = FUNC_3(VAR_22, VAR_11 | VAR_19, VAR_12,
                              VAR_13, VAR_14);
            if (VAR_17 < 0)
                return -1;
            VAR_16 += VAR_17;
        }
    }
    return VAR_16;
}
