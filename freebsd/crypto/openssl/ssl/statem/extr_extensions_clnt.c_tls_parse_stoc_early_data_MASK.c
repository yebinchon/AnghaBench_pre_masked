
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_9__ {int early_data; int early_data_ok; } ;
struct TYPE_10__ {TYPE_3__ ext; int hit; TYPE_2__* session; } ;
struct TYPE_7__ {unsigned long max_early_data; } ;
struct TYPE_8__ {TYPE_1__ ext; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;


 int FUNC_0 (int *,unsigned long*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;

int FUNC_3(SSL *VAR_7, PACKET *VAR_8, unsigned int VAR_9,
                              X509 *VAR_10, size_t VAR_11)
{
    if (VAR_9 == VAR_3) {
        unsigned long VAR_12;

        if (!FUNC_0(VAR_8, &VAR_12)
                || FUNC_1(VAR_8) != 0) {
            FUNC_2(VAR_7, VAR_0, VAR_4,
                     VAR_6);
            return 0;
        }

        VAR_7->session->ext.max_early_data = VAR_12;

        return 1;
    }

    if (FUNC_1(VAR_8) != 0) {
        FUNC_2(VAR_7, VAR_0, VAR_4,
                 VAR_5);
        return 0;
    }

    if (!VAR_7->ext.early_data_ok
            || !VAR_7->hit) {





        FUNC_2(VAR_7, VAR_1, VAR_4,
                 VAR_5);
        return 0;
    }

    VAR_7->ext.early_data = VAR_2;

    return 1;
}
