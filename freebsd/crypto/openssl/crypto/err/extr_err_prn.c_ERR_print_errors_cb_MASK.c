
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf2 ;
typedef int buf ;
typedef int CRYPTO_THREAD_ID ;


 int FUNC_0 (char*,int,char*,unsigned long,char*,char const*,int,char const*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (unsigned long,char*,int) ;
 unsigned long FUNC_3 (char const**,int*,char const**,int*) ;
 size_t FUNC_4 (char*) ;

void FUNC_5(int (*VAR_1) (const char *VAR_2, size_t VAR_3, void *VAR_4),
                         void *VAR_5)
{
    unsigned long VAR_6;
    char VAR_7[256];
    char VAR_8[4096];
    const char *VAR_9, *VAR_10;
    int VAR_11, VAR_12;




    union {
        CRYPTO_THREAD_ID tid;
        unsigned long ltid;
    } VAR_13;

    VAR_13.ltid = 0;
    VAR_13.tid = FUNC_1();

    while ((VAR_6 = FUNC_3(&VAR_9, &VAR_11, &VAR_10, &VAR_12)) != 0) {
        FUNC_2(VAR_6, VAR_7, sizeof(VAR_7));
        FUNC_0(VAR_8, sizeof(VAR_8), "%lu:%s:%s:%d:%s\n", VAR_13.ltid, VAR_7,
                     VAR_9, VAR_11, (VAR_12 & VAR_0) ? VAR_10 : "");
        if (VAR_1(VAR_8, FUNC_4(VAR_8), VAR_5) <= 0)
            break;
    }
}
