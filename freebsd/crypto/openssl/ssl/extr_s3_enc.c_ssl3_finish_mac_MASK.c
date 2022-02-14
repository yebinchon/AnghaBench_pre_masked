
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* s3; } ;
struct TYPE_5__ {int * handshake_dgst; int handshake_buffer; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int ,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;

int FUNC_3(SSL *VAR_5, const unsigned char *VAR_6, size_t VAR_7)
{
    int VAR_8;

    if (VAR_5->s3->handshake_dgst == ((void*)0)) {

        if (VAR_7 > VAR_1) {
            FUNC_2(VAR_5, VAR_2, VAR_3,
                     VAR_4);
            return 0;
        }
        VAR_8 = FUNC_0(VAR_5->s3->handshake_buffer, (void *)VAR_6, (int)VAR_7);
        if (VAR_8 <= 0 || VAR_8 != (int)VAR_7) {
            FUNC_2(VAR_5, VAR_2, VAR_3,
                     VAR_0);
            return 0;
        }
    } else {
        VAR_8 = FUNC_1(VAR_5->s3->handshake_dgst, VAR_6, VAR_7);
        if (!VAR_8) {
            FUNC_2(VAR_5, VAR_2, VAR_3,
                     VAR_0);
            return 0;
        }
    }
    return 1;
}
