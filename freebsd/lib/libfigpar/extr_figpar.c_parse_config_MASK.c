
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct figpar_config {int (* action ) (struct figpar_config*,int,char*,char*) ;int * directive; } ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (int,int,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int,char*,int) ;
 char* FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char*,char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct figpar_config*,int,char*,char*) ;

int
FUNC_14(struct figpar_config VAR_11[], const char *VAR_12,
    int (*VAR_13)(struct figpar_config *VAR_14, uint32_t VAR_15,
    char *VAR_16, char *VAR_17), uint16_t VAR_18)
{
 uint8_t VAR_19;
 uint8_t VAR_20;
 uint8_t VAR_21;
 uint8_t VAR_22 = 0;
 uint8_t VAR_23;
 uint8_t VAR_24;
 uint8_t VAR_25 = 0;
 uint8_t VAR_26;
 uint8_t VAR_27;
 uint8_t VAR_28;
 char VAR_29[2];
 char *VAR_30;
 char *VAR_31;
 char *VAR_32;
 int VAR_33;
 int VAR_34;
 ssize_t VAR_35 = 1;
 uint32_t VAR_36;
 uint32_t VAR_37 = 1;
 uint32_t VAR_38;
 uint32_t VAR_39;
 uint32_t VAR_40;
 off_t VAR_41;
 off_t VAR_42;
 char VAR_43[VAR_8];


 if (VAR_11 == ((void*)0) && VAR_13 == ((void*)0))
  return (-1);


 VAR_19 = (VAR_18 & VAR_0) == 0 ? 0 : 1;
 VAR_20 =
  (VAR_18 & VAR_1) == 0 ? 0 : 1;
 VAR_21 =
  (VAR_18 & VAR_2) == 0 ? 0 : 1;
 VAR_27 =
  (VAR_18 & VAR_3) == 0 ? 0 : 1;
 VAR_28 =
  (VAR_18 & VAR_4) == 0 ? 0 : 1;


 VAR_30 = VAR_32 = 0;
 VAR_39 = VAR_36 = 0;


 if (FUNC_8(VAR_12, VAR_43) == 0)
  return (-1);


 if ((VAR_34 = FUNC_5(VAR_43, VAR_7)) < 0)
  return (-1);


 while (VAR_35 != 0) {
  VAR_35 = FUNC_6(VAR_34, VAR_29, 1);


  while (VAR_35 != 0 && (FUNC_2(*VAR_29) || *VAR_29 == '#' || VAR_22 ||
      (VAR_20 && *VAR_29 == ';'))) {
   if (*VAR_29 == '#')
    VAR_22 = 1;
   else if (*VAR_29 == '\n') {
    VAR_22 = 0;
    VAR_37++;
   }
   VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
  }

  if (VAR_35 == 0) {
   FUNC_0(VAR_34);
   return (0);
  }


  VAR_42 = FUNC_3(VAR_34, 0, VAR_9) - 1;
  if (VAR_42 == -1) {
   FUNC_0(VAR_34);
   return (-1);
  }


  for (VAR_38 = 0; VAR_35 != 0; VAR_38++) {
   if (FUNC_2(*VAR_29))
    break;
   if (VAR_19 && *VAR_29 == '=') {
    VAR_25 = 1;
    break;
   }
   if (VAR_20 && *VAR_29 == ';')
    break;
   VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
  }


  if (VAR_38 == 0 && VAR_35 == 0) {
   FUNC_0(VAR_34);
   return (0);
  }


  VAR_33 = (int)FUNC_3(VAR_34, VAR_42, VAR_10);
  if (VAR_33 == (VAR_42 - 1)) {
   FUNC_0(VAR_34);
   return (-1);
  }


  if (VAR_38 > VAR_36) {
   if ((VAR_30 = FUNC_7(VAR_30, VAR_38 + 1)) == ((void*)0)) {
    FUNC_0(VAR_34);
    return (-1);
   }
   VAR_36 = VAR_38;
  }
  VAR_35 = FUNC_6(VAR_34, VAR_30, VAR_38);


  if (VAR_19 && *VAR_29 == '=') {
   if (FUNC_3(VAR_34, 1, VAR_9) != -1)
    VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
   if (VAR_28 && FUNC_2(*VAR_29))
    *VAR_29 = '\n';
  }


  VAR_30[VAR_38] = '\0';


  if (!VAR_21)
   FUNC_12(VAR_30);


  if (!(VAR_20 && *VAR_29 == ';') &&
      !(VAR_28 && *VAR_29 == '=')) {
   while (VAR_35 != 0 && FUNC_2(*VAR_29) && *VAR_29 != '\n')
    VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
  }


  if (VAR_35 != 0 && VAR_19 && *VAR_29 == '=' && !VAR_28) {
   VAR_25 = 1;
   VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
   while (VAR_35 != 0 && FUNC_2(*VAR_29) && *VAR_29 != '\n')
    VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
  }


  if (VAR_35 == 0 || *VAR_29 == '\n' || *VAR_29 == '#' ||
      (VAR_20 && *VAR_29 == ';')) {

   if (VAR_32 == ((void*)0) && (VAR_32 = FUNC_4(1)) == ((void*)0)) {
    FUNC_0(VAR_34);
    return (-1);
   }
   VAR_32[0] = '\0';
   goto call_function;
  }


  VAR_42 = FUNC_3(VAR_34, 0, VAR_9) - 1;
  if (VAR_42 == -1) {
   FUNC_0(VAR_34);
   return (-1);
  }


  VAR_26 = 0;
  VAR_23 = 0;
  while (VAR_35 != 0 && VAR_23 == 0) {

   if (*VAR_29 != '\"' && *VAR_29 != '#' && *VAR_29 != '\n' &&
       (!VAR_20 || *VAR_29 != ';')) {
    VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
    continue;
   }






   VAR_41 = FUNC_3(VAR_34, 0, VAR_9) - 1;
   if (VAR_41 == -1) {
    FUNC_0(VAR_34);
    return (-1);
   }






   VAR_33 = (int)FUNC_3(VAR_34, -2, VAR_9);
   if (VAR_33 == -3) {
    FUNC_0(VAR_34);
    return (-1);
   }
   VAR_35 = FUNC_6(VAR_34, VAR_29, 1);





   for (VAR_38 = 1; *VAR_29 == '\\'; VAR_38++) {

    VAR_33 = (int)FUNC_3(VAR_34, -2, VAR_9);
    if (VAR_33 == -3) {
     FUNC_0(VAR_34);
     return (-1);
    }
    VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
   }


   VAR_33 = (int)FUNC_3(VAR_34, VAR_41, VAR_10);
   if (VAR_33 == (VAR_41 - 1)) {
    FUNC_0(VAR_34);
    return (-1);
   }
   VAR_35 = FUNC_6(VAR_34, VAR_29, 1);





   if ((VAR_38 & 1) == 1) {
    switch (*VAR_29) {
    case '\"':





     VAR_26 = !VAR_26;
     break;
    case '#':





     if (!VAR_26)
      VAR_23 = 1;
     break;
    case '\n':






     VAR_23 = 1;
    case ';':
     if (!VAR_26 && VAR_20)
      VAR_23 = 1;
     break;
    }
   } else if (*VAR_29 == '\n')

    VAR_37++;


   VAR_35 = FUNC_6(VAR_34, VAR_29, 1);
  }


  VAR_41 = FUNC_3(VAR_34, 0, VAR_9) - 1;
  if (VAR_41 == -1) {
   FUNC_0(VAR_34);
   return (-1);
  }


  VAR_38 = (uint32_t)(VAR_41 - VAR_42);
  if (VAR_35 != 0)
   VAR_38--;


  VAR_33 = (int)FUNC_3(VAR_34, VAR_42, VAR_10);
  if (VAR_33 == (VAR_42 - 1)) {
   FUNC_0(VAR_34);
   return (-1);
  }


  if (VAR_38 > VAR_39) {
   if ((VAR_32 = FUNC_7(VAR_32, VAR_38 + 1)) == ((void*)0)) {
    FUNC_0(VAR_34);
    return (-1);
   }
   VAR_39 = VAR_38;
  }
  VAR_35 = FUNC_6(VAR_34, VAR_32, VAR_38);


  VAR_32[VAR_38] = '\0';


  VAR_31 = VAR_32 + VAR_38;
  while (FUNC_2(*--VAR_31))
   *VAR_31 = '\0';


  VAR_40 = FUNC_10(VAR_32, "\\\"");
  if (VAR_40 != 0 && (VAR_38 + VAR_40) > VAR_39) {
   if ((VAR_32 = FUNC_7(VAR_32, VAR_38 + VAR_40 + 1)) == ((void*)0)) {
    FUNC_0(VAR_34);
    return (-1);
   }
   VAR_39 = VAR_38 + VAR_40;
  }
  if (FUNC_9(VAR_32, "\\\"", "\\\\\"") < 0) {

   FUNC_0(VAR_34);
   return (-1);
  }


  if (FUNC_9(VAR_32, "\\\n", "") < 0) {

   FUNC_0(VAR_34);
   return (-1);
  }


  FUNC_11(VAR_32);

call_function:

  if (VAR_27 && !VAR_25)
   return (-1);

  VAR_24 = VAR_25 = 0;


  if (VAR_11 == ((void*)0) && VAR_13 != ((void*)0)) {
   VAR_33 = VAR_13(((void*)0), VAR_37, VAR_30, VAR_32);
   if (VAR_33 != 0) {
    FUNC_0(VAR_34);
    return (VAR_33);
   }
   continue;
  }


  for (VAR_38 = 0; VAR_11[VAR_38].directive != ((void*)0); VAR_38++) {
   VAR_33 = FUNC_1(VAR_11[VAR_38].directive, VAR_30,
       VAR_5);
   if (VAR_33 == 0) {
    VAR_24 = 1;

    if (VAR_11[VAR_38].action != ((void*)0)) {
     VAR_33 = VAR_11[VAR_38].action(
         &VAR_11[VAR_38],
         VAR_37, VAR_30, VAR_32);
     if (VAR_33 != 0) {
      FUNC_0(VAR_34);
      return (VAR_33);
     }
    }
   } else if (VAR_33 != VAR_6) {

    FUNC_0(VAR_34);
    return (-1);
   }
  }
  if (!VAR_24 && VAR_13 != ((void*)0)) {




   VAR_33 = VAR_13(((void*)0), VAR_37, VAR_30, VAR_32);
   if (VAR_33 != 0) {
    FUNC_0(VAR_34);
    return (VAR_33);
   }
  }
 }

 FUNC_0(VAR_34);
 return (0);
}
