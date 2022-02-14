
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valid; int ret; long plen; int pclass; int ptag; int hdrlen; } ;
typedef TYPE_1__ ASN1_TLC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char const**,long*,int*,int*,long) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(long *VAR_5, int *VAR_6, unsigned char *VAR_7,
                           char *VAR_8, char *VAR_9,
                           const unsigned char **VAR_10, long VAR_11,
                           int VAR_12, int VAR_13, char VAR_14, ASN1_TLC *VAR_15)
{
    int VAR_16;
    int VAR_17, VAR_18;
    long VAR_19;
    const unsigned char *VAR_20, *VAR_21;
    VAR_20 = *VAR_10;
    VAR_21 = VAR_20;

    if (VAR_15 && VAR_15->valid) {
        VAR_16 = VAR_15->ret;
        VAR_19 = VAR_15->plen;
        VAR_18 = VAR_15->pclass;
        VAR_17 = VAR_15->ptag;
        VAR_20 += VAR_15->hdrlen;
    } else {
        VAR_16 = FUNC_0(&VAR_20, &VAR_19, &VAR_17, &VAR_18, VAR_11);
        if (VAR_15) {
            VAR_15->ret = VAR_16;
            VAR_15->plen = VAR_19;
            VAR_15->pclass = VAR_18;
            VAR_15->ptag = VAR_17;
            VAR_15->hdrlen = VAR_20 - VAR_21;
            VAR_15->valid = 1;




            if (!(VAR_16 & 0x81) && ((VAR_19 + VAR_15->hdrlen) > VAR_11)) {
                FUNC_1(VAR_0, VAR_2);
                FUNC_2(VAR_15);
                return 0;
            }
        }
    }

    if (VAR_16 & 0x80) {
        FUNC_1(VAR_0, VAR_1);
        FUNC_2(VAR_15);
        return 0;
    }
    if (VAR_12 >= 0) {
        if ((VAR_12 != VAR_17) || (VAR_13 != VAR_18)) {



            if (VAR_14)
                return -1;
            FUNC_2(VAR_15);
            FUNC_1(VAR_0, VAR_3);
            return 0;
        }




        FUNC_2(VAR_15);
    }

    if (VAR_16 & 1)
        VAR_19 = VAR_11 - (VAR_20 - VAR_21);

    if (VAR_8)
        *VAR_8 = VAR_16 & 1;

    if (VAR_9)
        *VAR_9 = VAR_16 & VAR_4;

    if (VAR_5)
        *VAR_5 = VAR_19;

    if (VAR_7)
        *VAR_7 = VAR_18;

    if (VAR_6)
        *VAR_6 = VAR_17;

    *VAR_10 = VAR_20;
    return 1;
}
