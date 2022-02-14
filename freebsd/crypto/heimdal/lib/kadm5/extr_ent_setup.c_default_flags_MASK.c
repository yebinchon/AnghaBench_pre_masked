
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int client; int server; int forwardable; int proxiable; int renewable; int postdate; } ;
struct TYPE_5__ {TYPE_2__ flags; } ;
struct TYPE_7__ {TYPE_1__ entry; } ;
typedef TYPE_3__ hdb_entry_ex ;



__attribute__((used)) static void
FUNC_0(hdb_entry_ex *VAR_0, int VAR_1)
{
    VAR_0->entry.flags.client = 1;
    VAR_0->entry.flags.server = !!VAR_1;
    VAR_0->entry.flags.forwardable = 1;
    VAR_0->entry.flags.proxiable = 1;
    VAR_0->entry.flags.renewable = 1;
    VAR_0->entry.flags.postdate = 1;
}
