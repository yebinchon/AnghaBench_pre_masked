
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * originalOptArgCookie; TYPE_2__* originalOptArgArray; } ;
typedef TYPE_3__ tOptions ;
struct TYPE_9__ {int argString; } ;
struct TYPE_12__ {size_t optIndex; int fOptState; int optCookie; TYPE_1__ optArg; int (* pOptProc ) (TYPE_3__*,TYPE_4__*) ;} ;
typedef TYPE_4__ tOptDesc ;
struct TYPE_10__ {int argString; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(tOptions * VAR_2, tOptDesc * VAR_3)
{
    VAR_3->fOptState &= VAR_0;
    VAR_3->fOptState |= VAR_1;
    if (VAR_3->pOptProc != ((void*)0))
        VAR_3->pOptProc(VAR_2, VAR_3);
    VAR_3->optArg.argString =
        VAR_2->originalOptArgArray[ VAR_3->optIndex ].argString;
    VAR_3->optCookie = VAR_2->originalOptArgCookie[ VAR_3->optIndex ];
    VAR_3->fOptState &= VAR_0;
}
