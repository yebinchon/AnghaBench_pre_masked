
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int context; } ;
struct TYPE_7__ {char* name; } ;
typedef int Hash_Search ;
typedef TYPE_1__ Hash_Entry ;
typedef TYPE_2__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char*) ;
 TYPE_2__* FUNC_5 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(void)
{
    GNode *VAR_2 = FUNC_5();
    Hash_Entry *VAR_3, *VAR_4;
    Hash_Search VAR_5;

    VAR_3 = FUNC_2(&VAR_2->context, &VAR_5);
    while (VAR_3) {
 VAR_4 = FUNC_3(&VAR_5);
 if (VAR_3->name[0] != '/') {
     if (FUNC_0(VAR_0))
  FUNC_4(VAR_1, "cached_realpath: purging %s\n", VAR_3->name);
     FUNC_1(&VAR_2->context, VAR_3);
 }
 VAR_3 = VAR_4;
    }
}
