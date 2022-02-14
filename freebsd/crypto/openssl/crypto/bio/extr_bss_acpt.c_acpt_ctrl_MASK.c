
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int init; int num; int shutdown; int flags; scalar_t__ ptr; } ;
struct TYPE_8__ {char* param_serv; char* param_addr; int bind_mode; int accept_family; int accepted_mode; int accept_sock; char* cache_accepting_name; char* cache_accepting_serv; char* cache_peer_name; char* cache_peer_serv; int addr_iter; int state; TYPE_2__* bio_chain; int * addr_first; } ;
typedef TYPE_1__ BIO_ACCEPT ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 long FUNC_3 (void*,char**,char**,int ) ;
 char* FUNC_4 (void*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static long FUNC_8(BIO *VAR_6, int VAR_7, long VAR_8, void *VAR_9)
{
    int *VAR_10;
    long VAR_11 = 1;
    BIO_ACCEPT *VAR_12;
    char **VAR_13;

    VAR_12 = (BIO_ACCEPT *)VAR_6->ptr;

    switch (VAR_7) {
    case 138:
        VAR_11 = 0;
        VAR_12->state = VAR_1;
        FUNC_6(VAR_6);
        FUNC_1(VAR_12->addr_first);
        VAR_12->addr_first = ((void*)0);
        VAR_6->flags = 0;
        break;
    case 135:

        VAR_11 = (long)FUNC_7(VAR_6, VAR_12);
        break;
    case 131:
        if (VAR_9 != ((void*)0)) {
            if (VAR_8 == 0) {
                char *VAR_14 = VAR_12->param_serv;




                FUNC_5(VAR_12->param_addr);
                VAR_12->param_addr = ((void*)0);
                VAR_11 = FUNC_3(VAR_9,
                                         &VAR_12->param_addr,
                                         &VAR_12->param_serv,
                                         VAR_4);
                if (VAR_14 != VAR_12->param_serv)
                    FUNC_5(VAR_14);
                VAR_6->init = 1;
            } else if (VAR_8 == 1) {
                FUNC_5(VAR_12->param_serv);
                VAR_12->param_serv = FUNC_4(VAR_9);
                VAR_6->init = 1;
            } else if (VAR_8 == 2) {
                VAR_12->bind_mode |= VAR_5;
            } else if (VAR_8 == 3) {
                FUNC_2(VAR_12->bio_chain);
                VAR_12->bio_chain = (BIO *)VAR_9;
            } else if (VAR_8 == 4) {
                VAR_12->accept_family = *(int *)VAR_9;
            }
        } else {
            if (VAR_8 == 2) {
                VAR_12->bind_mode &= ~VAR_5;
            }
        }
        break;
    case 128:
        if (VAR_8 != 0)
            VAR_12->accepted_mode |= VAR_5;
        else
            VAR_12->accepted_mode &= ~VAR_5;
        break;
    case 129:
        VAR_6->num = *((int *)VAR_9);
        VAR_12->accept_sock = VAR_6->num;
        VAR_12->state = VAR_0;
        VAR_6->shutdown = (int)VAR_8;
        VAR_6->init = 1;
        break;
    case 132:
        if (VAR_6->init) {
            VAR_10 = (int *)VAR_9;
            if (VAR_10 != ((void*)0))
                *VAR_10 = VAR_12->accept_sock;
            VAR_11 = VAR_12->accept_sock;
        } else
            VAR_11 = -1;
        break;
    case 134:
        if (VAR_6->init) {
            if (VAR_8 == 0 && VAR_9 != ((void*)0)) {
                VAR_13 = (char **)VAR_9;
                *VAR_13 = VAR_12->cache_accepting_name;
            } else if (VAR_8 == 1 && VAR_9 != ((void*)0)) {
                VAR_13 = (char **)VAR_9;
                *VAR_13 = VAR_12->cache_accepting_serv;
            } else if (VAR_8 == 2 && VAR_9 != ((void*)0)) {
                VAR_13 = (char **)VAR_9;
                *VAR_13 = VAR_12->cache_peer_name;
            } else if (VAR_8 == 3 && VAR_9 != ((void*)0)) {
                VAR_13 = (char **)VAR_9;
                *VAR_13 = VAR_12->cache_peer_serv;
            } else if (VAR_8 == 4) {
                switch (FUNC_0(VAR_12->addr_iter)) {

                case 143:
                    VAR_11 = VAR_3;
                    break;

                case 144:
                    VAR_11 = VAR_2;
                    break;
                case 0:
                    VAR_11 = VAR_12->accept_family;
                    break;
                default:
                    VAR_11 = -1;
                    break;
                }
            } else
                VAR_11 = -1;
        } else
            VAR_11 = -1;
        break;
    case 140:
        VAR_11 = VAR_6->shutdown;
        break;
    case 137:
        VAR_6->shutdown = (int)VAR_8;
        break;
    case 139:
    case 136:
        VAR_11 = 0;
        break;
    case 141:
        break;
    case 130:
        VAR_12->bind_mode = (int)VAR_8;
        break;
    case 133:
        VAR_11 = (long)VAR_12->bind_mode;
        break;
    case 142:
        break;

    default:
        VAR_11 = 0;
        break;
    }
    return VAR_11;
}
