
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {scalar_t__ server; int options; TYPE_3__* s3; } ;
struct TYPE_11__ {TYPE_1__* new_cipher; } ;
struct TYPE_12__ {TYPE_2__ tmp; } ;
struct TYPE_10__ {unsigned long id; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int const**,size_t*) ;
 int FUNC_1 (TYPE_4__*,int const**,size_t*) ;
 int FUNC_2 (int,int const*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int,int ) ;

uint16_t FUNC_5(SSL *VAR_6, int VAR_7)
{
    const uint16_t *VAR_8, *VAR_9;
    size_t VAR_10, VAR_11, VAR_12;
    int VAR_13;


    if (VAR_6->server == 0)
        return 0;
    if (VAR_7 == -2) {
        if (FUNC_3(VAR_6)) {




            unsigned long VAR_14 = VAR_6->s3->tmp.new_cipher->id;

            if (VAR_14 == VAR_2)
                return VAR_4;
            if (VAR_14 == VAR_3)
                return VAR_5;

            return 0;
        }

        VAR_7 = 0;
    }




    if (VAR_6->options & VAR_0) {
        FUNC_1(VAR_6, &VAR_8, &VAR_10);
        FUNC_0(VAR_6, &VAR_9, &VAR_11);
    } else {
        FUNC_0(VAR_6, &VAR_8, &VAR_10);
        FUNC_1(VAR_6, &VAR_9, &VAR_11);
    }

    for (VAR_13 = 0, VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
        uint16_t VAR_15 = VAR_8[VAR_12];

        if (!FUNC_2(VAR_15, VAR_9, VAR_11)
            || !FUNC_4(VAR_6, VAR_15, VAR_1))
                    continue;
        if (VAR_7 == VAR_13)
            return VAR_15;
         VAR_13++;
    }
    if (VAR_7 == -1)
        return VAR_13;

    return 0;
}
