
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_prepare_t ;
typedef int pid_t ;
typedef int atf_process_stream_t ;
typedef int atf_process_child_t ;
typedef int atf_error_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (void (*) (void*),void*,int *,int *) ;
 int FUNC_5 (int *,int,int *,int *) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*) ;

__attribute__((used)) static
atf_error_t
FUNC_9(atf_process_child_t *VAR_2,
                  void (*VAR_3)(void *),
                  const atf_process_stream_t *VAR_4,
                  const atf_process_stream_t *VAR_5,
                  void *VAR_6)
{
    atf_error_t VAR_7;
    stream_prepare_t VAR_8;
    stream_prepare_t VAR_9;
    pid_t VAR_10;

    VAR_7 = FUNC_8(&VAR_8, VAR_4);
    if (FUNC_1(VAR_7))
        goto out;

    VAR_7 = FUNC_8(&VAR_9, VAR_5);
    if (FUNC_1(VAR_7))
        goto err_outpipe;

    VAR_10 = FUNC_6();
    if (VAR_10 == -1) {
        VAR_7 = FUNC_2(VAR_1, "Failed to fork");
        goto err_errpipe;
    }

    if (VAR_10 == 0) {
        FUNC_4(VAR_3, VAR_6, &VAR_8, &VAR_9);
        VAR_0;
        FUNC_0();
        VAR_7 = FUNC_3();
    } else {
        VAR_7 = FUNC_5(VAR_2, VAR_10, &VAR_8, &VAR_9);
        if (FUNC_1(VAR_7))
            goto err_errpipe;
    }

    goto out;

err_errpipe:
    FUNC_7(&VAR_9);
err_outpipe:
    FUNC_7(&VAR_8);

out:
    return VAR_7;
}
