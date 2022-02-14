
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,char*,int ) ;
 char* VAR_5 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 () ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_11 (char*,struct stat*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char*,char*) ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (int ,int,char**,int) ;
 int FUNC_16 () ;
 int VAR_16 ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,char*) ;

int
FUNC_19(int VAR_17, char **VAR_18)
{
 int VAR_19, VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;

 while (VAR_17 > 1) {
  if (FUNC_13(VAR_18[1], "-aout") == 0) {
   VAR_22 = 1;
   VAR_17--;
   VAR_18++;
  } else if (FUNC_13(VAR_18[1], "-elf") == 0) {
   VAR_22 = 0;
   VAR_17--;
   VAR_18++;
  } else if (FUNC_13(VAR_18[1], "-32") == 0) {
   VAR_23 = 1;
   VAR_17--;
   VAR_18++;
  } else if (FUNC_13(VAR_18[1], "-soft") == 0) {
   VAR_24 = 1;
   VAR_17--;
   VAR_18++;
  } else {
   break;
  }
 }

 if (VAR_24)
  VAR_6 = VAR_1;
 else if (VAR_23)
  VAR_6 = VAR_22 ? VAR_3 : VAR_0;
 else
  VAR_6 = VAR_22 ? VAR_4 : VAR_2;
 if (VAR_17 == 1)
  VAR_14 = 1;
 else while((VAR_20 = FUNC_7(VAR_17, VAR_18, "Rf:imrsv")) != -1) {
  switch (VAR_20) {
  case 'R':
   VAR_14 = 1;
   break;
  case 'f':
   VAR_6 = VAR_12;
   break;
  case 'i':
   VAR_7 = 1;
   break;
  case 'm':
   VAR_9 = 1;
   break;
  case 'r':
   VAR_8 = 1;
   break;
  case 's':
   VAR_11 = 1;
   break;
  case 'v':
   VAR_16 = 1;
   break;
  default:
   FUNC_16();
   break;
  }
 }

 if (!VAR_22) {
  if (VAR_8)
   FUNC_8(VAR_6);
  else
   FUNC_15(VAR_6, VAR_17 - VAR_13,
       VAR_18 + VAR_13, VAR_9 || VAR_14);
  return 0;
 }


 VAR_5 = FUNC_14("");

 if (VAR_8 || VAR_9 || VAR_14) {
  if ((VAR_21 = FUNC_10()) != 0)
   return VAR_21;
 }

 if (!VAR_11 && !VAR_9 && !VAR_14)
  FUNC_12();


 if (!VAR_8) {
  for (VAR_19 = VAR_13; VAR_19 < VAR_17; VAR_19++) {
   struct stat VAR_25;

   if (FUNC_11(VAR_18[VAR_19], &VAR_25) == -1) {
    FUNC_17("%s", VAR_18[VAR_19]);
    VAR_21 = -1;
   } else if (FUNC_13(VAR_18[VAR_19], "/usr/lib") == 0) {
    FUNC_18("WARNING! '%s' can not be used", VAR_18[VAR_19]);
    VAR_21 = -1;
   } else {




    if (FUNC_0(VAR_25.st_mode))
     VAR_21 |= FUNC_5(VAR_18[VAR_19], 0);
    else
     FUNC_1(VAR_18[VAR_19]);
   }
  }
 }

 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  char *VAR_26 = FUNC_3(VAR_5, *VAR_5?":":"", VAR_15[VAR_19]);
  FUNC_6(VAR_5);
  VAR_5 = VAR_26;
 }

 if (VAR_8) {
  FUNC_9();
  return 0;
 }

 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
  VAR_21 |= FUNC_4(VAR_15[VAR_19], 1);

 VAR_21 |= FUNC_2();

 return VAR_21;
}
