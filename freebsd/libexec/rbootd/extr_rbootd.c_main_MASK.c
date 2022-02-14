
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int fd_set ;
typedef int RMPCONN ;
typedef int FILE ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char**) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* VAR_6 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 scalar_t__ VAR_7 ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int,int *) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 () ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_13 () ;
 char* VAR_18 ;
 int FUNC_14 (int *,int *) ;
 int VAR_19 ;
 int FUNC_15 (int ) ;
 int * VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int ,int ) ;
 int FUNC_20 (int,char*) ;
 scalar_t__ VAR_26 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int * FUNC_23 (char*,char*) ;
 int FUNC_24 (int *,char*,int) ;
 int FUNC_25 () ;
 scalar_t__ FUNC_26 (char*,int) ;
 int FUNC_27 (int,char**,char*) ;
 scalar_t__ FUNC_28 () ;
 int FUNC_29 (char*,int ,int ) ;
 char* VAR_27 ;
 int VAR_28 ;
 int FUNC_30 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,int (*) (int )) ;
 int FUNC_34 (int) ;
 int * VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int FUNC_35 (int ,char*,...) ;
 int FUNC_36 () ;
 int FUNC_37 (char*,char*) ;

int
FUNC_38(int VAR_32, char *VAR_33[])
{
 int VAR_34, VAR_35, VAR_36, VAR_37;
 fd_set VAR_38;






 {
  int VAR_39, VAR_40 = FUNC_25();

  for (VAR_39 = 0; VAR_39 < VAR_40; VAR_39++)
   if (VAR_39 != FUNC_22(VAR_30) && VAR_39 != FUNC_22(VAR_31) &&
       VAR_39 != FUNC_22(VAR_29))
    (void) FUNC_18(VAR_39);
 }




 while ((VAR_34 = FUNC_27(VAR_32, VAR_33, "adi:")) != -1)
  switch(VAR_34) {
      case 'a':
   VAR_0++;
   break;
      case 'd':
   VAR_5++;
   break;
      case 'i':
   VAR_8 = VAR_27;
   break;
      default:
   FUNC_36();
  }
 for (; VAR_28 < VAR_32; VAR_28++) {
  if (VAR_2 == ((void*)0))
   VAR_2 = VAR_33[VAR_28];
  else {
   FUNC_37("too many config files (`%s' ignored)",
       VAR_33[VAR_28]);
  }
 }

 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_6;

 if (VAR_5) {
  VAR_4 = VAR_31;

  (void) FUNC_33(VAR_24, FUNC_16);
  (void) FUNC_33(VAR_25, FUNC_16);
  (void) FUNC_21(VAR_29);
 } else {
  if (FUNC_19(0, 0))
   FUNC_20(1, "can't detach from terminal");

  (void) FUNC_33(VAR_24, FUNC_4);
  (void) FUNC_33(VAR_25, FUNC_3);
 }

 FUNC_29("rbootd", VAR_13, VAR_9);
 if (VAR_8 == ((void*)0)) {
  char *VAR_41;

  if ((VAR_8 = FUNC_0(&VAR_41)) == ((void*)0)) {

   FUNC_35(VAR_12, "restarted (?\?)");

   FUNC_35(VAR_10, "%s", VAR_41);
   FUNC_8(0);
  }
 }

 FUNC_35(VAR_12, "restarted (%s)", VAR_8);

 (void) FUNC_33(VAR_21, FUNC_15);
 (void) FUNC_33(VAR_22, FUNC_8);
 (void) FUNC_33(VAR_23, FUNC_8);




 if (FUNC_26(VAR_16, VAR_15 - 1) < 0) {
  FUNC_35(VAR_10, "gethostname: %m");
  FUNC_8(0);
 }
 VAR_16[VAR_15 - 1] = '\0';

 VAR_17 = FUNC_28();




 {
  FILE *VAR_42;

  if ((VAR_42 = FUNC_23(VAR_18, "w")) != ((void*)0)) {
   (void) FUNC_24(VAR_42, "%d\n", (int) VAR_17);
   (void) FUNC_21(VAR_42);
  } else {
   FUNC_35(VAR_14, "fopen: failed (%s)", VAR_18);
  }
 }





 if (FUNC_17(VAR_1) < 0) {
  FUNC_35(VAR_10, "chdir: %m (%s)", VAR_1);
  FUNC_8(0);
 }




 VAR_36 = FUNC_31(FUNC_32(VAR_21));
 if (FUNC_12() == 0)
  FUNC_8(0);
 if (FUNC_13() == 0)
  FUNC_8(0);






 VAR_35 = FUNC_1();

 (void) FUNC_34(VAR_36);





 VAR_37 = VAR_35 + 1;
 FUNC_11(&VAR_38);
 FUNC_10(VAR_35, &VAR_38);
 for (;;) {
  struct timeval VAR_43;
  fd_set VAR_44;
  int VAR_45;

  VAR_44 = VAR_38;

  if (VAR_20 == ((void*)0)) {
   VAR_45 = FUNC_30(VAR_37, &VAR_44, ((void*)0), ((void*)0), ((void*)0));
  } else {
   VAR_43.tv_sec = VAR_19;
   VAR_43.tv_usec = 0;
   VAR_45 = FUNC_30(VAR_37, &VAR_44, ((void*)0), ((void*)0), &VAR_43);
  }

  if (VAR_45 < 0) {
   if (VAR_26 == VAR_7)
    continue;
   FUNC_35(VAR_10, "select: %m");
   FUNC_8(0);
  } else if (VAR_45 == 0) {
   FUNC_6();
   continue;
  }

  if (FUNC_9(VAR_35, &VAR_44)) {
   RMPCONN VAR_46;
   CLIENT *VAR_47, *FUNC_39();
   int VAR_48 = 1;

   while (FUNC_2(&VAR_46, VAR_48)) {
    VAR_48 = 0;

    if (VAR_4 != ((void*)0))
     FUNC_5(&VAR_46,VAR_3);

    VAR_36 = FUNC_31(FUNC_32(VAR_21));
    if (VAR_0) {
     VAR_47 = ((void*)0);
    } else if ((VAR_47=FUNC_39(&VAR_46))==((void*)0)) {
     FUNC_35(VAR_11,
            "%s: boot packet ignored",
            FUNC_7(&VAR_46));
     (void) FUNC_34(VAR_36);
     continue;
    }

    FUNC_14(&VAR_46,VAR_47);

    (void) FUNC_34(VAR_36);
   }
  }
 }
}
