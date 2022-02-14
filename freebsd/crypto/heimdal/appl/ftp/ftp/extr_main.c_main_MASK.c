
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int dummy; } ;
struct passwd {int pw_dir; } ;
typedef int homedir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int ,int ,int,char**,int*) ;
 int VAR_12 ;
 scalar_t__ FUNC_5 () ;
 struct servent* FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 scalar_t__ VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_8 (int ) ;
 struct passwd* FUNC_9 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int,char**) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int ) ;
 int VAR_24 ;
 int FUNC_15 (char*,int ,int) ;
 int VAR_25 ;
 int FUNC_16 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;

int
FUNC_17(int VAR_29, char **VAR_30)
{
 int VAR_31;
 struct passwd *VAR_32 = ((void*)0);
 char VAR_33[VAR_0];
 struct servent *VAR_34;
 int VAR_35 = 0;

 FUNC_13(VAR_30[0]);

 VAR_34 = FUNC_6("ftp", "tcp");
 if (VAR_34 == 0)
  FUNC_1(1, "ftp/tcp: unknown service");
 VAR_9 = 1;
 VAR_15 = 1;
 VAR_4 = 1;
 VAR_17 = 1;
 VAR_21 = 0;
        VAR_26 = 1;




 if(FUNC_4(VAR_12, VAR_19, VAR_29, VAR_30, &VAR_35))
  FUNC_16(1);
 if(VAR_13)
  FUNC_16(0);
 if(VAR_28) {
  FUNC_10(((void*)0));
  FUNC_2(0);
 }

 if (VAR_8) {
  VAR_20 |= VAR_3;
  VAR_7++;
 }

 VAR_29 -= VAR_35;
 VAR_30 += VAR_35;

 VAR_10 = FUNC_8(FUNC_3(VAR_24));
 if (VAR_10)
  VAR_27++;
 VAR_5 = 0;
 VAR_22 = 0;
 VAR_6 = 1;
 VAR_23 = -1;



 VAR_32 = FUNC_9(FUNC_7());
 if (VAR_32 != ((void*)0)) {
  FUNC_15(VAR_33, VAR_32->pw_dir, sizeof(VAR_33));
  VAR_14 = VAR_33;
 }
 if (VAR_29 > 0) {
     char *VAR_36[5];

     if (FUNC_11(VAR_25))
  FUNC_2(0);
     FUNC_14(VAR_1, VAR_16);
     FUNC_14(VAR_2, VAR_18);
     VAR_36[0] = (char*)FUNC_5();
     VAR_36[1] = VAR_30[0];
     VAR_36[2] = VAR_30[1];
     VAR_36[3] = VAR_30[2];
     VAR_36[4] = ((void*)0);
     FUNC_12(VAR_29+1, VAR_36);
 }
 if(FUNC_11(VAR_25) == 0)
     VAR_31 = 1;
 else
     VAR_31 = 0;
 if (VAR_31) {
     FUNC_14(VAR_1, VAR_16);
     FUNC_14(VAR_2, VAR_18);
 }
 for (;;) {
     FUNC_0(VAR_31);
     VAR_31 = 1;
 }
}
