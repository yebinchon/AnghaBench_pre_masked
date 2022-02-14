
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,...) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int ,char*,int,int ) ;
 int FUNC_14 (char*,int,char*,int,int,int) ;
 int FUNC_15 (char*) ;

void
FUNC_16 (FILE * VAR_11)
{
    char VAR_12[VAR_0];
    int VAR_13;
    fd_set VAR_14;





    FUNC_14 (VAR_12, sizeof (VAR_12), "%c%c%c", VAR_4, VAR_5, VAR_4);
    if (FUNC_13 (FUNC_6 (VAR_9), VAR_12, 3, VAR_6) != 3)
 FUNC_15 ("abort");
    FUNC_7 (VAR_9, "%c", VAR_1);
    FUNC_12(VAR_9, "ABOR");
    FUNC_11 (VAR_9);
    FUNC_7 (VAR_9, "\r\n");
    FUNC_5(VAR_9);
    FUNC_2 (&VAR_14);
    if (FUNC_6 (VAR_7) >= VAR_3)
 FUNC_4 (1, "fd too large");
    FUNC_1 (FUNC_6 (VAR_7), &VAR_14);
    if (VAR_11) {
 if (FUNC_6 (VAR_11) >= VAR_3)
     FUNC_4 (1, "fd too large");
 FUNC_1 (FUNC_6 (VAR_11), &VAR_14);
    }
    if ((VAR_13 = FUNC_3 (&VAR_14, 10)) <= 0) {
 if (VAR_13 < 0) {
     FUNC_15 ("abort");
 }
 if (VAR_10)
     VAR_8 = -1;
 FUNC_9 (0);
    }
    if (VAR_11 && FUNC_0 (FUNC_6 (VAR_11), &VAR_14)) {
 while (FUNC_10 (FUNC_6 (VAR_11), VAR_12, VAR_0) > 0)
                 ;
    }
    if (FUNC_8 (0) == VAR_2 && VAR_8 == 552) {

 FUNC_8 (0);
    }
    FUNC_8 (0);
}
