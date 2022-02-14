
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {unsigned char* buf; size_t left; size_t offset; size_t len; } ;
struct TYPE_9__ {unsigned char* packet; size_t packet_length; int read_ahead; TYPE_2__ rbuf; } ;
struct TYPE_11__ {int mode; int rwstate; TYPE_1__ rlayer; int * rbio; } ;
typedef TYPE_2__ SSL3_BUFFER ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

int FUNC_7(SSL *VAR_10, size_t VAR_11, size_t VAR_12, int VAR_13, int VAR_14,
                size_t *VAR_15)
{
    size_t VAR_16, VAR_17, VAR_18 = 0;
    unsigned char *VAR_19;
    SSL3_BUFFER *VAR_20;

    if (VAR_11 == 0)
        return 0;

    VAR_20 = &VAR_10->rlayer.rbuf;
    if (VAR_20->buf == ((void*)0))
        if (!FUNC_6(VAR_10)) {

            return -1;
        }

    VAR_17 = VAR_20->left;





    if (!VAR_13) {

        if (VAR_17 == 0)
            VAR_20->offset = VAR_18;
        else if (VAR_18 != 0 && VAR_17 >= VAR_3) {




            VAR_19 = VAR_20->buf + VAR_20->offset;
            if (VAR_19[0] == VAR_2
                && (VAR_19[3] << 8 | VAR_19[4]) >= 128) {







                FUNC_4(VAR_20->buf + VAR_18, VAR_19, VAR_17);
                VAR_20->offset = VAR_18;
            }
        }
        VAR_10->rlayer.packet = VAR_20->buf + VAR_20->offset;
        VAR_10->rlayer.packet_length = 0;

    }

    VAR_16 = VAR_10->rlayer.packet_length;
    VAR_19 = VAR_20->buf + VAR_18;




    if (VAR_10->rlayer.packet != VAR_19 && VAR_14 == 1) {
        FUNC_4(VAR_19, VAR_10->rlayer.packet, VAR_16 + VAR_17);
        VAR_10->rlayer.packet = VAR_19;
        VAR_20->offset = VAR_16 + VAR_18;
    }






    if (FUNC_1(VAR_10)) {
        if (VAR_17 == 0 && VAR_13)
            return 0;
        if (VAR_17 > 0 && VAR_11 > VAR_17)
            VAR_11 = VAR_17;
    }


    if (VAR_17 >= VAR_11) {
        VAR_10->rlayer.packet_length += VAR_11;
        VAR_20->left = VAR_17 - VAR_11;
        VAR_20->offset += VAR_11;
        *VAR_15 = VAR_11;
        return 1;
    }



    if (VAR_11 > VAR_20->len - VAR_20->offset) {

        FUNC_2(VAR_10, VAR_4, VAR_5,
                 VAR_0);
        return -1;
    }


    if (!VAR_10->rlayer.read_ahead && !FUNC_1(VAR_10))

        VAR_12 = VAR_11;
    else {
        if (VAR_12 < VAR_11)
            VAR_12 = VAR_11;
        if (VAR_12 > VAR_20->len - VAR_20->offset)
            VAR_12 = VAR_20->len - VAR_20->offset;
    }

    while (VAR_17 < VAR_11) {
        size_t VAR_21 = 0;
        int VAR_22;







        FUNC_3();
        if (VAR_10->rbio != ((void*)0)) {
            VAR_10->rwstate = VAR_8;

            VAR_22 = FUNC_0(VAR_10->rbio, VAR_19 + VAR_16 + VAR_17, VAR_12 - VAR_17);
            if (VAR_22 >= 0)
                VAR_21 = VAR_22;
        } else {
            FUNC_2(VAR_10, VAR_4, VAR_5,
                     VAR_9);
            VAR_22 = -1;
        }

        if (VAR_22 <= 0) {
            VAR_20->left = VAR_17;
            if (VAR_10->mode & VAR_6 && !FUNC_1(VAR_10))
                if (VAR_16 + VAR_17 == 0)
                    FUNC_5(VAR_10);
            return VAR_22;
        }
        VAR_17 += VAR_21;





        if (FUNC_1(VAR_10)) {
            if (VAR_11 > VAR_17)
                VAR_11 = VAR_17;
        }
    }


    VAR_20->offset += VAR_11;
    VAR_20->left = VAR_17 - VAR_11;
    VAR_10->rlayer.packet_length += VAR_11;
    VAR_10->rwstate = VAR_7;
    *VAR_15 = VAR_11;
    return 1;
}
