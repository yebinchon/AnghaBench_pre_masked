
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int * FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_2 ;

void
FUNC_7(char *VAR_3)
{
    if(VAR_2) {
 FILE *VAR_4;
 VAR_4 = FUNC_1(VAR_3, -1, "w");
 if (VAR_4 == ((void*)0))
     return;
 FUNC_6(FUNC_3(VAR_4), 0);
 if(FUNC_0(VAR_4, VAR_3) == 0)
     FUNC_4(226, "Transfer complete.");
 else
     FUNC_4(451, "Requested action aborted. Local error in processing.");
 FUNC_2(VAR_4);
 VAR_0 = -1;
 VAR_1 = -1;
    } else {



 const char *VAR_5 = "/bin/ls -la %s";

 FUNC_5(VAR_5, VAR_3);
    }
}
