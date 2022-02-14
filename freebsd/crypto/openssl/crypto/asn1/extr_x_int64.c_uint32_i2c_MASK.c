
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int utmp ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {int size; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (scalar_t__*,char*,int) ;

__attribute__((used)) static int FUNC_2(ASN1_VALUE **VAR_2, unsigned char *VAR_3, int *VAR_4,
                    const ASN1_ITEM *VAR_5)
{
    uint32_t VAR_6;
    int VAR_7 = 0;

    char *VAR_8 = (char *)*VAR_2;


    FUNC_1(&VAR_6, VAR_8, sizeof(VAR_6));

    if ((VAR_5->size & VAR_1) == VAR_1
        && VAR_6 == 0)
        return -1;
    if ((VAR_5->size & VAR_0) == VAR_0
        && (int32_t)VAR_6 < 0) {

        VAR_6 = 0 - VAR_6;
        VAR_7 = 1;
    }

    return FUNC_0(VAR_3, (uint64_t)VAR_6, VAR_7);
}
