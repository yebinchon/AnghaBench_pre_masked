
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serf_incoming_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

apr_status_t FUNC_2(serf_incoming_t *VAR_7, apr_int16_t VAR_8)
{
    apr_status_t VAR_9;
    if ((VAR_8 & VAR_4) != 0) {
        VAR_9 = FUNC_0(VAR_7);
        if (VAR_9) {
            return VAR_9;
        }
    }

    if ((VAR_8 & VAR_3) != 0) {
        return VAR_0;
    }

    if ((VAR_8 & VAR_2) != 0) {
        return VAR_1;
    }

    if ((VAR_8 & VAR_5) != 0) {
        VAR_9 = FUNC_1(VAR_7);
        if (VAR_9) {
            return VAR_9;
        }
    }

    return VAR_6;
}
