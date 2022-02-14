
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int msghdr ;
typedef int hashvaltmp ;
struct TYPE_13__ {TYPE_3__* s3; TYPE_1__* init_buf; } ;
struct TYPE_11__ {int message_size; } ;
struct TYPE_12__ {TYPE_2__ tmp; } ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,unsigned char const*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,unsigned char*,int,size_t*) ;

int FUNC_5(SSL *VAR_3, const unsigned char *VAR_4,
                                  size_t VAR_5, const unsigned char *VAR_6,
                                  size_t VAR_7)
{
    unsigned char VAR_8[VAR_0];
    unsigned char VAR_9[VAR_1];

    FUNC_0(VAR_9, 0, sizeof(VAR_9));

    if (VAR_4 == ((void*)0)) {
        VAR_4 = VAR_8;
        VAR_5 = 0;

        if (!FUNC_1(VAR_3, 0)
                || !FUNC_4(VAR_3, VAR_8, sizeof(VAR_8),
                                       &VAR_5)) {

            return 0;
        }
    }


    if (!FUNC_3(VAR_3)) {

        return 0;
    }


    VAR_9[0] = VAR_2;
    VAR_9[VAR_1 - 1] = (unsigned char)VAR_5;
    if (!FUNC_2(VAR_3, VAR_9, VAR_1)
            || !FUNC_2(VAR_3, VAR_4, VAR_5)) {

        return 0;
    }






    if (VAR_6 != ((void*)0)
            && (!FUNC_2(VAR_3, VAR_6, VAR_7)
                || !FUNC_2(VAR_3, (unsigned char *)VAR_3->init_buf->data,
                                    VAR_3->s3->tmp.message_size
                                    + VAR_1))) {

        return 0;
    }

    return 1;
}
