
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; int final_used; unsigned char* final; int buf_len; TYPE_1__* cipher; scalar_t__ encrypt; } ;
struct TYPE_7__ {unsigned int block_size; int flags; int (* do_cipher ) (TYPE_2__*,unsigned char*,unsigned char const*,int) ;} ;
typedef scalar_t__ PTRDIFF_T ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int*,unsigned char const*,int) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_5 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_6 (TYPE_2__*,unsigned char*,unsigned char const*,int) ;

int FUNC_7(EVP_CIPHER_CTX *VAR_6, unsigned char *VAR_7, int *VAR_8,
                      const unsigned char *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12 = VAR_10;
    unsigned int VAR_13;


    if (VAR_6->encrypt) {
        FUNC_1(VAR_3, VAR_4);
        return 0;
    }

    VAR_13 = VAR_6->cipher->block_size;

    if (FUNC_0(VAR_6, VAR_1))
        VAR_12 = (VAR_12 + 7) / 8;

    if (VAR_6->cipher->flags & VAR_0) {
        if (VAR_13 == 1 && FUNC_4(VAR_7, VAR_9, VAR_12)) {
            FUNC_1(VAR_3, VAR_5);
            return 0;
        }

        VAR_11 = VAR_6->cipher->do_cipher(VAR_6, VAR_7, VAR_9, VAR_10);
        if (VAR_11 < 0) {
            *VAR_8 = 0;
            return 0;
        } else
            *VAR_8 = VAR_11;
        return 1;
    }

    if (VAR_10 <= 0) {
        *VAR_8 = 0;
        return VAR_10 == 0;
    }

    if (VAR_6->flags & VAR_2)
        return FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    FUNC_2(VAR_13 <= sizeof(VAR_6->final));

    if (VAR_6->final_used) {

        if (((PTRDIFF_T)VAR_7 == (PTRDIFF_T)VAR_9)
            || FUNC_4(VAR_7, VAR_9, VAR_13)) {
            FUNC_1(VAR_3, VAR_5);
            return 0;
        }
        FUNC_5(VAR_7, VAR_6->final, VAR_13);
        VAR_7 += VAR_13;
        VAR_11 = 1;
    } else
        VAR_11 = 0;

    if (!FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10))
        return 0;





    if (VAR_13 > 1 && !VAR_6->buf_len) {
        *VAR_8 -= VAR_13;
        VAR_6->final_used = 1;
        FUNC_5(VAR_6->final, &VAR_7[*VAR_8], VAR_13);
    } else
        VAR_6->final_used = 0;

    if (VAR_11)
        *VAR_8 += VAR_13;

    return 1;
}
