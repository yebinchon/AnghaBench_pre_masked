
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int fd; int name; } ;
typedef TYPE_1__ slave ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(krb5_context VAR_2, slave *VAR_3)
{
    FUNC_0(VAR_2, "slave %s dead", VAR_3->name);

    if (!FUNC_1(VAR_3->fd)) {
 FUNC_2 (VAR_3->fd);
 VAR_3->fd = VAR_1;
    }
    VAR_3->flags |= VAR_0;
    FUNC_3(VAR_3);
}
