
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int p_command; scalar_t__ p_procid; } ;
typedef int jmp_buf_t ;
typedef scalar_t__ Char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (struct process*) ;
 int FUNC_7 (struct process*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;

void
FUNC_13(struct process *VAR_6)
{
    jmp_buf_t VAR_7;
    int VAR_8;
    Char VAR_9;
    size_t VAR_10;

    FUNC_4(VAR_7);

    VAR_5++;
    VAR_9 = VAR_1;
    VAR_1 = 0;

    VAR_8 = VAR_4;

    VAR_10 = FUNC_2();
    if (FUNC_10() == 0) {
 FUNC_5();
 (void) FUNC_0(0);
 VAR_2 = 1;
 if (!FUNC_7(VAR_6, 1)) {
     VAR_6->p_procid = 0;
     FUNC_11(VAR_0, VAR_6->p_command, FUNC_12(VAR_3));
 }
 FUNC_6(VAR_6);
    }
    FUNC_9(1);
    FUNC_1(VAR_10);
    FUNC_8(VAR_7);
    VAR_4 = VAR_8;
    VAR_1 = VAR_9;

    FUNC_3(&VAR_5);
}
