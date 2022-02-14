
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char**) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,int,int ) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (int ) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,char*,...) ;
 scalar_t__ FUNC_12 (char*,int ,int*) ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (int,char**) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;

int
FUNC_16(int VAR_12, char **VAR_13)
{
    char *VAR_14;
    int VAR_15;
    bool VAR_16 = VAR_5;
    int VAR_17;
    char VAR_18[VAR_0];
    int VAR_19 = 0;

    FUNC_4(VAR_10 = FUNC_3(VAR_13[0]));

    VAR_14 = FUNC_7("TERM");

    while ((VAR_17 = FUNC_8(VAR_12, VAR_13, "ST:V")) != -1) {
 switch (VAR_17) {
 case 'S':
     VAR_16 = VAR_2;
     break;
 case 'T':
     FUNC_15(VAR_2);
     VAR_14 = VAR_8;
     break;
 case 'V':
     FUNC_10(FUNC_5());
     FUNC_0(VAR_1);
 default:
     FUNC_14();

 }
    }




    if (VAR_7 || VAR_6) {
 if (VAR_9-- < VAR_12) {
     VAR_12 -= VAR_9;
     VAR_13 += VAR_9;
 }
 VAR_13[0] = VAR_10;
    } else {
 VAR_12 -= VAR_9;
 VAR_13 += VAR_9;
    }

    if (VAR_14 == 0 || *VAR_14 == '\0')
 FUNC_11(2, "No value for $TERM and no -T specified");

    if (FUNC_12(VAR_14, VAR_4, &VAR_15) != VAR_3 && VAR_15 <= 0)
 FUNC_11(3, "unknown terminal \"%s\"", VAR_14);

    if (VAR_16) {
 if ((VAR_12 <= 0) && !VAR_7 && !VAR_6)
     FUNC_14();
 FUNC_0(FUNC_13(VAR_12, VAR_13));
    }

    while (FUNC_6(VAR_18, sizeof(VAR_18), VAR_11) != 0) {
 char *VAR_20[16];
 int VAR_21 = 0;
 char *VAR_22;


 for (VAR_22 = VAR_18; *VAR_22; VAR_22++) {
     if (FUNC_9(FUNC_2(*VAR_22))) {
  *VAR_22 = '\0';
     } else if (VAR_22 == VAR_18 || VAR_22[-1] == 0) {
  VAR_20[VAR_21++] = VAR_22;
  if (VAR_21 >= (int) FUNC_1(VAR_20) - 1)
      break;
     }
 }
 VAR_20[VAR_21] = 0;

 if (VAR_21 != 0
     && FUNC_13(VAR_21, VAR_20) != 0) {
     if (VAR_19 == 0)
  VAR_19 = 4;
     ++VAR_19;
 }
    }

    FUNC_0(VAR_19);
}
