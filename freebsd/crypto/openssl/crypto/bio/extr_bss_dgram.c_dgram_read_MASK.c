
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int socklen_t ;
typedef int peer ;
struct TYPE_9__ {int _errno; int connected; scalar_t__ peekmode; } ;
typedef TYPE_1__ bio_dgram_data ;
struct TYPE_10__ {int num; scalar_t__ ptr; } ;
typedef int BIO_ADDR ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ,char*,int,int,int ,int*) ;

__attribute__((used)) static int FUNC_11(BIO *VAR_2, char *VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    bio_dgram_data *VAR_6 = (bio_dgram_data *)VAR_2->ptr;
    int VAR_7 = 0;

    BIO_ADDR VAR_8;
    socklen_t VAR_9 = sizeof(VAR_8);

    if (VAR_3 != ((void*)0)) {
        FUNC_5();
        FUNC_9(&VAR_8, 0, sizeof(VAR_8));
        FUNC_6(VAR_2);
        if (VAR_6->peekmode)
            VAR_7 = VAR_1;
        VAR_5 = FUNC_10(VAR_2->num, VAR_3, VAR_4, VAR_7,
                       FUNC_0(&VAR_8), &VAR_9);

        if (!VAR_6->connected && VAR_5 >= 0)
            FUNC_2(VAR_2, VAR_0, 0, &VAR_8);

        FUNC_1(VAR_2);
        if (VAR_5 < 0) {
            if (FUNC_3(VAR_5)) {
                FUNC_4(VAR_2);
                VAR_6->_errno = FUNC_8();
            }
        }

        FUNC_7(VAR_2);
    }
    return VAR_5;
}
