
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sighand ;
typedef int fd_set ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int * VAR_7 ;
 int FUNC_3 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (char*,...) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_13 ;
 int FUNC_10 (char*,...) ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int ,int *) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_16 (char*) ;

void
FUNC_17 (char *VAR_22, char *VAR_23, char *VAR_24)
{
    sighand VAR_25 = ((void*)0);
    int VAR_26 = 0, VAR_27, VAR_28;
    char *VAR_29;
    fd_set VAR_30;

    if (FUNC_15 (VAR_22, "RETR"))
 VAR_29 = "RETR";
    else
 VAR_29 = VAR_18 ? "STOU" : "STOR";
    if ((VAR_27 = VAR_19) == 0) {
 if (VAR_21 && VAR_20)
     VAR_27 = VAR_6;
 else
     VAR_27 = VAR_5;
    }
    if (VAR_12 != VAR_27)
 FUNC_3 (VAR_27, 1);
    if (FUNC_4 ("PASV") != VAR_0) {
 FUNC_10 ("proxy server does not support third party transfers.\n");
 return;
    }
    FUNC_11 (0);
    if (!VAR_10) {
 FUNC_10 ("No primary connection\n");
 FUNC_11 (1);
 VAR_9 = -1;
 return;
    }
    if (VAR_12 != VAR_27)
 FUNC_3 (VAR_27, 1);
    if (FUNC_4 ("PORT %s", VAR_13) != VAR_0) {
 FUNC_11 (1);
 return;
    }
    if (FUNC_12 (VAR_16))
 goto abort;
    VAR_25 = FUNC_13 (VAR_3, VAR_7);
    if (FUNC_4 ("%s %s", VAR_22, VAR_24) != VAR_2) {
 FUNC_13 (VAR_3, VAR_25);
 FUNC_11 (1);
 return;
    }
    FUNC_14 (2);
    FUNC_11 (1);
    VAR_26++;
    if (FUNC_4 ("%s %s", VAR_29, VAR_23) != VAR_2)
 goto abort;
    VAR_17++;
    FUNC_8 (0);
    FUNC_11 (0);
    FUNC_8 (0);
    FUNC_13 (VAR_3, VAR_25);
    FUNC_11 (1);
    VAR_17 = 0;
    FUNC_10 ("local: %s remote: %s\n", VAR_23, VAR_24);
    return;
abort:
    FUNC_13 (VAR_3, VAR_4);
    VAR_17 = 0;
    if (FUNC_15 (VAR_22, "RETR") && !VAR_14)
 FUNC_11 (1);
    else if (!FUNC_15 (VAR_22, "RETR") && VAR_14)
 FUNC_11 (0);
    if (!VAR_11 && !VAR_26) {
 if (FUNC_4 ("%s %s", VAR_29, VAR_23) != VAR_2) {
     FUNC_11 (0);
     if (VAR_11)
  FUNC_2 ((FILE *) ((void*)0));
 }
 FUNC_11 (1);
 if (VAR_15)
     VAR_9 = -1;
 if (VAR_25)
     FUNC_13 (VAR_3, VAR_25);
 return;
    }
    if (VAR_11)
 FUNC_2 ((FILE *) ((void*)0));
    FUNC_11 (!VAR_14);
    if (!VAR_11 && !VAR_26) {
 if (FUNC_4 ("%s %s", VAR_29, VAR_23) != VAR_2) {
     FUNC_11 (0);
     if (VAR_11)
  FUNC_2 ((FILE *) ((void*)0));
     FUNC_11 (1);
     if (VAR_15)
  VAR_9 = -1;
     FUNC_13 (VAR_3, VAR_25);
     return;
 }
    }
    if (VAR_11)
 FUNC_2 ((FILE *) ((void*)0));
    FUNC_11 (!VAR_14);
    if (VAR_11) {
 FUNC_1 (&VAR_30);
 if (FUNC_7(VAR_8) >= VAR_1)
     FUNC_6 (1, "fd too large");
 FUNC_0 (FUNC_7 (VAR_8), &VAR_30);
 if ((VAR_28 = FUNC_5 (&VAR_30, 10)) <= 0) {
     if (VAR_28 < 0) {
  FUNC_16 ("abort");
     }
     if (VAR_15)
  VAR_9 = -1;
     FUNC_9 (0);
 }
 FUNC_8 (0);
 FUNC_8 (0);
    }
    if (VAR_14)
 FUNC_11 (0);
    FUNC_11 (1);
    if (VAR_15)
 VAR_9 = -1;
    FUNC_13 (VAR_3, VAR_25);
}
