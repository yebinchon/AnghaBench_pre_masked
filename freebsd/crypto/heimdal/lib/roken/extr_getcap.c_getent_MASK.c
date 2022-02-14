
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
 int FUNC_0 (TYPE_1__*,char**,char const*) ;
 char* FUNC_1 (char*,char*,char) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (char*,int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int ,int ) ;
 char* FUNC_7 (size_t) ;
 int FUNC_8 (char*,char*,size_t) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (int,char*,int) ;
 char* FUNC_12 (char*,size_t) ;
 int FUNC_13 (char*,int,char*,char*) ;
 int FUNC_14 (char*,char*,size_t) ;
 size_t FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 char* VAR_9 ;
 size_t VAR_10 ;

__attribute__((used)) static int
FUNC_18(char **VAR_11, size_t *VAR_12, char **VAR_13, int VAR_14,
       const char *VAR_15, int VAR_16, char *VAR_17)
{
    char *VAR_18, *VAR_19 = ((void*)0), **VAR_20;
    int VAR_21 = 0, VAR_22, VAR_23;
    char *VAR_24;
    int VAR_25;





    if (VAR_16 > VAR_4)
 return (-3);




    if (VAR_16 == 0 && VAR_9 != ((void*)0) && FUNC_2(VAR_9, VAR_15) == 0) {
 size_t VAR_26 = VAR_10 + VAR_0;
 if ((VAR_24 = FUNC_7 (VAR_26)) == ((void*)0)) {
     VAR_8 = VAR_3;
     return (-2);
 }
 (void)FUNC_14(VAR_24, VAR_9, VAR_26);
 VAR_20 = VAR_13;
 VAR_19 = VAR_24 + VAR_10 + 1;
 VAR_18 = VAR_19 + VAR_0;
 goto tc_exp;
    }



    if ((VAR_24 = FUNC_7(VAR_0)) == ((void*)0)) {
 VAR_8 = VAR_3;
 return (-2);
    }
    VAR_18 = VAR_24 + VAR_0;
    VAR_23 = 0;




    for (VAR_20 = VAR_13; *VAR_20 != ((void*)0); VAR_20++) {
 VAR_22 = 0;





 if (VAR_14 >= 0) {
     (void)FUNC_6(VAR_14, (off_t)0, VAR_6);
 } else {
     {
  VAR_14 = FUNC_10(*VAR_20, VAR_5, 0);
  if (VAR_14 < 0) {

      continue;
  }
  VAR_21 = 1;
     }
 }



 {
     char VAR_27[VAR_1];
     char *VAR_28, *VAR_29, *VAR_30;
     int VAR_31, VAR_32;
     VAR_28 = VAR_27;
     VAR_29 = VAR_27;
     VAR_30 = 0;
     VAR_32 = 0;
     for (;;) {





  VAR_19 = VAR_24;
  for (;;) {
      if (VAR_29 >= VAR_28) {
   int VAR_33;

   VAR_33 = FUNC_11(VAR_14, VAR_27, sizeof(VAR_27));
   if (VAR_33 <= 0) {
       if (VAR_21)
    (void)FUNC_3(VAR_14);
       if (VAR_33 < 0) {
    FUNC_5(VAR_24);
    return (-2);
       } else {
    VAR_14 = -1;
    VAR_22 = 1;
    break;
       }
   }
   VAR_28 = VAR_27+VAR_33;
   VAR_29 = VAR_27;
      }

      VAR_31 = *VAR_29++;
      if (VAR_31 == '\n') {
   if (VAR_32) {
       VAR_32 = 0;
       VAR_19--;
       continue;
   } else
       break;
      }
      if (VAR_32) {
   VAR_32 = 0;
   VAR_30 = 0;
      }
      if (VAR_31 == ':') {






   if (VAR_30)
       VAR_19 = VAR_30;
   else
       VAR_30 = VAR_19;
      } else if (VAR_31 == '\\') {
   VAR_32 = 1;
      } else if (VAR_31 != ' ' && VAR_31 != '\t') {




   VAR_30 = 0;
      }
      *VAR_19++ = VAR_31;






      if (VAR_19 >= VAR_18) {
   u_int VAR_34;
   size_t VAR_35;

   VAR_34 = VAR_19 - VAR_24;
   VAR_35 = VAR_18 - VAR_24 + VAR_0;
   VAR_24 = FUNC_12(VAR_24, VAR_35);
   if (VAR_24 == ((void*)0)) {
       VAR_8 = VAR_3;
       if (VAR_21)
    (void)FUNC_3(VAR_14);
       return (-2);
   }
   VAR_18 = VAR_24 + VAR_35;
   VAR_19 = VAR_24 + VAR_34;
      }
  }

  if (VAR_30)
      VAR_19 = VAR_30 + 1;

  *VAR_19++ = '\0';




  if (VAR_22)
      break;




  if (*VAR_24 == '\0' || *VAR_24 == '#')
      continue;




  if (FUNC_2(VAR_24, VAR_15) == 0) {
      if (VAR_17 == ((void*)0) || !FUNC_9(VAR_17, VAR_24)) {
   VAR_23 = 1;
   break;
      }
  }
     }
 }
 if (VAR_23)
     break;
    }

    if (!VAR_23)
 return (-1);





 tc_exp: {
 char *VAR_36, *VAR_37;
 size_t VAR_38, VAR_39;
 int VAR_40, VAR_41, VAR_42;
 char *VAR_43, *VAR_44, *VAR_45, *VAR_46, *VAR_47;
 VAR_44 = VAR_24;
 VAR_25 = 0;
 for (;;) {
     if ((VAR_45 = FUNC_1(VAR_44, "tc", '=')) == ((void*)0))
  break;





     VAR_37 = VAR_45;
     for (;;)
  if (*VAR_37 == '\0')
      break;
  else
      if (*VAR_37++ == ':') {
   *(VAR_37 - 1) = '\0';
   break;
      }
     VAR_46 = VAR_45 - 3;
     VAR_42 = VAR_37 - VAR_46;
     VAR_47 = VAR_37;

     VAR_41 = FUNC_18(&VAR_43, &VAR_38, VAR_20, VAR_14, VAR_45, VAR_16+1,
     ((void*)0));
     VAR_36 = VAR_43;
     VAR_39 = VAR_38;
     if (VAR_41 != 0) {

  if (VAR_41 < -1) {
      if (VAR_21)
   (void)FUNC_3(VAR_14);
      FUNC_5(VAR_24);
      return (VAR_41);
  }
  if (VAR_41 == 1)
      VAR_25 = 1;

  if (VAR_41 == -1) {
      *(VAR_37 - 1) = ':';
      VAR_44 = VAR_37 - 1;
      VAR_25 = 1;
      continue;

  }
     }

     VAR_37 = VAR_36;
     for (;;)
  if (*VAR_37 == '\0')
      break;
  else
      if (*VAR_37++ == ':')
   break;
     VAR_39 -= VAR_37 - VAR_36;
     VAR_36 = VAR_37;


     VAR_37 += VAR_39;
     if (*(VAR_37-1) != ':') {
  *VAR_37 = ':';
  VAR_39++;
     }





     VAR_40 = VAR_39 - VAR_42;
     if (VAR_40 >= VAR_18 - VAR_19) {
  u_int VAR_48, VAR_49, VAR_50;
  size_t VAR_51;

  VAR_48 = VAR_19 - VAR_24;
  VAR_51 = VAR_18 - VAR_24 + VAR_40 + VAR_0;
  VAR_49 = VAR_46 - VAR_24;
  VAR_50 = VAR_47 - VAR_24;
  VAR_24 = FUNC_12(VAR_24, VAR_51);
  if (VAR_24 == ((void*)0)) {
      VAR_8 = VAR_3;
      if (VAR_21)
   (void)FUNC_3(VAR_14);
      FUNC_5(VAR_43);
      return (-2);
  }
  VAR_18 = VAR_24 + VAR_51;
  VAR_19 = VAR_24 + VAR_48;
  VAR_46 = VAR_24 + VAR_49;
  VAR_47 = VAR_24 + VAR_50;
     }




     VAR_37 = VAR_46 + VAR_39;
     FUNC_8(VAR_37, VAR_47, (size_t)(VAR_19 - VAR_47));
     FUNC_8(VAR_46, VAR_36, VAR_39);
     VAR_19 += VAR_40;
     FUNC_5(VAR_43);





     VAR_44 = VAR_37-1;
 }

    }




    if (VAR_21)
 (void)FUNC_3(VAR_14);
    *VAR_12 = VAR_19 - VAR_24 - 1;
    if (VAR_18 > VAR_19)
 if ((VAR_24 =
      FUNC_12(VAR_24, (size_t)(VAR_19 - VAR_24))) == ((void*)0)) {
     VAR_8 = VAR_3;
     return (-2);
 }

    *VAR_11 = VAR_24;
    if (VAR_25)
 return (1);
    return (0);
}
