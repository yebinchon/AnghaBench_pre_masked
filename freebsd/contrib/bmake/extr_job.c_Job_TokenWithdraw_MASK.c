
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int outPipe; int inPipe; } ;
typedef int Boolean ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int ,char*,int) ;

Boolean
FUNC_7(void)
{
    char VAR_11, VAR_12;
    int VAR_13;

    VAR_10 = 0;
    if (FUNC_0(VAR_2))
 FUNC_2(VAR_5, "Job_TokenWithdraw(%d): aborting %d, running %d\n",
  FUNC_3(), VAR_4, VAR_7);

    if (VAR_4 || (VAR_7 >= VAR_8))
 return VAR_1;

    VAR_13 = FUNC_4(VAR_9.inPipe, &VAR_11, 1);
    if (VAR_13 == 0)
 FUNC_1("eof on job pipe!");
    if (VAR_13 < 0 && VAR_7 != 0) {
 if (VAR_6 != VAR_0) {
     FUNC_1("job pipe read: %s", FUNC_5(VAR_6));
 }
 if (FUNC_0(VAR_2))
     FUNC_2(VAR_5, "(%d) blocked for token\n", FUNC_3());
 return VAR_1;
    }

    if (VAR_13 == 1 && VAR_11 != '+') {

 if (FUNC_0(VAR_2))
     FUNC_2(VAR_5, "(%d) aborted by token %c\n", FUNC_3(), VAR_11);
 while (FUNC_4(VAR_9.inPipe, &VAR_12, 1) == 1)
     continue;

 while (FUNC_6(VAR_9.outPipe, &VAR_11, 1) == -1 && VAR_6 == VAR_0)
     continue;
 FUNC_1("A failure has been detected in another branch of the parallel make");
    }

    if (VAR_13 == 1 && VAR_7 == 0)

 while (FUNC_6(VAR_9.outPipe, &VAR_11, 1) == -1 && VAR_6 == VAR_0)
     continue;

    VAR_7++;
    if (FUNC_0(VAR_2))
 FUNC_2(VAR_5, "(%d) withdrew token\n", FUNC_3());
    return VAR_3;
}
