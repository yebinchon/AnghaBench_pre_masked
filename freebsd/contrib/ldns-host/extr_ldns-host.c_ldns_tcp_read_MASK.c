
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef scalar_t__ ldns_status ;
struct TYPE_4__ {scalar_t__ _socket; } ;
typedef TYPE_1__ ldns_resolver ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,struct timeval) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (scalar_t__,size_t*,int ) ;
 scalar_t__ FUNC_7 (int **,int *,size_t) ;

__attribute__((used)) static ldns_status
FUNC_8(ldns_pkt **VAR_2, ldns_resolver *VAR_3) {
    ldns_status VAR_4;
    struct timeval VAR_5, VAR_6;
    uint8_t *VAR_7;
    size_t VAR_8;

    if (VAR_3->_socket <= 0)
        return VAR_0;

    FUNC_2(&VAR_5, ((void*)0));
    VAR_7 = FUNC_6(
            VAR_3->_socket, &VAR_8, FUNC_5(VAR_3));
    if (VAR_7 == ((void*)0))
        goto error;

    VAR_4 = FUNC_7(VAR_2, VAR_7, VAR_8);
    FUNC_1(VAR_7);
    if (VAR_4 != VAR_1)
        goto error;

    FUNC_2(&VAR_6, ((void*)0));
    FUNC_3(*VAR_2,
            (uint32_t)((VAR_6 - VAR_5)*1000) +
                (VAR_6 - VAR_5)/1000);
    FUNC_4(*VAR_2, VAR_6);
    return VAR_4;

error:
    FUNC_0(VAR_3->_socket);
    VAR_3->_socket = 0;
    return VAR_0;
}
