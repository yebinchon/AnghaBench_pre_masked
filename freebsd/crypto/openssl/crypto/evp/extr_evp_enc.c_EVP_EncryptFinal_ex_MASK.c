
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int buf_len; int flags; int* buf; TYPE_1__* cipher; int encrypt; } ;
struct TYPE_6__ {int flags; int (* do_cipher ) (TYPE_2__*,unsigned char*,int*,unsigned int) ;unsigned int block_size; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int*,unsigned int) ;

int FUNC_4(EVP_CIPHER_CTX *VAR_5, unsigned char *VAR_6, int *VAR_7)
{
    int VAR_8, VAR_9;
    unsigned int VAR_10, VAR_11, VAR_12;


    if (!VAR_5->encrypt) {
        FUNC_0(VAR_2, VAR_4);
        return 0;
    }

    if (VAR_5->cipher->flags & VAR_0) {
        VAR_9 = VAR_5->cipher->do_cipher(VAR_5, VAR_6, ((void*)0), 0);
        if (VAR_9 < 0)
            return 0;
        else
            *VAR_7 = VAR_9;
        return 1;
    }

    VAR_11 = VAR_5->cipher->block_size;
    FUNC_1(VAR_11 <= sizeof(VAR_5->buf));
    if (VAR_11 == 1) {
        *VAR_7 = 0;
        return 1;
    }
    VAR_12 = VAR_5->buf_len;
    if (VAR_5->flags & VAR_1) {
        if (VAR_12) {
            FUNC_0(VAR_2,
                   VAR_3);
            return 0;
        }
        *VAR_7 = 0;
        return 1;
    }

    VAR_8 = VAR_11 - VAR_12;
    for (VAR_10 = VAR_12; VAR_10 < VAR_11; VAR_10++)
        VAR_5->buf[VAR_10] = VAR_8;
    VAR_9 = VAR_5->cipher->do_cipher(VAR_5, VAR_6, VAR_5->buf, VAR_11);

    if (VAR_9)
        *VAR_7 = VAR_11;

    return VAR_9;
}
