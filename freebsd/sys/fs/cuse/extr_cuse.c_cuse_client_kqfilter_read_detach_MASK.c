
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knote {struct cuse_client* kn_hook; } ;
struct cuse_client {TYPE_2__* server; } ;
struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {TYPE_1__ selinfo; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct knote*,int) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 struct cuse_client *VAR_1;

 FUNC_0();
 VAR_1 = VAR_0->kn_hook;
 FUNC_2(&VAR_1->server->selinfo.si_note, VAR_0, 1);
 FUNC_1();
}
