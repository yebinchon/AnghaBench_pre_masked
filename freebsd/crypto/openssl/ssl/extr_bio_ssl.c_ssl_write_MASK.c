
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t renegotiate_count; size_t byte_count; unsigned long renegotiate_timeout; unsigned long last_time; int num_renegotiates; int * ssl; } ;
typedef int SSL ;
typedef TYPE_1__ BIO_SSL ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;







 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,size_t,size_t*) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(BIO *VAR_2, const char *VAR_3, size_t VAR_4, size_t *VAR_5)
{
    int VAR_6, VAR_7 = 0;
    int VAR_8 = 0;
    SSL *VAR_9;
    BIO_SSL *VAR_10;

    if (VAR_3 == ((void*)0))
        return 0;
    VAR_10 = FUNC_1(VAR_2);
    VAR_9 = VAR_10->ssl;

    FUNC_0(VAR_2);

    VAR_6 = FUNC_8(VAR_9, VAR_3, VAR_4, VAR_5);

    switch (FUNC_6(VAR_9, VAR_6)) {
    case 134:
        if (VAR_10->renegotiate_count > 0) {
            VAR_10->byte_count += *VAR_5;
            if (VAR_10->byte_count > VAR_10->renegotiate_count) {
                VAR_10->byte_count = 0;
                VAR_10->num_renegotiates++;
                FUNC_7(VAR_9);
                VAR_7 = 1;
            }
        }
        if ((VAR_10->renegotiate_timeout > 0) && (!VAR_7)) {
            unsigned long VAR_11;

            VAR_11 = (unsigned long)FUNC_9(((void*)0));
            if (VAR_11 > VAR_10->last_time + VAR_10->renegotiate_timeout) {
                VAR_10->last_time = VAR_11;
                VAR_10->num_renegotiates++;
                FUNC_7(VAR_9);
            }
        }
        break;
    case 129:
        FUNC_5(VAR_2);
        break;
    case 130:
        FUNC_2(VAR_2);
        break;
    case 128:
        FUNC_4(VAR_2);
        VAR_8 = VAR_1;
        break;
    case 131:
        FUNC_4(VAR_2);
        VAR_8 = VAR_0;
    case 132:
    case 133:
    default:
        break;
    }

    FUNC_3(VAR_2, VAR_8);

    return VAR_6;
}
