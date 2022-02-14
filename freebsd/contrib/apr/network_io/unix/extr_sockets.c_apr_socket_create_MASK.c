
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_5__ {int socketdes; int timeout; int pool; scalar_t__ inherit; } ;
typedef TYPE_1__ apr_socket_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__**,int *) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int FUNC_3 (int,int ,...) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 void* FUNC_5 (int,int,int) ;
 int VAR_12 ;

apr_status_t FUNC_6(apr_socket_t **VAR_13, int VAR_14, int VAR_15,
                               int VAR_16, apr_pool_t *VAR_17)
{
    int VAR_18 = VAR_14, VAR_19 = 0;





    if (VAR_18 == VAR_3) {



        VAR_18 = VAR_0;

    }

    FUNC_0(VAR_13, VAR_17);


    (*VAR_13)->socketdes = FUNC_5(VAR_18, VAR_15|VAR_19, VAR_16);
    if ((*VAR_13)->socketdes < 0) {
        return VAR_11;
    }
    FUNC_4(*VAR_13, VAR_18, VAR_15, VAR_16);


    {
        int VAR_20;
        apr_status_t VAR_21;

        if ((VAR_20 = FUNC_3((*VAR_13)->socketdes, VAR_6)) == -1) {
            VAR_21 = VAR_11;
            FUNC_2((*VAR_13)->socketdes);
            (*VAR_13)->socketdes = -1;
            return VAR_21;
        }

        VAR_20 |= VAR_5;
        if (FUNC_3((*VAR_13)->socketdes, VAR_7, VAR_20) == -1) {
            VAR_21 = VAR_11;
            FUNC_2((*VAR_13)->socketdes);
            (*VAR_13)->socketdes = -1;
            return VAR_21;
        }
    }


    (*VAR_13)->timeout = -1;
    (*VAR_13)->inherit = 0;
    FUNC_1((*VAR_13)->pool, (void *)(*VAR_13), VAR_12,
                              VAR_12);

    return VAR_2;
}
