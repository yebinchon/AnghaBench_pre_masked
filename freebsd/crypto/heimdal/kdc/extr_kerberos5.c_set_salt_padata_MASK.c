
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int len; TYPE_1__* val; } ;
struct TYPE_8__ {int salt; int type; } ;
struct TYPE_7__ {int padata_value; int padata_type; } ;
typedef TYPE_2__ Salt ;
typedef TYPE_3__ METHOD_DATA ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(METHOD_DATA *VAR_0, Salt *VAR_1)
{
    if (VAR_1) {
       FUNC_1(VAR_0);
       VAR_0->val[VAR_0->len - 1].padata_type = VAR_1->type;
       FUNC_0(&VAR_1->salt,
                             &VAR_0->val[VAR_0->len - 1].padata_value);
    }
}
