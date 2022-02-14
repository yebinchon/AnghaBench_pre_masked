
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int init; int num; long shutdown; int flags; scalar_t__ ptr; } ;
struct TYPE_12__ {char* param_hostname; char* param_service; long connect_family; int connect_mode; int * info_callback; int * addr_iter; int * addr_first; int state; } ;
typedef int BIO_info_cb ;
typedef TYPE_1__ BIO_CONNECT ;
typedef int BIO_ADDR ;
typedef TYPE_2__ BIO ;




 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int const*,int) ;
 char* FUNC_4 (int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_5 (void*,char**,char**,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 char* FUNC_11 (void*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static long FUNC_15(BIO *VAR_6, int VAR_7, long VAR_8, void *VAR_9)
{
    BIO *VAR_10;
    int *VAR_11;
    const char **VAR_12 = ((void*)0);
    long VAR_13 = 1;
    BIO_CONNECT *VAR_14;

    VAR_14 = (BIO_CONNECT *)VAR_6->ptr;

    switch (VAR_7) {
    case 137:
        VAR_13 = 0;
        VAR_14->state = VAR_0;
        FUNC_13(VAR_6);
        FUNC_2(VAR_14->addr_first);
        VAR_14->addr_first = ((void*)0);
        VAR_6->flags = 0;
        break;
    case 133:

        if (VAR_14->state != VAR_1)
            VAR_13 = (long)FUNC_14(VAR_6, VAR_14);
        else
            VAR_13 = 1;
        break;
    case 132:
        if (VAR_9 != ((void*)0)) {
            VAR_12 = (const char **)VAR_9;
            if (VAR_8 == 0) {
                *VAR_12 = VAR_14->param_hostname;
            } else if (VAR_8 == 1) {
                *VAR_12 = VAR_14->param_service;
            } else if (VAR_8 == 2) {
                *VAR_12 = (const char *)FUNC_0(VAR_14->addr_iter);
            } else if (VAR_8 == 3) {
                switch (FUNC_1(VAR_14->addr_iter)) {

                case 143:
                    VAR_13 = VAR_3;
                    break;

                case 144:
                    VAR_13 = VAR_2;
                    break;
                case 0:
                    VAR_13 = VAR_14->connect_family;
                    break;
                default:
                    VAR_13 = -1;
                    break;
                }
            } else {
                VAR_13 = 0;
            }
        } else {
            VAR_13 = 0;
        }
        break;
    case 130:
        if (VAR_9 != ((void*)0)) {
            VAR_6->init = 1;
            if (VAR_8 == 0) {
                char *VAR_15 = VAR_14->param_service;




                FUNC_12(VAR_14->param_hostname);
                VAR_14->param_hostname = ((void*)0);
                VAR_13 = FUNC_5(VAR_9,
                                         &VAR_14->param_hostname,
                                         &VAR_14->param_service,
                                         VAR_4);
                if (VAR_15 != VAR_14->param_service)
                    FUNC_12(VAR_15);
            } else if (VAR_8 == 1) {
                FUNC_12(VAR_14->param_service);
                VAR_14->param_service = FUNC_11(VAR_9);
            } else if (VAR_8 == 2) {
                const BIO_ADDR *VAR_16 = (const BIO_ADDR *)VAR_9;
                if (VAR_13) {
                    VAR_14->param_hostname = FUNC_3(VAR_16, 1);
                    VAR_14->param_service = FUNC_4(VAR_16, 1);
                    FUNC_2(VAR_14->addr_first);
                    VAR_14->addr_first = ((void*)0);
                    VAR_14->addr_iter = ((void*)0);
                }
            } else if (VAR_8 == 3) {
                VAR_14->connect_family = *(int *)VAR_9;
            } else {
                VAR_13 = 0;
            }
        }
        break;
    case 128:
        if (VAR_8 != 0)
            VAR_14->connect_mode |= VAR_5;
        else
            VAR_14->connect_mode &= ~VAR_5;
        break;
    case 129:
        VAR_14->connect_mode = (int)VAR_8;
        break;
    case 131:
        if (VAR_6->init) {
            VAR_11 = (int *)VAR_9;
            if (VAR_11 != ((void*)0))
                *VAR_11 = VAR_6->num;
            VAR_13 = VAR_6->num;
        } else
            VAR_13 = -1;
        break;
    case 139:
        VAR_13 = VAR_6->shutdown;
        break;
    case 135:
        VAR_6->shutdown = (int)VAR_8;
        break;
    case 138:
    case 134:
        VAR_13 = 0;
        break;
    case 141:
        break;
    case 142:
        {
            VAR_10 = (BIO *)VAR_9;
            if (VAR_14->param_hostname)
                FUNC_6(VAR_10, VAR_14->param_hostname);
            if (VAR_14->param_service)
                FUNC_9(VAR_10, VAR_14->param_service);
            FUNC_7(VAR_10, VAR_14->connect_family);
            FUNC_8(VAR_10, VAR_14->connect_mode);




            (void)FUNC_10(VAR_10, VAR_14->info_callback);
        }
        break;
    case 136:
        VAR_13 = 0;
        break;
    case 140:
        {
            BIO_info_cb **VAR_17;

            VAR_17 = (BIO_info_cb **)VAR_9;
            *VAR_17 = VAR_14->info_callback;
        }
        break;
    default:
        VAR_13 = 0;
        break;
    }
    return VAR_13;
}
