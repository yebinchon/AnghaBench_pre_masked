
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int rlayer; } ;
struct TYPE_8__ {unsigned char* buf; size_t default_len; size_t len; } ;
typedef TYPE_1__ SSL3_BUFFER ;
typedef TYPE_2__ SSL ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (size_t) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

int FUNC_6(SSL *VAR_9)
{
    unsigned char *VAR_10;
    size_t VAR_11, VAR_12 = 0, VAR_13;
    SSL3_BUFFER *VAR_14;

    VAR_14 = FUNC_1(&VAR_9->rlayer);

    if (FUNC_3(VAR_9))
        VAR_13 = VAR_0;
    else
        VAR_13 = VAR_3;





    if (VAR_14->buf == ((void*)0)) {
        VAR_11 = VAR_6
            + VAR_5 + VAR_13 + VAR_12;

        if (FUNC_5(VAR_9))
            VAR_11 += VAR_4;

        if (VAR_14->default_len > VAR_11)
            VAR_11 = VAR_14->default_len;
        if ((VAR_10 = FUNC_0(VAR_11)) == ((void*)0)) {





            FUNC_4(VAR_9, VAR_7, VAR_8,
                     VAR_1);
            return 0;
        }
        VAR_14->buf = VAR_10;
        VAR_14->len = VAR_11;
    }

    FUNC_2(&VAR_9->rlayer, &(VAR_14->buf[0]));
    return 1;
}
