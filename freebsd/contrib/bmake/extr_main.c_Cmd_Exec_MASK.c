
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int result ;
typedef int WAIT_T ;
typedef int Buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char const**) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;
 int VAR_3 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int*) ;
 int FUNC_16 (int,char*,int) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_17 () ;
 int FUNC_18 (int,int *,int ) ;

char *
FUNC_19(const char *VAR_6, const char **VAR_7)
{
    const char *VAR_8[4];
    int VAR_9[2];
    int VAR_10;
    int VAR_11;
    char *VAR_12;
    WAIT_T VAR_13;
    Buffer VAR_14;
    char *VAR_15;
    int VAR_16;
    int VAR_17;


    *VAR_7 = ((void*)0);

    if (!VAR_4)
 FUNC_5();



    VAR_8[0] = VAR_4;
    VAR_8[1] = "-c";
    VAR_8[2] = VAR_6;
    VAR_8[3] = ((void*)0);




    if (FUNC_15(VAR_9) == -1) {
 *VAR_7 = "Couldn't create pipe for \"%s\"";
 goto bad;
    }




    switch (VAR_10 = FUNC_17()) {
    case 0:



 (void)FUNC_12(VAR_9[0]);






 (void)FUNC_13(VAR_9[1], 1);
 (void)FUNC_12(VAR_9[1]);

 FUNC_7();

 (void)FUNC_14(VAR_5, FUNC_6(VAR_8));
 FUNC_10(1);


    case -1:
 *VAR_7 = "Couldn't exec \"%s\"";
 goto bad;

    default:



 (void)FUNC_12(VAR_9[1]);

 VAR_17 = 0;
 FUNC_2(&VAR_14, 0);

 do {
     char VAR_18[VAR_0];
     VAR_16 = FUNC_16(VAR_9[0], VAR_18, sizeof(VAR_18));
     if (VAR_16 > 0)
  FUNC_0(&VAR_14, VAR_16, VAR_18);
 }
 while (VAR_16 > 0 || (VAR_16 == -1 && VAR_3 == VAR_1));
 if (VAR_16 == -1)
     VAR_17 = VAR_3;




 (void)FUNC_12(VAR_9[0]);




 while(((VAR_11 = FUNC_18(VAR_10, &VAR_13, 0)) != VAR_10) && (VAR_11 >= 0)) {
     FUNC_4(VAR_11, VAR_13, VAR_2);
     continue;
 }
 VAR_16 = FUNC_3(&VAR_14);
 VAR_12 = FUNC_1(&VAR_14, VAR_2);

 if (VAR_17 != 0)
     *VAR_7 = "Couldn't read shell's output for \"%s\"";

 if (FUNC_9(VAR_13))
     *VAR_7 = "\"%s\" exited on a signal";
 else if (FUNC_8(VAR_13) != 0)
     *VAR_7 = "\"%s\" returned non-zero status";





 VAR_12[VAR_16] = '\0';
 VAR_15 = &VAR_12[VAR_16];

 if (VAR_16 > 0 && *--VAR_15 == '\n') {



     *VAR_15-- = '\0';
 }
 while (VAR_15 >= VAR_12) {
     if (*VAR_15 == '\n') {
  *VAR_15 = ' ';
     }
     VAR_15--;
 }
 break;
    }
    return VAR_12;
bad:
    VAR_12 = FUNC_11(1);
    *VAR_12 = '\0';
    return VAR_12;
}
