
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int data ;
typedef int RAND_POOL ;
typedef int CRYPTO_THREAD_ID ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,int,int ) ;

int FUNC_4(RAND_POOL *VAR_0)
{
    struct {
        int fork_id;
        CRYPTO_THREAD_ID tid;
        uint64_t time;
    } VAR_1 = { 0 };







    VAR_1.fork_id = FUNC_2();
    VAR_1.tid = FUNC_0();
    VAR_1.time = FUNC_1();

    return FUNC_3(VAR_0, (unsigned char *)&VAR_1, sizeof(VAR_1), 0);
}
