
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jobarg ;
struct TYPE_3__ {int inPipe; int outPipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int,char*,int,int) ;
 TYPE_1__ VAR_4 ;

void
FUNC_5(int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;
    char VAR_9[64];

    if (VAR_6 >= 0 && VAR_7 >= 0) {

 VAR_4.inPipe = VAR_6;
 VAR_4.outPipe = VAR_7;
 (void)FUNC_3(VAR_6, VAR_1, VAR_0);
 (void)FUNC_3(VAR_7, VAR_1, VAR_0);
 return;
    }

    FUNC_0(&VAR_4, 15);

    FUNC_4(VAR_9, sizeof(VAR_9), "%d,%d",
     VAR_4.inPipe, VAR_4.outPipe);

    FUNC_2(VAR_2, "-J", VAR_3);
    FUNC_2(VAR_2, VAR_9, VAR_3);
    for (VAR_8 = 1; VAR_8 < VAR_5; VAR_8++)
 FUNC_1();
}
