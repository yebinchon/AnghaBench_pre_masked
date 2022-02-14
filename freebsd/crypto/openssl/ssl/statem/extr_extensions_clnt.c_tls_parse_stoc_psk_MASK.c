
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {scalar_t__ max_early_data; } ;
struct TYPE_10__ {int early_secret; TYPE_1__ ext; } ;
struct TYPE_8__ {int tick_identity; scalar_t__ early_data_ok; } ;
struct TYPE_9__ {int hit; scalar_t__ early_data_state; TYPE_2__ ext; TYPE_6__* psksession; TYPE_6__* session; int early_secret; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(SSL *VAR_10, PACKET *VAR_11, unsigned int VAR_12, X509 *VAR_13,
                       size_t VAR_14)
{

    unsigned int VAR_15;

    if (!FUNC_0(VAR_11, &VAR_15) || FUNC_1(VAR_11) != 0) {
        FUNC_3(VAR_10, VAR_2, VAR_7,
                 VAR_9);
        return 0;
    }

    if (VAR_15 >= (unsigned int)VAR_10->ext.tick_identity) {
        FUNC_3(VAR_10, VAR_3, VAR_7,
                 VAR_8);
        return 0;
    }






    if (VAR_15 == 0 && (VAR_10->psksession == ((void*)0) || VAR_10->ext.tick_identity == 2)) {
        VAR_10->hit = 1;
        FUNC_2(VAR_10->psksession);
        VAR_10->psksession = ((void*)0);
        return 1;
    }

    if (VAR_10->psksession == ((void*)0)) {

        FUNC_3(VAR_10, VAR_4, VAR_7,
                 VAR_0);
        return 0;
    }






    if ((VAR_10->early_data_state != VAR_6
                && VAR_10->early_data_state != VAR_5)
            || VAR_10->session->ext.max_early_data > 0
            || VAR_10->psksession->ext.max_early_data == 0)
        FUNC_4(VAR_10->early_secret, VAR_10->psksession->early_secret, VAR_1);

    FUNC_2(VAR_10->session);
    VAR_10->session = VAR_10->psksession;
    VAR_10->psksession = ((void*)0);
    VAR_10->hit = 1;

    if (VAR_15 != 0)
        VAR_10->ext.early_data_ok = 0;


    return 1;
}
