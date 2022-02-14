
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;
typedef scalar_t__ ldns_status ;
struct TYPE_5__ {int _socket; int * _nameservers; } ;
typedef TYPE_1__ ldns_resolver ;
typedef int ldns_pkt ;
typedef int ldns_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_storage*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 struct sockaddr_storage* FUNC_5 (int ,int ,size_t*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct sockaddr_storage*,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ,struct sockaddr_storage*,int ) ;

__attribute__((used)) static ldns_status
FUNC_10(ldns_resolver *VAR_5, ldns_pkt *VAR_6, int VAR_7) {



    struct sockaddr_storage *VAR_8 = ((void*)0);
    size_t VAR_9 = 0;
    ldns_buffer *VAR_10 = ((void*)0);
    ldns_status VAR_11;

    VAR_8 = FUNC_5(
            VAR_5->_nameservers[VAR_7], FUNC_6(VAR_5), &VAR_9);
    if (VAR_8 == ((void*)0)) {
        VAR_11 = VAR_2;
        goto error;
    }

    VAR_5->_socket = FUNC_8(
            VAR_8, (socklen_t)VAR_9, FUNC_7(VAR_5));
    if (VAR_5->_socket <= 0) {
        VAR_11 = VAR_1;
        goto error;
    }

    VAR_10 = FUNC_3(VAR_0);
    if (VAR_10 == ((void*)0)) {
        VAR_11 = VAR_2;
        goto error;
    }

    VAR_11 = FUNC_4(VAR_10, VAR_6);
    if (VAR_11 != VAR_4)
        goto error;

    if (FUNC_9(VAR_10, VAR_5->_socket, VAR_8, (socklen_t)VAR_9) == 0) {
        VAR_11 = VAR_3;
        goto error;
    }

    FUNC_2(VAR_10);
    FUNC_1(VAR_8);
    return VAR_4;

error:
    FUNC_2(VAR_10);
    FUNC_1(VAR_8);
    if (VAR_5->_socket > 0) {
        FUNC_0(VAR_5->_socket);
        VAR_5->_socket = 0;
    }
    return VAR_11;
}
