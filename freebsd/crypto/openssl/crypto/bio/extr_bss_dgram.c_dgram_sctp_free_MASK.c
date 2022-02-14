
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bio_dgram_sctp_data ;
struct TYPE_4__ {scalar_t__ ptr; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0)
{
    bio_dgram_sctp_data *VAR_1;

    if (VAR_0 == ((void*)0))
        return 0;
    if (!FUNC_1(VAR_0))
        return 0;

    VAR_1 = (bio_dgram_sctp_data *) VAR_0->ptr;
    if (VAR_1 != ((void*)0))
        FUNC_0(VAR_1);

    return 1;
}
