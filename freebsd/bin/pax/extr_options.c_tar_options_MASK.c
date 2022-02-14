
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;




 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;

 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int * VAR_18 ;
 int * VAR_19 ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (int *) ;
 int VAR_20 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_7 (char*) ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int,char*,...) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 struct incfile* FUNC_10 (struct incfile*,int) ;
 int FUNC_11 (char*) ;
 int VAR_31 ;
 int VAR_32 ;
 int * VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 () ;
 int VAR_35 ;
 int VAR_36 ;

__attribute__((used)) static void
FUNC_15(int VAR_37, char **VAR_38)
{
 int VAR_39;
 int VAR_40 = 0;
 int VAR_41 = 0;
 int VAR_42 = 0;
 int VAR_43 = 0;
 struct incfile {
  char *file;
  char *dir;
 };
 struct incfile *VAR_44 = ((void*)0);




 VAR_31 = 1;




 while ((VAR_39 = FUNC_6(VAR_37, VAR_38,
     "b:cef:hjmopqruts:vwxyzBC:HI:LOPXZ014578")) != -1) {
  switch(VAR_39) {
  case 'b':



   if ((VAR_36 = (int)FUNC_12(VAR_26)) <= 0) {
    FUNC_9(1, "Invalid block size %s", VAR_26);
    FUNC_14();
   }
   VAR_36 *= 512;
   break;
  case 'c':



   VAR_15 = 130;
   break;
  case 'e':



   VAR_24 = 0;
   break;
  case 'f':



   if ((VAR_26[0] == '-') && (VAR_26[1]== '\0')) {



    VAR_40 = 1;
    VAR_16 = ((void*)0);
    break;
   }
   VAR_40 = 0;
   VAR_16 = VAR_26;
   break;
  case 'h':



   VAR_12 = 1;
   break;
  case 'j':
  case 'y':



   VAR_21 = VAR_0;
   break;
  case 'm':



   VAR_30 = 0;
   break;
  case 'o':
   if (FUNC_7("write_opt=nodir") < 0)
    FUNC_14();
  case 'O':
   VAR_41 = 1;
   break;
  case 'p':



   VAR_29 = 1;
   VAR_28 = 1;
   break;
  case 'q':



   VAR_25 = 1;
   break;
  case 'r':
  case 'u':



   VAR_15 = 131;
   break;
  case 's':



   if (FUNC_11(VAR_26) < 0) {
    FUNC_14();
    break;
   }
   break;
  case 't':



   VAR_15 = 128;
   break;
  case 'v':



   VAR_35++;
   break;
  case 'w':



   VAR_22 = 1;
   break;
  case 'x':




   VAR_15 = 129;
   VAR_30 = 1;
   break;
  case 'z':



   VAR_21 = VAR_10;
   break;
  case 'B':



   break;
  case 'C':
   VAR_17 = VAR_26;
   break;
  case 'H':



   VAR_11 = 1;
   break;
  case 'I':
   if (++VAR_42 > VAR_43) {
    VAR_43 = VAR_42 + 3;
    VAR_44 = FUNC_10(VAR_44,
        sizeof(*VAR_44) * VAR_43);
    if (VAR_44 == ((void*)0)) {
     FUNC_9(0, "Unable to allocate space "
         "for option list");
     FUNC_0(1);
    }
   }
   VAR_44[VAR_42 - 1].file = VAR_26;
   VAR_44[VAR_42 - 1].dir = VAR_17;
   break;
  case 'L':



   VAR_12 = 1;
   break;
  case 'P':



   VAR_31 = 0;
   break;
  case 'X':



   VAR_13 = 1;
   break;
  case 'Z':



   VAR_21 = VAR_1;
   break;
  case '0':
   VAR_16 = VAR_2;
   break;
  case '1':
   VAR_16 = VAR_3;
   break;
  case '4':
   VAR_16 = VAR_4;
   break;
  case '5':
   VAR_16 = VAR_5;
   break;
  case '7':
   VAR_16 = VAR_6;
   break;
  case '8':
   VAR_16 = VAR_7;
   break;
  default:
   FUNC_14();
   break;
  }
 }
 VAR_37 -= VAR_27;
 VAR_38 += VAR_27;


 if (VAR_40 == 1 && VAR_15 == 130)
  VAR_23 = VAR_32;
 else
  VAR_23 = VAR_34;


 if ((VAR_15 == 130 || VAR_15 == 131) && VAR_37 == 0 && VAR_42 == 0)
  FUNC_0(0);





 if (VAR_15 == 130 || VAR_15 == 131)
  VAR_18 = &(VAR_19[VAR_41 ? VAR_8 : VAR_9]);
 else if (VAR_41) {
  FUNC_9(1, "The -O/-o options are only valid when writing an archive");
  FUNC_14();
 }




 switch (VAR_15) {
 case 128:
 case 129:
 default:
  {
   int VAR_45 = 0;
   char *VAR_46, *VAR_47 = ((void*)0);

   while (VAR_42 || *VAR_38 != ((void*)0)) {







    if (VAR_42) {
     VAR_46 = VAR_44->file;
     VAR_47 = VAR_44->dir;
     VAR_44++;
     VAR_42--;
    } else if (FUNC_13(*VAR_38, "-I") == 0) {
     if (*++VAR_38 == ((void*)0))
      break;
     VAR_46 = *VAR_38++;
     VAR_47 = VAR_17;
    } else
     VAR_46 = ((void*)0);
    if (VAR_46 != ((void*)0)) {
     FILE *VAR_48;
     char *VAR_49;

     if (FUNC_13(VAR_46, "-") == 0)
      VAR_48 = VAR_33;
     else if ((VAR_48 = FUNC_2(VAR_46, "r")) == ((void*)0)) {
      FUNC_9(1, "Unable to open file '%s' for read", VAR_46);
      FUNC_14();
     }
     while ((VAR_49 = FUNC_4(VAR_48)) != ((void*)0)) {
      if (FUNC_8(VAR_49, VAR_47) < 0)
       FUNC_14();
      VAR_45 = 1;
     }
     if (FUNC_13(VAR_46, "-") != 0)
      FUNC_1(VAR_48);
     if (VAR_20) {
      FUNC_9(1, "Problem with file '%s'", VAR_46);
      FUNC_14();
     }
    } else if (FUNC_13(*VAR_38, "-C") == 0) {
     if (*++VAR_38 == ((void*)0))
      break;
     VAR_17 = *VAR_38++;
    } else if (FUNC_8(*VAR_38++, VAR_17) < 0)
     FUNC_14();
    else
     VAR_45 = 1;
   }





   if (VAR_45 > 0)
    VAR_17 = ((void*)0);
  }
  break;
 case 130:
 case 131:
  if (VAR_17 != ((void*)0)) {
   if (FUNC_3(VAR_17, 1) < 0)
    FUNC_14();
  }

  while (VAR_42 || *VAR_38 != ((void*)0)) {
   char *VAR_50, *VAR_51 = ((void*)0);







   if (VAR_42) {
    VAR_50 = VAR_44->file;
    VAR_51 = VAR_44->dir;
    VAR_44++;
    VAR_42--;
   } else if (FUNC_13(*VAR_38, "-I") == 0) {
    if (*++VAR_38 == ((void*)0))
     break;
    VAR_50 = *VAR_38++;
    VAR_51 = ((void*)0);
   } else
    VAR_50 = ((void*)0);
   if (VAR_50 != ((void*)0)) {
    FILE *VAR_52;
    char *VAR_53;


    if (VAR_51) {
     if (FUNC_3(VAR_51, 1) < 0)
      FUNC_14();
    }

    if (FUNC_13(VAR_50, "-") == 0)
     VAR_52 = VAR_33;
    else if ((VAR_52 = FUNC_2(VAR_50, "r")) == ((void*)0)) {
     FUNC_9(1, "Unable to open file '%s' for read", VAR_50);
     FUNC_14();
    }
    while ((VAR_53 = FUNC_4(VAR_52)) != ((void*)0)) {
     if (FUNC_3(VAR_53, 0) < 0)
      FUNC_14();
    }
    if (FUNC_13(VAR_50, "-") != 0)
     FUNC_1(VAR_52);
    if (VAR_20) {
     FUNC_9(1, "Problem with file '%s'",
         VAR_50);
     FUNC_14();
    }
   } else if (FUNC_13(*VAR_38, "-C") == 0) {
    if (*++VAR_38 == ((void*)0))
     break;
    if (FUNC_3(*VAR_38++, 1) < 0)
     FUNC_14();
   } else if (FUNC_3(*VAR_38++, 0) < 0)
    FUNC_14();
  }



  VAR_24 = 0;
  break;
 }
 if (!VAR_40 && ((VAR_16 == ((void*)0)) || (*VAR_16 == '\0'))) {
  VAR_16 = FUNC_5("TAPE");
  if ((VAR_16 == ((void*)0)) || (*VAR_16 == '\0'))
   VAR_16 = VAR_14;
 }
}
