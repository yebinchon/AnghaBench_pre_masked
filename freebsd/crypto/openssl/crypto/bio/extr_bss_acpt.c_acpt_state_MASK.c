
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


union BIO_sock_info_u {int * addr; } ;
struct TYPE_17__ {int num; int * next_bio; int retry_reason; } ;
struct TYPE_16__ {int state; int accept_sock; int cache_peer_addr; int * cache_peer_serv; int * cache_peer_name; int * bio_chain; int accepted_mode; int cache_accepting_addr; int * cache_accepting_serv; int * cache_accepting_name; int bind_mode; int * addr_iter; int * param_serv; int * param_addr; int * addr_first; int accept_family; } ;
typedef TYPE_1__ BIO_ACCEPT ;
typedef TYPE_2__ BIO ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,int) ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int,int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int) ;
 TYPE_2__* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (int *,int *,int ,int,int ,int **) ;
 TYPE_2__* FUNC_15 (int,int ) ;
 int * FUNC_16 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int,int ,union BIO_sock_info_u*) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ,int ,int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int,char*,int *,char*,int *) ;
 scalar_t__ VAR_13 ;
 int FUNC_25 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 () ;

__attribute__((used)) static int FUNC_28(BIO *VAR_16, BIO_ACCEPT *VAR_17)
{
    BIO *VAR_18 = ((void*)0), *VAR_19;
    int VAR_20 = -1, VAR_21 = -1;

    for (;;) {
        switch (VAR_17->state) {
        case 135:
            if (VAR_17->param_addr == ((void*)0) && VAR_17->param_serv == ((void*)0)) {
                FUNC_23(VAR_4, VAR_8);
                FUNC_24(4,
                                   "hostname=", VAR_17->param_addr,
                                   " service=", VAR_17->param_serv);
                goto exit_loop;
            }





            FUNC_25(VAR_17->cache_accepting_name);
            VAR_17->cache_accepting_name = ((void*)0);
            FUNC_25(VAR_17->cache_accepting_serv);
            VAR_17->cache_accepting_serv = ((void*)0);
            FUNC_25(VAR_17->cache_peer_name);
            VAR_17->cache_peer_name = ((void*)0);
            FUNC_25(VAR_17->cache_peer_serv);
            VAR_17->cache_peer_serv = ((void*)0);

            VAR_17->state = 133;
            break;

        case 133:
            {
                int VAR_22 = VAR_2;
                switch (VAR_17->accept_family) {
                case 128:
                    if (1) {







                        FUNC_23(VAR_4, VAR_10);
                        goto exit_loop;
                    }
                    break;
                case 129:
                    VAR_22 = VAR_0;
                    break;
                case 130:
                    VAR_22 = VAR_2;
                    break;
                default:
                    FUNC_23(VAR_4, VAR_11);
                    goto exit_loop;
                }
                if (FUNC_14(VAR_17->param_addr, VAR_17->param_serv, VAR_5,
                               VAR_22, VAR_14, &VAR_17->addr_first) == 0)
                    goto exit_loop;
            }
            if (VAR_17->addr_first == ((void*)0)) {
                FUNC_23(VAR_4, VAR_7);
                goto exit_loop;
            }



            VAR_17->addr_iter = VAR_17->addr_first;
            VAR_17->state = 134;
            break;

        case 134:
            VAR_21 = FUNC_22(FUNC_1(VAR_17->addr_iter),
                             FUNC_3(VAR_17->addr_iter),
                             FUNC_2(VAR_17->addr_iter), 0);
            if (VAR_21 == (int)VAR_13) {
                FUNC_26(VAR_15, FUNC_27());
                FUNC_24(4,
                                   "hostname=", VAR_17->param_addr,
                                   " service=", VAR_17->param_serv);
                FUNC_23(VAR_4, VAR_9);
                goto exit_loop;
            }
            VAR_17->accept_sock = VAR_21;
            VAR_16->num = VAR_21;
            VAR_17->state = 132;
            break;

        case 132:
            {
                if (!FUNC_13(VAR_17->accept_sock,
                                FUNC_0(VAR_17->addr_iter),
                                VAR_17->bind_mode)) {
                    FUNC_8(VAR_17->accept_sock);
                    goto exit_loop;
                }
            }

            {
                union BIO_sock_info_u VAR_23;

                VAR_23.addr = &VAR_17->cache_accepting_addr;
                if (!FUNC_20(VAR_17->accept_sock, VAR_12,
                                   &VAR_23)) {
                    FUNC_8(VAR_17->accept_sock);
                    goto exit_loop;
                }
            }

            VAR_17->cache_accepting_name =
                FUNC_4(&VAR_17->cache_accepting_addr, 1);
            VAR_17->cache_accepting_serv =
                FUNC_5(&VAR_17->cache_accepting_addr, 1);
            VAR_17->state = 136;
            VAR_20 = -1;
            VAR_21 = 1;
            goto end;

        case 136:
            if (VAR_16->next_bio != ((void*)0)) {
                VAR_17->state = 131;
                break;
            }
            FUNC_7(VAR_16);
            VAR_16->retry_reason = 0;

            FUNC_25(VAR_17->cache_peer_name);
            VAR_17->cache_peer_name = ((void*)0);
            FUNC_25(VAR_17->cache_peer_serv);
            VAR_17->cache_peer_serv = ((void*)0);

            VAR_20 = FUNC_6(VAR_17->accept_sock, &VAR_17->cache_peer_addr,
                              VAR_17->accepted_mode);




            if (VAR_20 < 0) {
                if (FUNC_21(VAR_20)) {
                    FUNC_19(VAR_16);
                    VAR_16->retry_reason = VAR_6;
                    goto end;
                }
            }


            if (VAR_20 < 0) {
                VAR_21 = VAR_20;
                goto exit_loop;
            }

            VAR_18 = FUNC_15(VAR_20, VAR_3);
            if (VAR_18 == ((void*)0))
                goto exit_loop;

            FUNC_17(VAR_18, FUNC_11(VAR_16));
            FUNC_18(VAR_18, FUNC_12(VAR_16));





            if (VAR_17->bio_chain != ((void*)0)) {
                if ((VAR_19 = FUNC_9(VAR_17->bio_chain)) == ((void*)0))
                    goto exit_loop;
                if (!FUNC_16(VAR_19, VAR_18))
                    goto exit_loop;
                VAR_18 = VAR_19;
            }
            if (FUNC_16(VAR_16, VAR_18) == ((void*)0))
                goto exit_loop;

            VAR_17->cache_peer_name =
                FUNC_4(&VAR_17->cache_peer_addr, 1);
            VAR_17->cache_peer_serv =
                FUNC_5(&VAR_17->cache_peer_addr, 1);
            VAR_17->state = 131;
            VAR_18 = ((void*)0);
            VAR_21 = 1;
            goto end;

        case 131:
            if (VAR_16->next_bio == ((void*)0)) {
                VAR_17->state = 136;
                break;
            }
            VAR_21 = 1;
            goto end;

        default:
            VAR_21 = 0;
            goto end;
        }
    }

  exit_loop:
    if (VAR_18 != ((void*)0))
        FUNC_10(VAR_18);
    else if (VAR_20 >= 0)
        FUNC_8(VAR_20);
  end:
    return VAR_21;
}
