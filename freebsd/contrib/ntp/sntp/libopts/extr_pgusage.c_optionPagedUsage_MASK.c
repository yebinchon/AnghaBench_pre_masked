
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* pUsageProc ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ tOptions ;
struct TYPE_9__ {int fOptState; } ;
typedef TYPE_2__ tOptDesc ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void (*) ()) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*) ;
 int * FUNC_8 (char**) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (char*) ;

void
FUNC_13(tOptions * VAR_10, tOptDesc * VAR_11)
{

    if ((VAR_11->fOptState & VAR_2) != 0)
        return;

    (*VAR_10->pUsageProc)(VAR_10, VAR_1);
}
