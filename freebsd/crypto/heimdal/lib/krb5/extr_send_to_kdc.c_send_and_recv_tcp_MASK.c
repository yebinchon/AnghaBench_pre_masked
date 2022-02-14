
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
typedef int len ;
typedef int krb5_socket_t ;
struct TYPE_6__ {int length; unsigned char* data; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (unsigned char*,unsigned long*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,unsigned long,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(krb5_socket_t VAR_0,
    time_t VAR_1,
    const krb5_data *VAR_2,
    krb5_data *VAR_3)
{
    unsigned char VAR_4[4];
    unsigned long VAR_5;
    krb5_data VAR_6;

    FUNC_1(VAR_4, VAR_2->length, 4);
    if(FUNC_3 (VAR_0, VAR_4, sizeof(VAR_4)) < 0)
 return -1;
    if(FUNC_3 (VAR_0, VAR_2->data, VAR_2->length) < 0)
 return -1;
    if (FUNC_4 (VAR_0, VAR_1, 0, 4, &VAR_6) < 0)
 return -1;
    if (VAR_6.length != 4) {
 FUNC_2 (&VAR_6);
 return -1;
    }
    FUNC_0(VAR_6.data, &VAR_5, 4);
    FUNC_2 (&VAR_6);
    if (FUNC_4 (VAR_0, VAR_1, 0, VAR_5, VAR_3) < 0)
 return -1;
    if(VAR_3->length != VAR_5) {
 FUNC_2 (VAR_3);
 return -1;
    }
    return 0;
}
