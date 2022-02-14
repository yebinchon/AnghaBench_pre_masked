
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int p_flags; int p_jobid; int p_command; int p_procid; struct process* p_friends; } ;
typedef char* pid_t ;
typedef char Char ;


 int FUNC_0 (int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;



 int VAR_7 ;
 int FUNC_2 (char**,int ) ;
 int FUNC_3 (char**) ;
 int VAR_8 ;
 int VAR_9 ;
 char** FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (char*,int const) ;
 scalar_t__ FUNC_6 (int ,int const) ;
 char* VAR_10 ;
 struct process* FUNC_7 (char*) ;
 char* VAR_11 ;
 int FUNC_8 (struct process*,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,...) ;
 int FUNC_12 (int ) ;
 char* FUNC_13 (int ,char**,int) ;
 char* FUNC_14 (int ,char**,int ) ;
 int FUNC_15 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_16(Char **VAR_13, int VAR_14)
{
    struct process *VAR_15, *VAR_16;
    int VAR_17 = 0, VAR_18 = 0;
    pid_t VAR_19;
    Char *VAR_20, **VAR_21, **VAR_22;


    for (VAR_21 = VAR_13; VAR_21 && *VAR_21; VAR_21++)
 if (**VAR_21 == '%')
     (void) FUNC_9(*VAR_21);

    VAR_13 = FUNC_4(VAR_13);
    VAR_22 = VAR_13;
    FUNC_2(VAR_22, VAR_7);

    VAR_10++;
    FUNC_2(&VAR_10, VAR_8);
    if (VAR_12) {
 VAR_11++;
 FUNC_2(&VAR_11, VAR_8);
    }

    while (VAR_13 && (VAR_20 = *VAR_13)) {
 if (*VAR_20 == '%') {
     VAR_16 = VAR_15 = FUNC_7(VAR_20);
     do
  VAR_17 |= VAR_16->p_flags;
     while ((VAR_16 = VAR_16->p_friends) != VAR_15);
     if (FUNC_6(VAR_15->p_jobid, VAR_14) < 0) {
  FUNC_15("%S: %s\n", VAR_20, FUNC_12(VAR_9));
  VAR_18++;
     }




 }
 else if (!(FUNC_1(*VAR_20) || *VAR_20 == '-'))
     FUNC_11(VAR_2 | VAR_1);
 else {
     char *VAR_23;

     VAR_19 = FUNC_13(FUNC_10(VAR_20), &VAR_23, 10);



     if (*VAR_23)
  FUNC_11(VAR_2 | VAR_1);
     else if (FUNC_5(VAR_19, VAR_14) < 0) {
  FUNC_15("%d: %s\n", VAR_19, FUNC_12(VAR_9));
  VAR_18++;
  goto cont;
     }




 }
cont:
 VAR_13++;
    }
    FUNC_3(&VAR_10);
    if (VAR_18)
 FUNC_11(VAR_3);
}
