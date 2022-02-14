
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* peer_ecpointformats; size_t peer_ecpointformats_len; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;

__attribute__((used)) static int FUNC_7(SSL *VAR_7, EVP_PKEY *VAR_8)
{
    const EC_KEY *VAR_9;
    const EC_GROUP *VAR_10;
    unsigned char VAR_11;
    size_t VAR_12;


    if (FUNC_5(VAR_8) != VAR_0)
        return 1;
    VAR_9 = FUNC_4(VAR_8);
    VAR_10 = FUNC_1(VAR_9);


    if (FUNC_2(VAR_9) == VAR_3) {
            VAR_11 = VAR_6;
    } else if (FUNC_6(VAR_7)) {




            return 1;
    } else {
        int VAR_13 = FUNC_3(FUNC_0(VAR_10));

        if (VAR_13 == VAR_2)
            VAR_11 = VAR_5;
        else if (VAR_13 == VAR_1)
            VAR_11 = VAR_4;
        else
            return 0;
    }




    if (VAR_7->ext.peer_ecpointformats == ((void*)0))
        return 1;

    for (VAR_12 = 0; VAR_12 < VAR_7->ext.peer_ecpointformats_len; VAR_12++) {
        if (VAR_7->ext.peer_ecpointformats[VAR_12] == VAR_11)
            return 1;
    }
    return 0;
}
