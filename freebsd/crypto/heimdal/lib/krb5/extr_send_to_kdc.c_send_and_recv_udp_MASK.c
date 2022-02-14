
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
typedef int krb5_socket_t ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (int ,int ,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(krb5_socket_t VAR_0,
    time_t VAR_1,
    const krb5_data *VAR_2,
    krb5_data *VAR_3)
{
    if (FUNC_1 (VAR_0, VAR_2->data, VAR_2->length, 0) < 0)
 return -1;

    return FUNC_0(VAR_0, VAR_1, 1, 0, VAR_3);
}
