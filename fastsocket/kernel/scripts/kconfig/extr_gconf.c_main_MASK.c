
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;



 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int * FUNC_10 (char*,char*,char*,...) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int*,char***) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (char*,char*) ;
 int VAR_3 ;
 int FUNC_22 (int ) ;
 int VAR_4 ;

int FUNC_23(int VAR_5, char *VAR_6[])
{
 const char *VAR_7;
 char *VAR_8;
 gchar *VAR_9;


 FUNC_20();


 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_1, "UTF-8");
 FUNC_22(VAR_1);


 FUNC_15();
 FUNC_13(&VAR_5, &VAR_6);
 FUNC_12();





 VAR_8 = FUNC_11(VAR_2);
 if (VAR_8)
  VAR_9 = FUNC_10(VAR_8, "/scripts/kconfig/gconf.glade", ((void*)0));
 else if (VAR_6[0][0] == '/')
  VAR_9 = FUNC_10(VAR_6[0], ".glade", ((void*)0));
 else
  VAR_9 = FUNC_10(FUNC_9(), "/", VAR_6[0], ".glade", ((void*)0));


 FUNC_17(VAR_9);
 FUNC_19();
 FUNC_16();
 FUNC_18();


 if (VAR_5 > 1 && VAR_6[1][0] == '-') {
  switch (VAR_6[1][1]) {
  case 'a':

   break;
  case 'h':
  case '?':
   FUNC_21("%s <config>\n", VAR_6[0]);
   FUNC_7(0);
  }
  VAR_7 = VAR_6[2];
 } else
  VAR_7 = VAR_6[1];

 FUNC_2(VAR_7);
 FUNC_8(&VAR_3);
 FUNC_3(((void*)0));

 switch (VAR_4) {
 case 129:
  FUNC_6();
  break;
 case 128:
  FUNC_4();
  break;
 case 130:
  FUNC_5(&VAR_3);
  break;
 }

 FUNC_14();

 return 0;
}
