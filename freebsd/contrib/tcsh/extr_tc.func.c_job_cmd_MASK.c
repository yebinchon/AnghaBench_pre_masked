
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int dummy; } ;
typedef int Char ;


 int FUNC_0 (int,int,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct process* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(Char *VAR_8)
{
    if (VAR_7)
 return;
    VAR_6++;
    FUNC_3(&VAR_6, VAR_3);
    if (VAR_4) {
 FUNC_2(2, VAR_1, VAR_0);
 FUNC_5("%s", FUNC_0(22, 14, "Faulty alias 'jobcmd' removed.\n"));
 goto leave;
    }
    VAR_4 = 1;
    if (!VAR_7 && FUNC_1(VAR_0, &VAR_2)) {
 struct process *VAR_9 = VAR_5;
 FUNC_2(2, VAR_0, VAR_8);
 VAR_5 = VAR_9;
    }
leave:
    VAR_4 = 0;
    FUNC_4(&VAR_6);
}
