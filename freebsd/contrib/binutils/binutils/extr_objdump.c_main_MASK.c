
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum demangling_styles { ____Placeholder_demangling_styles } demangling_styles ;
typedef void* bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_1 (char*,int ) ;
 void* VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 void* VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (char*,char*,char*,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 char* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 char* VAR_14 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_11 (int*,char***) ;
 int FUNC_12 (int ,char*) ;
 void* VAR_41 ;
 int FUNC_13 (int,char**,char*,int ,int*) ;
 int VAR_42 ;
 char* VAR_43 ;
 int FUNC_14 (int ,...) ;
 char** VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 char* VAR_47 ;
 int VAR_48 ;
 void* FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;
 char* VAR_49 ;
 int FUNC_17 () ;
 int FUNC_18 (int ,char*) ;
 void* VAR_50 ;
 void* VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 void* VAR_54 ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,char*,int ) ;
 int FUNC_22 (int ) ;
 int VAR_55 ;
 int FUNC_23 (int ,int) ;
 void* VAR_56 ;
 void* VAR_57 ;
 void* VAR_58 ;
 int FUNC_24 (char*) ;
 char** FUNC_25 (char**,int) ;

int
FUNC_26 (int VAR_59, char **VAR_60)
{
  int VAR_61;
  char *VAR_62 = VAR_10;
  bfd_boolean VAR_63 = VAR_3;
  FUNC_5 (VAR_7, VAR_6);
  FUNC_22 (VAR_7);

  VAR_49 = *VAR_60;
  FUNC_24 (VAR_49);

  FUNC_1 (VAR_49, 0);

  FUNC_11 (&VAR_59, &VAR_60);

  FUNC_4 ();
  FUNC_17 ();

  while ((VAR_61 = FUNC_13 (VAR_59, VAR_60, "pib:m:M:VvCdDlfaHhrRtTxsSI:j:wE:zgeGW",
      VAR_42, (int *) 0))
  != VAR_2)
    {
      switch (VAR_61)
 {
 case 0:
   break;
 case 'm':
   VAR_43 = VAR_47;
   break;
 case 'M':
   if (VAR_14)

     VAR_14 = FUNC_6 (VAR_14, ",",
        VAR_47, ((void*)0));
   else
     VAR_14 = VAR_47;
   break;
 case 'j':
   if (VAR_46 == VAR_45)
     {
       VAR_45 += 8;
       VAR_44 = FUNC_25 (VAR_44, VAR_45 * sizeof (char *));
     }
   VAR_44 [VAR_46++] = VAR_47;
   break;
 case 'l':
   VAR_57 = VAR_8;
   break;
 case 'b':
   VAR_62 = VAR_47;
   break;
 case 'C':
   VAR_25 = VAR_8;
   if (VAR_47 != ((void*)0))
     {
       enum demangling_styles VAR_64;

       VAR_64 = FUNC_7 (VAR_47);
       if (VAR_64 == VAR_55)
  FUNC_12 (FUNC_2("unknown demangling style `%s'"),
         VAR_47);

       FUNC_8 (VAR_64);
     }
   break;
 case 'w':
   VAR_56 = VAR_8;
   break;
 case 131:
   VAR_9 = FUNC_15 (VAR_47, "--adjust-vma");
   break;
 case 129:
   VAR_51 = FUNC_15 (VAR_47, "--start-address");
   break;
 case 128:
   VAR_54 = FUNC_15 (VAR_47, "--stop-address");
   break;
 case 'E':
   if (FUNC_19 (VAR_47, "B") == 0)
     VAR_39 = VAR_0;
   else if (FUNC_19 (VAR_47, "L") == 0)
     VAR_39 = VAR_1;
   else
     {
       FUNC_14 (FUNC_2("unrecognized -E option"));
       FUNC_23 (VAR_52, 1);
     }
   break;
 case 130:
   if (FUNC_21 (VAR_47, "big", FUNC_20 (VAR_47)) == 0)
     VAR_39 = VAR_0;
   else if (FUNC_21 (VAR_47, "little", FUNC_20 (VAR_47)) == 0)
     VAR_39 = VAR_1;
   else
     {
       FUNC_14 (FUNC_2("unrecognized --endian type `%s'"), VAR_47);
       FUNC_23 (VAR_52, 1);
     }
   break;

 case 'f':
   VAR_32 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'i':
   VAR_41 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'I':
   FUNC_3 (VAR_47);
   break;
 case 'p':
   VAR_33 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'x':
   VAR_33 = VAR_8;
   VAR_38 = VAR_8;
   VAR_34 = VAR_8;
   VAR_32 = VAR_8;
   VAR_26 = VAR_8;
   VAR_36 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 't':
   VAR_38 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'T':
   VAR_31 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'd':
   VAR_11 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'z':
   VAR_13 = VAR_8;
   break;
 case 'D':
   VAR_11 = VAR_8;
   VAR_12 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'S':
   VAR_11 = VAR_8;
   VAR_58 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'g':
   VAR_27 = 1;
   VAR_63 = VAR_8;
   break;
 case 'e':
   VAR_27 = 1;
   VAR_28 = 1;
   VAR_25 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'W':
   VAR_29 = VAR_8;
   VAR_63 = VAR_8;
   VAR_18 = 1;
   VAR_15 = 1;
   VAR_19 = 1;
   VAR_22 = 1;
   VAR_16 = 1;
   VAR_23 = 1;
   VAR_17 = 1;
   VAR_21 = 1;
   VAR_24 = 1;
   VAR_20 = 1;
   break;
 case 'G':
   VAR_37 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 's':
   VAR_35 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'r':
   VAR_34 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'R':
   VAR_30 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'a':
   VAR_26 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'h':
   VAR_36 = VAR_8;
   VAR_63 = VAR_8;
   break;
 case 'H':
   FUNC_23 (VAR_53, 0);
   VAR_63 = VAR_8;
 case 'v':
 case 'V':
   VAR_50 = VAR_8;
   VAR_63 = VAR_8;
   break;

 default:
   FUNC_23 (VAR_52, 1);
 }
    }

  if (VAR_50)
    FUNC_16 ("objdump");

  if (!VAR_63)
    FUNC_23 (VAR_52, 2);

  if (VAR_41)
    VAR_40 = FUNC_10 ();
  else
    {
      if (VAR_48 == VAR_59)
 FUNC_9 ("a.out", VAR_62);
      else
 for (; VAR_48 < VAR_59;)
   FUNC_9 (VAR_60[VAR_48++], VAR_62);
    }

  FUNC_0 (VAR_49);

  return VAR_40;
}
