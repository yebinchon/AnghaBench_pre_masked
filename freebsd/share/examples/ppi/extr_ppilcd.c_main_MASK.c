
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_driver {int l_finish; int (* l_prepare ) (char*,char*) ;int l_name; int * l_code; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_4 ;
 int FUNC_2 (struct lcd_driver*,char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 struct lcd_driver* VAR_5 ;
 char* VAR_6 ;
 int FUNC_7 (int ,int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_8 (char*,int *) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (char*,char*) ;

int
FUNC_13(int VAR_9, char *VAR_10[])
{
    extern char *VAR_11;
    extern int VAR_12;
    struct lcd_driver *VAR_13 = &VAR_5[0];
    char *VAR_14, *VAR_15;
    char *VAR_16 = VAR_0;
    char *VAR_17 = ((void*)0);
    int VAR_18, VAR_19;

    if ((VAR_6 = FUNC_9(VAR_10[0], '/'))) {
 VAR_6++;
    } else {
 VAR_6 = VAR_10[0];
    }

    VAR_14 = FUNC_5("LCD_TYPE");

    while ((VAR_18 = FUNC_6(VAR_9, VAR_10, "Dd:f:o:v")) != -1) {
 switch(VAR_18) {
 case 'D':
     VAR_4++;
     break;
 case 'd':
     VAR_14 = VAR_11;
     break;
 case 'f':
     VAR_16 = VAR_11;
     break;
 case 'o':
     VAR_17 = VAR_11;
     break;
 case 'v':
     VAR_8 = 1;
     break;
 default:
     FUNC_11();
 }
    }
    VAR_9 -= VAR_12;
    VAR_10 += VAR_12;


    if (VAR_14 != ((void*)0)) {
 VAR_13 = ((void*)0);
 for (VAR_19 = 0; VAR_5[VAR_19].l_code != ((void*)0); VAR_19++) {
     if (!FUNC_8(VAR_14, VAR_5[VAR_19].l_code)) {
  VAR_13 = &VAR_5[VAR_19];
  break;
     }
 }
 if (VAR_13 == ((void*)0)) {
     FUNC_12("LCD driver '%s' not known", VAR_14);
     FUNC_11();
 }
    }
    FUNC_1(1, "Driver selected for %s", VAR_13->l_name);
    VAR_13->l_prepare(VAR_16, VAR_17);
    FUNC_0(VAR_13->l_finish);

    if (VAR_9 > 0) {
 FUNC_1(2, "reading input from %d argument%s", VAR_9, (VAR_9 > 1) ? "s" : "");
 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++)
     for (VAR_15 = VAR_10[VAR_19]; *VAR_15; VAR_15++)
  FUNC_2(VAR_13, *VAR_15);
    } else {
 FUNC_1(2, "reading input from stdin");
 FUNC_7(VAR_7, ((void*)0), VAR_3, 0);
 while ((VAR_18 = FUNC_4(VAR_7)) != VAR_1)
     FUNC_2(VAR_13, (char)VAR_18);
    }
    FUNC_3(VAR_2);
}
