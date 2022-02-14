
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fOptSet; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_8__ {int optValue; } ;
typedef TYPE_2__ tOptDesc ;
struct TYPE_9__ {char* pzSpc; char* pzNoF; } ;
typedef TYPE_3__ arg_types_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(tOptions * VAR_4, tOptDesc * VAR_5, arg_types_t * VAR_6)
{






    if ((VAR_4->fOptSet & VAR_2) == 0)
        FUNC_3(VAR_6->pzSpc, VAR_3);

    else if (! FUNC_0(VAR_5->optValue)) {
        if ( (VAR_4->fOptSet & (VAR_0|VAR_1))
           == (VAR_0|VAR_1))
            FUNC_2(' ', VAR_3);
        FUNC_3(VAR_6->pzNoF, VAR_3);

    } else {
        FUNC_1(VAR_3, "   -%c", VAR_5->optValue);
        if ( (VAR_4->fOptSet & (VAR_0|VAR_1))
           == (VAR_0|VAR_1))
            FUNC_3(", ", VAR_3);
    }
}
