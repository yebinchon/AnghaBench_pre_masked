
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* ctx; } ;
struct TYPE_6__ {int (* keylog_callback ) (TYPE_2__*,char const*) ;} ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 char* FUNC_1 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (char*,char*,int const) ;
 int FUNC_4 (char*,char const*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3,
                          SSL *VAR_4,
                          const uint8_t *VAR_5,
                          size_t VAR_6,
                          const uint8_t *VAR_7,
                          size_t VAR_8)
{
    char *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    size_t VAR_11 = 0;
    size_t VAR_12;
    size_t VAR_13;

    if (VAR_4->ctx->keylog_callback == ((void*)0))
        return 1;
    VAR_13 = FUNC_5(VAR_3);
    VAR_11 = VAR_13 + (2 * VAR_6) + (2 * VAR_8) + 3;
    if ((VAR_9 = VAR_10 = FUNC_1(VAR_11)) == ((void*)0)) {
        FUNC_2(VAR_4, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    FUNC_4(VAR_10, VAR_3);
    VAR_10 += VAR_13;
    *VAR_10++ = ' ';

    for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
        FUNC_3(VAR_10, "%02x", VAR_5[VAR_12]);
        VAR_10 += 2;
    }
    *VAR_10++ = ' ';

    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
        FUNC_3(VAR_10, "%02x", VAR_7[VAR_12]);
        VAR_10 += 2;
    }
    *VAR_10 = '\0';

    VAR_4->ctx->keylog_callback(VAR_4, (const char *)VAR_9);
    FUNC_0(VAR_9, VAR_11);
    return 1;

}
