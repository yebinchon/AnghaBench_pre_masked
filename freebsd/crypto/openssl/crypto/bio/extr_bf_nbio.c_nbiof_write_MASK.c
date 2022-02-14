
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * next_bio; scalar_t__ ptr; } ;
struct TYPE_7__ {int lwn; } ;
typedef TYPE_1__ NBIO_TEST ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char const*,int) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
    NBIO_TEST *VAR_3;
    int VAR_4 = 0;
    int VAR_5;
    unsigned char VAR_6;

    if ((VAR_1 == ((void*)0)) || (VAR_2 <= 0))
        return 0;
    if (VAR_0->next_bio == ((void*)0))
        return 0;
    VAR_3 = (NBIO_TEST *)VAR_0->ptr;

    FUNC_0(VAR_0);

    if (VAR_3->lwn > 0) {
        VAR_5 = VAR_3->lwn;
        VAR_3->lwn = 0;
    } else {
        if (FUNC_4(&VAR_6, 1) <= 0)
            return -1;
        VAR_5 = (VAR_6 & 7);
    }

    if (VAR_2 > VAR_5)
        VAR_2 = VAR_5;

    if (VAR_5 == 0) {
        VAR_4 = -1;
        FUNC_2(VAR_0);
    } else {
        VAR_4 = FUNC_3(VAR_0->next_bio, VAR_1, VAR_2);
        if (VAR_4 < 0) {
            FUNC_1(VAR_0);
            VAR_3->lwn = VAR_2;
        }
    }
    return VAR_4;
}
