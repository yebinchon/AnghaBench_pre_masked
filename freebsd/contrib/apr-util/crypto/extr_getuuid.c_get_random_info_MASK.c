
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {int dummy; } ;
typedef int r ;
typedef int pid_t ;
typedef struct timeval apr_uint64_t ;
typedef int apr_md5_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct timeval*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (unsigned char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct timeval*,struct timezone*) ;
 int FUNC_9 (unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_10(unsigned char VAR_4[VAR_1])
{






    unsigned char VAR_5[VAR_0];
    apr_md5_ctx_t VAR_6;





    struct {

        pid_t pid;



        struct timeval t;

        char hostname[257];

    } VAR_7;

    FUNC_4(&VAR_6);




    VAR_7.pid = FUNC_7();
    FUNC_8(&VAR_7.t, (struct timezone *)0);

    FUNC_6(VAR_7.hostname, 256);
    FUNC_5(&VAR_6, (const unsigned char *)&VAR_7, sizeof(VAR_7));
    FUNC_3(VAR_5, &VAR_6);

    FUNC_9(VAR_4, VAR_5, VAR_1);

}
