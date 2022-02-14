
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i; } ;
typedef TYPE_1__ krb5_ticket_flags ;
typedef int krb5_context ;
typedef int ff ;
struct TYPE_7__ {int proxy; } ;
typedef TYPE_2__ TicketFlags ;


 size_t FUNC_0 (TYPE_2__) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,char*,char const*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (char const*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(krb5_context VAR_0,
     const char *VAR_1, krb5_ticket_flags *VAR_2)
{
    TicketFlags VAR_3;
    int VAR_4 = FUNC_5(VAR_1, FUNC_1(), 0);
    if (VAR_4 == -1)
 FUNC_3(VAR_0, 1, "bad flags specified: \"%s\"", VAR_1);

    FUNC_4(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.proxy = 1;
    if ((size_t)FUNC_5("proxy", FUNC_1(), 0) == FUNC_0(VAR_3))
 VAR_2->i = VAR_4;
    else
 VAR_2->i = FUNC_2(VAR_4);
}
