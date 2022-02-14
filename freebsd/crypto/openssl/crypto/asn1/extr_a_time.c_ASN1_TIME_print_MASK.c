
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tm {size_t tm_mon; int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; } ;
struct TYPE_4__ {int length; scalar_t__ type; scalar_t__ data; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_TIME ;


 scalar_t__ FUNC_0 (int *,char*,int ,int ,int ,int ,int ,int,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (struct tm*,TYPE_1__ const*) ;

int FUNC_4(BIO *VAR_2, const ASN1_TIME *VAR_3)
{
    char *VAR_4;
    int VAR_5 = 0, VAR_6;
    struct tm VAR_7;
    const char VAR_8 = 0x5A, VAR_9 = 0x2E;

    if (!FUNC_3(&VAR_7, VAR_3)) {

        goto err;
    }

    VAR_6 = VAR_3->length;
    VAR_4 = (char *)VAR_3->data;
    if (VAR_4[VAR_6 - 1] == VAR_8)
        VAR_5 = 1;

    if (VAR_3->type == VAR_0) {
        char *VAR_10 = ((void*)0);
        int VAR_11 = 0;





        if (VAR_3->length > 15 && VAR_4[14] == VAR_9) {
            VAR_10 = &VAR_4[14];
            VAR_11 = 1;
            while (14 + VAR_11 < VAR_6 && FUNC_2(VAR_10[VAR_11]))
                ++VAR_11;
        }

        return FUNC_0(VAR_2, "%s %2d %02d:%02d:%02d%.*s %d%s",
                          VAR_1[VAR_7.tm_mon], VAR_7.tm_mday, VAR_7.tm_hour,
                          VAR_7.tm_min, VAR_7.tm_sec, VAR_11, VAR_10, VAR_7.tm_year + 1900,
                          (VAR_5 ? " GMT" : "")) > 0;
    } else {
        return FUNC_0(VAR_2, "%s %2d %02d:%02d:%02d %d%s",
                          VAR_1[VAR_7.tm_mon], VAR_7.tm_mday, VAR_7.tm_hour,
                          VAR_7.tm_min, VAR_7.tm_sec, VAR_7.tm_year + 1900,
                          (VAR_5 ? " GMT" : "")) > 0;
    }
 err:
    FUNC_1(VAR_2, "Bad time value", 14);
    return 0;
}
