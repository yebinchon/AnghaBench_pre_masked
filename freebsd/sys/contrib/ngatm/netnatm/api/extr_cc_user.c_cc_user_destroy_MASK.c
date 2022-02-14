
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccuser {struct ccuser* sap; int name; TYPE_1__* cc; } ;
struct TYPE_2__ {int log; } ;


 int FUNC_0 (struct ccuser*) ;
 int VAR_0 ;
 int FUNC_1 (struct ccuser*,int ) ;
 int FUNC_2 (struct ccuser*,int *) ;
 int FUNC_3 (struct ccuser*,char*,int ) ;
 int FUNC_4 (struct ccuser*) ;
 int VAR_1 ;

void
FUNC_5(struct ccuser *VAR_2)
{

 if (VAR_2->cc->log & VAR_0)
  FUNC_3(VAR_2, "destroy '%s'", VAR_2->name);

 FUNC_2(VAR_2, ((void*)0));

 if (VAR_2->sap != ((void*)0))
  FUNC_0(VAR_2->sap);

 FUNC_4(VAR_2);

 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2);
}
