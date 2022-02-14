
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct client {int moniker; } ;
struct TYPE_8__ {char* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (struct client*,scalar_t__,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct client*,scalar_t__,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(struct client *VAR_0, int32_t VAR_1, struct client *VAR_2, int32_t VAR_3)
{
    krb5_data VAR_4, VAR_5;
    int32_t VAR_6;

    VAR_4.data = "foo";
    VAR_4.length = 3;

    FUNC_3(&VAR_5);

    VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_4, &VAR_5);
    if (VAR_6)
 FUNC_0(1, "get_mic failed to host: %s", VAR_0->moniker);
    VAR_6 = FUNC_4(VAR_2, VAR_3, &VAR_4, &VAR_5);
    if (VAR_6)
 FUNC_0(1, "verify_mic failed to host: %s", VAR_2->moniker);

    FUNC_2(&VAR_5);
}
