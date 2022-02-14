
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int Char ;


 int FUNC_0 (int,int,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int*) ;
 int * FUNC_7 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (char*,int ) ;

void
FUNC_9(void)
{
    Char *VAR_10;
    time_t VAR_11, VAR_12;

    if (VAR_9)
 return;
    VAR_7++;
    FUNC_3(&VAR_7, VAR_5);
    if (VAR_6) {
 FUNC_2(2, VAR_3, VAR_1);
 FUNC_8("%s", FUNC_0(22, 6, "Faulty alias 'periodic' removed.\n"));
 goto leave;
    }
    VAR_6 = 1;
    if (!VAR_9 && FUNC_1(VAR_1, &VAR_4)) {
 VAR_10 = FUNC_7(VAR_2);
 if (VAR_10 == VAR_0) {
     FUNC_2(1, VAR_1, ((void*)0));
     goto leave;
 }
 VAR_12 = FUNC_5(VAR_10);
 (void) FUNC_6(&VAR_11);
 if (VAR_11 - VAR_8 >= VAR_12 * 60) {
     VAR_8 = VAR_11;
     FUNC_2(1, VAR_1, ((void*)0));
 }
    }
leave:
    VAR_6 = 0;
    FUNC_4(&VAR_7);
}
