
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int* final; TYPE_1__* cipher; int final_used; scalar_t__ buf_len; scalar_t__ encrypt; } ;
struct TYPE_5__ {int flags; int (* do_cipher ) (TYPE_2__*,unsigned char*,int *,int ) ;unsigned int block_size; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int *,int ) ;

int FUNC_3(EVP_CIPHER_CTX *VAR_7, unsigned char *VAR_8, int *VAR_9)
{
    int VAR_10, VAR_11;
    unsigned int VAR_12;


    if (VAR_7->encrypt) {
        FUNC_0(VAR_2, VAR_5);
        return 0;
    }

    *VAR_9 = 0;

    if (VAR_7->cipher->flags & VAR_0) {
        VAR_10 = VAR_7->cipher->do_cipher(VAR_7, VAR_8, ((void*)0), 0);
        if (VAR_10 < 0)
            return 0;
        else
            *VAR_9 = VAR_10;
        return 1;
    }

    VAR_12 = VAR_7->cipher->block_size;
    if (VAR_7->flags & VAR_1) {
        if (VAR_7->buf_len) {
            FUNC_0(VAR_2,
                   VAR_4);
            return 0;
        }
        *VAR_9 = 0;
        return 1;
    }
    if (VAR_12 > 1) {
        if (VAR_7->buf_len || !VAR_7->final_used) {
            FUNC_0(VAR_2, VAR_6);
            return 0;
        }
        FUNC_1(VAR_12 <= sizeof(VAR_7->final));





        VAR_11 = VAR_7->final[VAR_12 - 1];
        if (VAR_11 == 0 || VAR_11 > (int)VAR_12) {
            FUNC_0(VAR_2, VAR_3);
            return 0;
        }
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
            if (VAR_7->final[--VAR_12] != VAR_11) {
                FUNC_0(VAR_2, VAR_3);
                return 0;
            }
        }
        VAR_11 = VAR_7->cipher->block_size - VAR_11;
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
            VAR_8[VAR_10] = VAR_7->final[VAR_10];
        *VAR_9 = VAR_11;
    } else
        *VAR_9 = 0;
    return 1;
}
