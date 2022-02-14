
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct linger {int l_onoff; int l_linger; } ;
typedef int apr_status_t ;
struct TYPE_5__ {int protocol; int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;
typedef int apr_int32_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (TYPE_1__*,int const,int) ;
 int VAR_21 ;
 int FUNC_2 (int ,int,int,void*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

apr_status_t FUNC_5(apr_socket_t *VAR_22,
                                apr_int32_t VAR_23, apr_int32_t VAR_24)
{
    int VAR_25;
    apr_status_t VAR_26;

    if (VAR_24)
        VAR_25 = 1;
    else
        VAR_25 = 0;
    switch(VAR_23) {
    case 136:
        return VAR_1;

        break;
    case 137:
        if (VAR_24 != FUNC_0(VAR_22, 137)) {
            if (FUNC_2(VAR_22->socketdes, VAR_11, VAR_13, (void *)&VAR_25, sizeof(int)) == -1) {
                return VAR_21;
            }
            FUNC_1(VAR_22, 137, VAR_24);
        }
        break;
    case 138:
        return VAR_1;

        break;
    case 132:
        if (VAR_24 != FUNC_0(VAR_22, 132)) {
            if (FUNC_2(VAR_22->socketdes, VAR_11, VAR_17, (void *)&VAR_25, sizeof(int)) == -1) {
                return VAR_21;
            }
            FUNC_1(VAR_22, 132, VAR_24);
        }
        break;
    case 131:





        return VAR_1;

        break;
    case 133:





        return VAR_1;

        break;
    case 134:
        if (FUNC_0(VAR_22, 134) != VAR_24) {
            if (VAR_24) {
                if ((VAR_26 = FUNC_4(VAR_22->socketdes)) != VAR_4)
                    return VAR_26;
            }
            else {
                if ((VAR_26 = FUNC_3(VAR_22->socketdes)) != VAR_4)
                    return VAR_26;
            }
            FUNC_1(VAR_22, 134, VAR_24);
        }
        break;
    case 135:
        return VAR_1;

        break;
    case 130:
        return VAR_1;

        break;
    case 129:
        return VAR_1;

        break;
    case 128:
        return VAR_1;

        break;
    case 140:
        FUNC_1(VAR_22, 140, VAR_24);
        break;
    case 139:
        return VAR_1;

        break;
    default:
        return VAR_0;
    }

    return VAR_4;
}
