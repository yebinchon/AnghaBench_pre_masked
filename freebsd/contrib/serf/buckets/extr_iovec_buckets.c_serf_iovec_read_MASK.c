
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {char* iov_base; int iov_len; } ;
typedef int serf_bucket_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int FUNC_0 (int *,int ,int,struct iovec*,int*) ;

__attribute__((used)) static apr_status_t FUNC_1(serf_bucket_t *VAR_0,
                                    apr_size_t VAR_1,
                                    const char **VAR_2, apr_size_t *VAR_3)
{
    struct iovec VAR_4[1];
    apr_status_t VAR_5;
    int VAR_6;

    VAR_5 = FUNC_0(VAR_0, VAR_1, 1, VAR_4, &VAR_6);

    if (VAR_6) {
        *VAR_2 = VAR_4[0].iov_base;
        *VAR_3 = VAR_4[0].iov_len;
    } else {
        *VAR_3 = 0;
    }

    return VAR_5;
}
