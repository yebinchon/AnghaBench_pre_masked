
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {scalar_t__ iov_len; int iov_base; } ;
typedef int serf_bucket_alloc_t ;
typedef int apr_size_t ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 char* FUNC_1 (int *,int) ;

char *FUNC_2(serf_bucket_alloc_t *VAR_0, struct iovec *VAR_1,
                    int VAR_2, apr_size_t *VAR_3)
{
    int VAR_4;
    apr_size_t VAR_5 = 0;
    char *VAR_6, *VAR_7;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_5 += VAR_1[VAR_4].iov_len;
    }


    VAR_7 = FUNC_1(VAR_0, VAR_5);

    VAR_6 = VAR_7;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        FUNC_0(VAR_6, VAR_1[VAR_4].iov_base, VAR_1[VAR_4].iov_len);
        VAR_6 += VAR_1[VAR_4].iov_len;
    }

    if (VAR_3) {
        *VAR_3 = VAR_6 - VAR_7;
    }

    return VAR_7;
}
