
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tSuccess ;
struct TYPE_5__ {int fOptSet; int (* pUsageProc ) (TYPE_1__*,int ) ;int pzProgPath; } ;
typedef TYPE_1__ tOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,char const*,int) ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 char* VAR_4 ;

__attribute__((used)) static tSuccess
FUNC_5(tOptions * VAR_5, char const * VAR_6, int VAR_7)
{
    if ((VAR_5->fOptSet & VAR_2) != 0) {
        FUNC_1(VAR_3, VAR_4, VAR_5->pzProgPath, VAR_6, VAR_7);
        if (VAR_7 <= 4)
            FUNC_2(VAR_5, VAR_6, (int)FUNC_3(VAR_6));
        (*VAR_5->pUsageProc)(VAR_5, VAR_0);

        FUNC_0(VAR_0);
    }
    return VAR_1;
}
