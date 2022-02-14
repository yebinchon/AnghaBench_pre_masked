
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 char* VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (char*,int ,int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 char* VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 char* VAR_37 ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;
 int VAR_38 ;
 int FUNC_10 (char*,char*,char*) ;
 int FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,...) ;
 int FUNC_18 (int ) ;

void
FUNC_19()
{
 FILE *VAR_39;
 FILE *VAR_40 = ((void*)0);
 char *VAR_41 = ".init.ee";
 char *VAR_42 = "~/.init.ee";
 char VAR_43[512];
 struct stat VAR_44;
 char *VAR_45;
 int VAR_46;
 int VAR_47 = 0;

 if (FUNC_9())
 {
  return;
 }

 VAR_47 = FUNC_7(VAR_27);

 FUNC_15(VAR_23);
 FUNC_16(VAR_23, 0, 0);

 if (VAR_47 == 0)
 {
  FUNC_17(VAR_23, VAR_26);
  FUNC_18(VAR_23);
  return;
 }
 else if (VAR_47 == 2)
  VAR_41 = FUNC_8(VAR_42);





 if (FUNC_11(VAR_41, &VAR_44) != -1)
 {
  FUNC_10(VAR_43, "%s.old", VAR_41);
  FUNC_14(VAR_43);
  FUNC_6(VAR_41, VAR_43);
  FUNC_14(VAR_41);
  VAR_40 = FUNC_3(VAR_43, "r");
 }

 VAR_39 = FUNC_3(VAR_41, "w");
 if (VAR_39 == ((void*)0))
 {
  FUNC_17(VAR_23, VAR_24);
  FUNC_18(VAR_23);
  return;
 }

 if (VAR_40 != ((void*)0))
 {



  while ((VAR_45 = FUNC_2(VAR_43, 512, VAR_40)) != ((void*)0))
  {
   VAR_46 = FUNC_12(VAR_45);
   VAR_45[VAR_46 - 1] = '\0';

   if (FUNC_13(VAR_45, VAR_33) == 1)
   {
    if (FUNC_0(VAR_45, VAR_5, VAR_6))
    {
     FUNC_4(VAR_39, "%s\n", VAR_45);
    }
   }
   else
    FUNC_4(VAR_39, "%s\n", VAR_45);
  }

  FUNC_1(VAR_40);
 }

 FUNC_4(VAR_39, "%s\n", VAR_21 ? VAR_1 : VAR_11);
 FUNC_4(VAR_39, "%s\n", VAR_31 ? VAR_4 : VAR_14);
 FUNC_4(VAR_39, "%s\n", VAR_32 ? VAR_8 : VAR_16 );
 FUNC_4(VAR_39, "%s\n", VAR_36 ? VAR_9 : VAR_17 );
 FUNC_4(VAR_39, "%s\n", VAR_20 ? VAR_0 : VAR_10 );
 FUNC_4(VAR_39, "%s %s\n", VAR_18, VAR_37);
 FUNC_4(VAR_39, "%s %d\n", VAR_19, VAR_38);
 FUNC_4(VAR_39, "%s\n", VAR_35 ? VAR_15 : VAR_7 );
 FUNC_4(VAR_39, "%s\n", VAR_29 ? VAR_2 : VAR_12 );
 FUNC_4(VAR_39, "%s\n", VAR_30 ? VAR_3 : VAR_13 );
 FUNC_4(VAR_39, "%s\n", VAR_28 ? VAR_22 : VAR_34 );

 FUNC_1(VAR_39);

 FUNC_17(VAR_23, VAR_25, VAR_41);
 FUNC_18(VAR_23);

 if ((VAR_47 == 2) && (VAR_41 != VAR_42))
 {
  FUNC_5(VAR_41);
 }
}
