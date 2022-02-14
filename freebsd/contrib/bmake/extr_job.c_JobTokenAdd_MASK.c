
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int outPipe; int inPipe; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,int,size_t,char) ;
 int FUNC_2 () ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_1__ VAR_9 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(void)
{
    char VAR_10 = VAR_3[VAR_5], VAR_11;

    if (!VAR_4 && VAR_5 == VAR_0) {
 if (VAR_8 == 0)
     return;
 VAR_10 = '+';
    }


    while (VAR_10 != '+' && FUNC_3(VAR_9.inPipe, &VAR_11, 1) == 1)
 continue;

    if (FUNC_0(VAR_2))
 FUNC_1(VAR_6, "(%d) aborting %zu, deposit token %c\n",
     FUNC_2(), VAR_5, VAR_10);
    while (FUNC_4(VAR_9.outPipe, &VAR_10, 1) == -1 && VAR_7 == VAR_1)
 continue;
}
