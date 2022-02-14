
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ _socket; } ;
typedef TYPE_1__ ldns_resolver ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(ldns_resolver *VAR_0) {
    if (VAR_0->_socket > 0) {
        FUNC_0(VAR_0->_socket);
        VAR_0->_socket = 0;
    }
}
