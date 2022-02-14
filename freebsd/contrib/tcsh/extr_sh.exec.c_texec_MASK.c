
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int ** vec; } ;
struct stat {int st_mode; } ;
typedef int Char ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int ** FUNC_1 (int *) ;
 int ** VAR_8 ;
 char** VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct varent* FUNC_4 (int ,int *) ;
 int VAR_10 ;
 int FUNC_5 (int **) ;
 int ** FUNC_6 (int **,int **) ;
 int VAR_11 ;
 int FUNC_7 (char*,char**) ;
 int VAR_12 ;
 int ** VAR_13 ;
 int FUNC_8 (int,int ***) ;
 int FUNC_9 (unsigned char) ;
 int FUNC_10 (char*,char**) ;
 int ** FUNC_11 (int **) ;
 char** FUNC_12 (int **) ;
 char* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int) ;
 int * FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int **) ;
 int FUNC_20 (char*,int) ;
 int FUNC_21 (int,char*,int) ;

__attribute__((used)) static void
FUNC_22(Char *VAR_14, Char **VAR_15)
{
    char **VAR_16;
    char *VAR_17;
    struct varent *VAR_18;
    Char **VAR_19;
    Char *VAR_20[2];
    char VAR_21[2];
    int VAR_22;
    Char *VAR_23, **VAR_24;


    VAR_16 = FUNC_12(VAR_15);
    VAR_17 = FUNC_13(VAR_14);



    VAR_11 = 0;
    {



 (void) FUNC_7(VAR_17, VAR_16);



    }



    FUNC_5((Char **) VAR_16);
    switch (VAR_11) {

    case 129:







 if ((VAR_22 = FUNC_20(VAR_17, VAR_4|VAR_3)) != -1) {
     int VAR_25;
     if ((VAR_25 = FUNC_21(VAR_22, VAR_21, 2)) == 2) {
  if (!FUNC_9((unsigned char)VAR_21[0]) &&
      (VAR_21[0] != '\n' && VAR_21[0] != '\t')) {
      int VAR_26;

      VAR_26 = VAR_11;
      FUNC_18(VAR_22);



      FUNC_15(VAR_1, VAR_17, FUNC_16(VAR_26));
  }
     }
     else if (VAR_25 < 0) {
     }






 }
     VAR_18 = FUNC_4(VAR_7, &VAR_10);
     if (VAR_18 == ((void*)0) || VAR_18->vec == ((void*)0)) {
  VAR_19 = VAR_20;
  VAR_19[0] = FUNC_3(VAR_7) ? FUNC_17(VAR_7) : VAR_6;
  VAR_19[1] = ((void*)0);
  VAR_19 = FUNC_11(VAR_19);
     }
     else
  VAR_19 = FUNC_11(VAR_18->vec);



 if (VAR_22 != -1)
     FUNC_18(VAR_22);

 VAR_23 = VAR_15[0];
 VAR_15[0] = VAR_14;
 VAR_24 = VAR_15;
 VAR_15 = FUNC_6(VAR_19, VAR_15);
 VAR_24[0] = VAR_23;
 VAR_14 = *VAR_15;

 VAR_16 = FUNC_12(VAR_15);
 VAR_17 = FUNC_13(VAR_14);
 FUNC_19(VAR_15);
 FUNC_5((Char **) VAR_19);






 (void) FUNC_7(VAR_17, VAR_16);






 FUNC_5((Char **) VAR_16);

 FUNC_15(VAR_2, VAR_17, FUNC_16(VAR_11));
 break;

    case 128:
 FUNC_15(VAR_2, VAR_17, FUNC_16(VAR_11));
 break;




    case 130:
 break;

    default:
 if (VAR_12 == 0) {
     VAR_12 = FUNC_16(VAR_11);
     FUNC_19(VAR_13);
     VAR_13 = FUNC_1(VAR_14);



 }
 break;
    }
}
