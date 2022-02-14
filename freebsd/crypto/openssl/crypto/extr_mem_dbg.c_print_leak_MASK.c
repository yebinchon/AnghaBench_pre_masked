
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tm {int tm_sec; int tm_min; int tm_hour; } ;
typedef int buf ;
struct TYPE_8__ {struct TYPE_8__* next; int info; int line; int file; int threadid; } ;
struct TYPE_7__ {size_t array_siz; int array; TYPE_3__* app_info; int num; int addr; int threadid; int line; int file; int order; int time; } ;
struct TYPE_6__ {int print_cb_arg; int (* print_cb ) (char*,int,int ) ;int bytes; int chunks; } ;
typedef TYPE_1__ MEM_LEAK ;
typedef TYPE_2__ MEM ;
typedef int CRYPTO_THREAD_ID ;
typedef TYPE_3__ APP_INFO ;


 int FUNC_0 (char*,int,char*,...) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 char** FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char**) ;
 struct tm* FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,char,size_t) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,size_t,int ) ;
 int FUNC_10 (char*,int,int ) ;

__attribute__((used)) static void FUNC_11(const MEM *VAR_1, MEM_LEAK *VAR_2)
{
    char VAR_3[1024];
    char *VAR_4 = VAR_3;
    size_t VAR_5 = sizeof(VAR_3), VAR_6;
    APP_INFO *VAR_7;
    int VAR_8;
    struct tm *VAR_9 = ((void*)0);





    union {
        CRYPTO_THREAD_ID tid;
        unsigned long ltid;
    } VAR_10;
    CRYPTO_THREAD_ID VAR_11;

    VAR_9 = FUNC_5(&VAR_1->time);
    VAR_8 = FUNC_0(VAR_4, VAR_5, "[%02d:%02d:%02d] ",
                     VAR_9->tm_hour, VAR_9->tm_min, VAR_9->tm_sec);
    if (VAR_8 <= 0) {
        VAR_4[0] = '\0';
        return;
    }
    VAR_4 += VAR_8;
    VAR_5 -= VAR_8;

    VAR_8 = FUNC_0(VAR_4, VAR_5, "%5lu file=%s, line=%d, ",
                     VAR_1->order, VAR_1->file, VAR_1->line);
    if (VAR_8 <= 0)
        return;
    VAR_4 += VAR_8;
    VAR_5 -= VAR_8;

    VAR_10.ltid = 0;
    VAR_10.tid = VAR_1->threadid;
    VAR_8 = FUNC_0(VAR_4, VAR_5, "thread=%lu, ", VAR_10.ltid);
    if (VAR_8 <= 0)
        return;
    VAR_4 += VAR_8;
    VAR_5 -= VAR_8;

    VAR_8 = FUNC_0(VAR_4, VAR_5, "number=%d, address=%p\n", VAR_1->num, VAR_1->addr);
    if (VAR_8 <= 0)
        return;
    VAR_4 += VAR_8;
    VAR_5 -= VAR_8;

    VAR_2->print_cb(VAR_3, (size_t)(VAR_4 - VAR_3), VAR_2->print_cb_arg);

    VAR_2->chunks++;
    VAR_2->bytes += VAR_1->num;

    VAR_7 = VAR_1->app_info;
    VAR_6 = 0;

    if (VAR_7) {
        VAR_11 = VAR_7->threadid;

        do {
            int VAR_12;
            int VAR_13;

            VAR_6++;
            if (VAR_6 >= sizeof(VAR_3) - 1)
                break;
            FUNC_7(VAR_3, '>', VAR_6);
            VAR_3[VAR_6] = '\0';
            VAR_10.ltid = 0;
            VAR_10.tid = VAR_7->threadid;
            VAR_8 = FUNC_0(VAR_3 + VAR_6, sizeof(VAR_3) - VAR_6,
                             " thread=%lu, file=%s, line=%d, info=\"",
                             VAR_10.ltid, VAR_7->file, VAR_7->line);
            if (VAR_8 <= 0)
                break;
            VAR_12 = VAR_6 + VAR_8;
            VAR_13 = FUNC_8(VAR_7->info);
            if (128 - VAR_12 - 3 < VAR_13) {
                FUNC_6(VAR_3 + VAR_12, VAR_7->info, 128 - VAR_12 - 3);
                VAR_12 = 128 - 3;
            } else {
                VAR_8 = FUNC_0(VAR_3 + VAR_12, sizeof(VAR_3) - VAR_12, "%s",
                                 VAR_7->info);
                if (VAR_8 < 0)
                    break;
                VAR_12 += VAR_8;
            }
            VAR_8 = FUNC_0(VAR_3 + VAR_12, sizeof(VAR_3) - VAR_12, "\"\n");
            if (VAR_8 <= 0)
                break;

            VAR_2->print_cb(VAR_3, VAR_12 + VAR_8, VAR_2->print_cb_arg);

            VAR_7 = VAR_7->next;
        }
        while (VAR_7 && FUNC_1(VAR_7->threadid, VAR_11));
    }


    {
        size_t VAR_14;
        char **VAR_15 = FUNC_2(VAR_1->array, VAR_1->array_siz);

        for (VAR_14 = 0; VAR_14 < VAR_1->array_siz; VAR_14++)
            FUNC_3(VAR_0, "##> %s\n", VAR_15[VAR_14]);
        FUNC_4(VAR_15);
    }

}
