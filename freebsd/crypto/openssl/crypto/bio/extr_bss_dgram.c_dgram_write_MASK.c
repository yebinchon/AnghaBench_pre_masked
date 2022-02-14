
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int _errno; int peer; scalar_t__ connected; } ;
typedef TYPE_1__ bio_dgram_data ;
struct TYPE_7__ {int num; scalar_t__ ptr; } ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char const*,int,int ,int ,int) ;
 int FUNC_8 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_9(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3;
    bio_dgram_data *VAR_4 = (bio_dgram_data *)VAR_0->ptr;
    FUNC_5();

    if (VAR_4->connected)
        VAR_3 = FUNC_8(VAR_0->num, VAR_1, VAR_2);
    else {
        int VAR_5 = FUNC_1(&VAR_4->peer);

        VAR_3 = FUNC_7(VAR_0->num, VAR_1, VAR_2, 0,
                     FUNC_0(&VAR_4->peer), VAR_5);
    }

    FUNC_2(VAR_0);
    if (VAR_3 <= 0) {
        if (FUNC_3(VAR_3)) {
            FUNC_4(VAR_0);
            VAR_4->_errno = FUNC_6();
        }
    }
    return VAR_3;
}
