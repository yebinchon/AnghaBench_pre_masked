
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int utmp2 ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int size; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__*,int*,unsigned char const**,int) ;
 int FUNC_2 (char*,scalar_t__*,int) ;
 int FUNC_3 (int **,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_4(ASN1_VALUE **VAR_8, const unsigned char *VAR_9, int VAR_10,
                    int VAR_11, char *VAR_12, const ASN1_ITEM *VAR_13)
{
    uint64_t VAR_14 = 0;
    uint32_t VAR_15 = 0;
    char *VAR_16;
    int VAR_17 = 0;

    if (*VAR_8 == ((void*)0) && !FUNC_3(VAR_8, VAR_13))
        return 0;

    VAR_16 = (char *)*VAR_8;







    if (VAR_10 == 0)
        goto long_compat;

    if (!FUNC_1(&VAR_14, &VAR_17, &VAR_9, VAR_10))
        return 0;
    if ((VAR_13->size & VAR_6) == 0 && VAR_17) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }
    if (VAR_17) {
        if (VAR_14 > VAR_0) {
            FUNC_0(VAR_1, VAR_4);
            return 0;
        }
        VAR_14 = 0 - VAR_14;
    } else {
        if (((VAR_13->size & VAR_6) != 0 && VAR_14 > VAR_5)
            || ((VAR_13->size & VAR_6) == 0 && VAR_14 > VAR_7)) {
            FUNC_0(VAR_1, VAR_3);
            return 0;
        }
    }

 long_compat:
    VAR_15 = (uint32_t)VAR_14;
    FUNC_2(VAR_16, &VAR_15, sizeof(VAR_15));
    return 1;
}
