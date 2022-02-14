
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int pbuf ;
typedef int off_t ;
typedef int buf ;
struct TYPE_6__ {scalar_t__ (* close ) (TYPE_1__*) ;} ;
typedef TYPE_1__ DB ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char**,char const*) ;
 char* FUNC_5 (char*,char*,char) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 TYPE_1__* FUNC_7 (char*,int,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int ,int ) ;
 char* FUNC_10 (size_t) ;
 int FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*,size_t) ;
 int FUNC_13 (char*,int,char*,char*) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 char* VAR_10 ;
 size_t VAR_11 ;

__attribute__((used)) static int
FUNC_19(char **VAR_12, u_int *VAR_13, char **VAR_14, int VAR_15, const char *VAR_16,
    int VAR_17, char *VAR_18)
{
 DB *VAR_19;
 char *VAR_20, *VAR_21, **VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 char *VAR_27, *VAR_28;
 int VAR_29;
 char VAR_30[VAR_8];





 if (VAR_17 > VAR_4)
  return (-3);




 if (VAR_17 == 0 && VAR_10 != ((void*)0) && FUNC_6(VAR_10, VAR_16) == 0) {
  if ((VAR_27 = FUNC_10 (VAR_11 + VAR_0)) == ((void*)0)) {
   VAR_9 = VAR_3;
   return (-2);
  }
  (void)FUNC_14(VAR_27, VAR_10);
  VAR_23 = 0;
  VAR_22 = VAR_14;
  VAR_21 = VAR_27 + VAR_11 + 1;
  VAR_20 = VAR_21 + VAR_0;
  goto tc_exp;
 }



 if ((VAR_27 = FUNC_10(VAR_0)) == ((void*)0)) {
  VAR_9 = VAR_3;
  return (-2);
 }
 VAR_20 = VAR_27 + VAR_0;
 VAR_25 = 0;




 for (VAR_22 = VAR_14; *VAR_22 != ((void*)0); VAR_22++) {
  VAR_24 = 0;





  if (VAR_15 >= 0) {
   (void)FUNC_9(VAR_15, (off_t)0, VAR_7);
   VAR_23 = 0;
  } else {
   (void)FUNC_13(VAR_30, sizeof(VAR_30), "%s.db", *VAR_22);
   if ((VAR_19 = FUNC_7(VAR_30, VAR_6, 0, VAR_2, 0))
        != ((void*)0)) {
    FUNC_8(VAR_27);
    VAR_26 = FUNC_4(VAR_19, &VAR_27, VAR_16);
    if (VAR_26 < 0) {

     (void)VAR_19->close(VAR_19);
     return (VAR_26);
    }

    VAR_28 = FUNC_15(VAR_27);
    if (VAR_19->close(VAR_19) < 0) {
     FUNC_8(VAR_28);
     return (-2);
    }
    if (VAR_28 == ((void*)0)) {
     VAR_9 = VAR_3;
     return (-2);
    }
    *VAR_13 = FUNC_16(VAR_28);
    *VAR_12 = VAR_28;
    return (VAR_26);
   } else {
    VAR_15 = FUNC_1(*VAR_22, VAR_6 | VAR_5, 0);
    if (VAR_15 < 0)
     continue;
    VAR_23 = 1;
   }
  }



  {
  char VAR_31[VAR_1];
  char *VAR_32, *VAR_33;
  int VAR_34;
  VAR_32 = VAR_31;
  VAR_33 = VAR_31;
  for (;;) {





   VAR_21 = VAR_27;
   for (;;) {
    if (VAR_33 >= VAR_32) {
     int VAR_35;

     VAR_35 = FUNC_2(VAR_15, VAR_31, sizeof(VAR_31));
     if (VAR_35 <= 0) {
      if (VAR_23)
       (void)FUNC_0(VAR_15);
      if (VAR_35 < 0) {
       FUNC_8(VAR_27);
       return (-2);
      } else {
       VAR_15 = -1;
       VAR_24 = 1;
       break;
      }
     }
     VAR_32 = VAR_31+VAR_35;
     VAR_33 = VAR_31;
    }

    VAR_34 = *VAR_33++;
    if (VAR_34 == '\n') {
     if (VAR_21 > VAR_27 && *(VAR_21-1) == '\\') {
      VAR_21--;
      continue;
     } else
      break;
    }
    *VAR_21++ = VAR_34;






    if (VAR_21 >= VAR_20) {
     u_int VAR_36;
     size_t VAR_37;

     VAR_36 = VAR_21 - VAR_27;
     VAR_37 = VAR_20 - VAR_27 + VAR_0;
     VAR_27 = FUNC_12(VAR_27, VAR_37);
     if (VAR_27 == ((void*)0)) {
      VAR_9 = VAR_3;
      if (VAR_23)
       (void)FUNC_0(VAR_15);
      return (-2);
     }
     VAR_20 = VAR_27 + VAR_37;
     VAR_21 = VAR_27 + VAR_36;
    }
   }

   *VAR_21++ = '\0';




   if (VAR_24)
    break;




   if (*VAR_27 == '\0' || *VAR_27 == '#')
    continue;




   if (FUNC_6(VAR_27, VAR_16) == 0) {
    if (VAR_18 == ((void*)0) || !FUNC_11(VAR_18, VAR_27)) {
     VAR_25 = 1;
     break;
    }
   }
  }
 }
  if (VAR_25)
   break;
 }

 if (!VAR_25) {
  FUNC_8(VAR_27);
  return (-1);
 }





tc_exp: {
  char *VAR_38, *VAR_39;
  int VAR_40;
  u_int VAR_41;
  int VAR_42, VAR_43, VAR_44;
  char *VAR_45, *VAR_46, *VAR_47, *VAR_48, *VAR_49;
  VAR_46 = VAR_27;
  VAR_29 = 0;
  for (;;) {
   if ((VAR_47 = FUNC_5(VAR_46, "tc", '=')) == ((void*)0))
    break;





   VAR_39 = VAR_47;
   for (;;)
    if (*VAR_39 == '\0')
     break;
    else
     if (*VAR_39++ == ':') {
      *(VAR_39 - 1) = '\0';
      break;
     }
   VAR_48 = VAR_47 - 3;
   VAR_44 = VAR_39 - VAR_48;
   VAR_49 = VAR_39;

   VAR_43 = FUNC_19(&VAR_45, &VAR_41, VAR_22, VAR_15, VAR_47, VAR_17+1,
          ((void*)0));
   VAR_38 = VAR_45;
   VAR_40 = VAR_41;
   if (VAR_43 != 0) {

    if (VAR_43 < -1) {
     if (VAR_23)
      (void)FUNC_0(VAR_15);
     FUNC_8(VAR_27);
     return (VAR_43);
    }
    if (VAR_43 == 1)
     VAR_29 = 1;

    if (VAR_43 == -1) {
     *(VAR_39 - 1) = ':';
     VAR_46 = VAR_39 - 1;
     VAR_29 = 1;
     continue;

    }
   }

   VAR_39 = VAR_38;
   for (;;)
    if (*VAR_39 == '\0')
     break;
    else
     if (*VAR_39++ == ':')
      break;
   VAR_40 -= VAR_39 - VAR_38;
   VAR_38 = VAR_39;


   VAR_39 += VAR_40;
   if (*(VAR_39-1) != ':') {
    *VAR_39 = ':';
    VAR_40++;
   }





   VAR_42 = VAR_40 - VAR_44;
   if (VAR_42 >= VAR_20 - VAR_21) {
    u_int VAR_50, VAR_51, VAR_52;
    size_t VAR_53;

    VAR_50 = VAR_21 - VAR_27;
    VAR_53 = VAR_20 - VAR_27 + VAR_42 + VAR_0;
    VAR_51 = VAR_48 - VAR_27;
    VAR_52 = VAR_49 - VAR_27;
    VAR_27 = FUNC_12(VAR_27, VAR_53);
    if (VAR_27 == ((void*)0)) {
     VAR_9 = VAR_3;
     if (VAR_23)
      (void)FUNC_0(VAR_15);
     FUNC_8(VAR_45);
     return (-2);
    }
    VAR_20 = VAR_27 + VAR_53;
    VAR_21 = VAR_27 + VAR_50;
    VAR_48 = VAR_27 + VAR_51;
    VAR_49 = VAR_27 + VAR_52;
   }




   VAR_39 = VAR_48 + VAR_40;
   FUNC_3(VAR_49, VAR_39, VAR_21 - VAR_49);
   FUNC_3(VAR_38, VAR_48, VAR_40);
   VAR_21 += VAR_42;
   FUNC_8(VAR_45);





   VAR_46 = VAR_39-1;
  }

 }




 if (VAR_23)
  (void)FUNC_0(VAR_15);
 *VAR_13 = VAR_21 - VAR_27 - 1;
 if (VAR_20 > VAR_21)
  if ((VAR_27 =
       FUNC_12(VAR_27, (size_t)(VAR_21 - VAR_27))) == ((void*)0)) {
   VAR_9 = VAR_3;
   return (-2);
  }

 *VAR_12 = VAR_27;
 if (VAR_29)
  return (1);
 return (0);
}
