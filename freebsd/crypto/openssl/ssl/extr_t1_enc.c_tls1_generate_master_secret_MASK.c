
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hash ;
struct TYPE_10__ {TYPE_2__* session; TYPE_1__* s3; } ;
struct TYPE_9__ {int flags; scalar_t__ master_key; } ;
struct TYPE_8__ {unsigned char* client_random; int * server_random; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int ,char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,unsigned char*,int,size_t*) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_3__*,int ,int ,unsigned char*,size_t,int *,int ,int *,size_t,int *,int ,unsigned char*,size_t,unsigned char*,size_t,int) ;

int FUNC_6(SSL *VAR_9, unsigned char *VAR_10, unsigned char *VAR_11,
                                size_t VAR_12, size_t *VAR_13)
{
    if (VAR_9->session->flags & VAR_3) {
        unsigned char VAR_14[VAR_0 * 2];
        size_t VAR_15;





        if (!FUNC_3(VAR_9, 1)
                || !FUNC_4(VAR_9, VAR_14, sizeof(VAR_14), &VAR_15)) {

            return 0;
        }




        if (!FUNC_5(VAR_9,
                      VAR_4,
                      VAR_5,
                      VAR_14, VAR_15,
                      ((void*)0), 0,
                      ((void*)0), 0,
                      ((void*)0), 0, VAR_11, VAR_12, VAR_10,
                      VAR_1, 1)) {

            return 0;
        }
        FUNC_1(VAR_14, VAR_15);
    } else {
        if (!FUNC_5(VAR_9,
                      VAR_6,
                      VAR_7,
                      VAR_9->s3->client_random, VAR_2,
                      ((void*)0), 0,
                      VAR_9->s3->server_random, VAR_2,
                      ((void*)0), 0, VAR_11, VAR_12, VAR_10,
                      VAR_1, 1)) {

            return 0;
        }
    }
    *VAR_13 = VAR_1;
    return 1;
}
