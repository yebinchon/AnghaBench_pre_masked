
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {char* iov_base; scalar_t__ iov_len; } ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,char const**,scalar_t__*) ;

__attribute__((used)) static apr_status_t FUNC_1(serf_bucket_t *VAR_2,
                                            apr_size_t VAR_3,
                                            int VAR_4,
                                            struct iovec *VAR_5,
                                            int *VAR_6)
{
    apr_size_t VAR_7 = VAR_3;
    int VAR_8;

    *VAR_6 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        const char *VAR_9;
        apr_size_t VAR_10;
        apr_status_t VAR_11;






        VAR_11 = FUNC_0(VAR_2, VAR_7, &VAR_9, &VAR_10);

        if (VAR_10) {
            VAR_5[*VAR_6].iov_base = (char*)VAR_9;
            VAR_5[*VAR_6].iov_len = VAR_10;

            (*VAR_6)++;

            if (VAR_7 != VAR_1) {
                VAR_7 -= VAR_10;


                if (VAR_7 == 0) {
                    return VAR_11;
                }
            }
        }

        if (VAR_11) {
            return VAR_11;
        }
    }

    return VAR_0;
}
