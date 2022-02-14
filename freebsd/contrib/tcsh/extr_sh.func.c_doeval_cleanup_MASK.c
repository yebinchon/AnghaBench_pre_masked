
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct doeval_state {scalar_t__ saveIN; scalar_t__ saveOUT; scalar_t__ saveDIAG; int SHDIAG; int SHOUT; int SHIN; scalar_t__ didfds; int didcch; int evalp; int evalvec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void *VAR_8)
{
    struct doeval_state *VAR_9;

    VAR_9 = VAR_8;
    VAR_7 = VAR_9->evalvec;
    VAR_6 = VAR_9->evalp;
    VAR_5 = 0;

    VAR_3 = VAR_9->didcch;

    VAR_4 = VAR_9->didfds;
    if (VAR_9->saveIN != VAR_1)
 FUNC_3(VAR_1);
    if (VAR_9->saveOUT != VAR_2)
 FUNC_3(VAR_2);
    if (VAR_9->saveDIAG != VAR_0)
 FUNC_3(VAR_0);
    FUNC_0(VAR_1 = FUNC_2(VAR_9->saveIN, VAR_9->SHIN), 1);
    FUNC_0(VAR_2 = FUNC_2(VAR_9->saveOUT, VAR_9->SHOUT), 1);
    FUNC_0(VAR_0 = FUNC_2(VAR_9->saveDIAG, VAR_9->SHDIAG), 1);
    if (VAR_4) {
 FUNC_0(FUNC_1(VAR_1, 0), 1);
 FUNC_0(FUNC_1(VAR_2, 1), 1);
 FUNC_0(FUNC_1(VAR_0, 2), 1);
    }
}
