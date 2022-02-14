
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xbuf ;
struct opt {int nlen; char** sel_p; char** optp; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (char*,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 struct opt* VAR_7 ;
 int FUNC_6 (int ,char*,char*,...) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,int,char*,char*,char*,char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_14(char *VAR_8, int VAR_9)
{

  char VAR_10[VAR_2 + 1];
  char VAR_11[VAR_3 + 1];
  char *VAR_12 = VAR_10;
  char *VAR_13 = VAR_8;
  char *VAR_14;
  struct opt *VAR_15;
  char *VAR_16 = VAR_8;

  while ((VAR_14 = FUNC_7(VAR_13, '$'))) {
    char VAR_17;



    {
      int VAR_18 = VAR_14 - VAR_13;

      if (VAR_18 > 0) {
 if (FUNC_0(VAR_12, VAR_18)) {




   FUNC_9(VAR_12, VAR_13, VAR_18);
   VAR_12 += VAR_18;
 } else {
   FUNC_6(VAR_5, "No space to expand \"%s\"", VAR_8);
   goto out;
 }
      }
    }

    VAR_13 = VAR_14 + 1;
    VAR_17 = *VAR_13++;
    if (VAR_17 == '$') {
      if (FUNC_0(VAR_12, 1)) {
 *VAR_12++ = '$';
      } else {
 FUNC_6(VAR_5, "No space to expand \"%s\"", VAR_8);
 goto out;
      }
    } else if (VAR_17 == '{') {

      enum {
 E_All, E_Dir, E_File, E_Domain, E_Host
      } VAR_19;



      char *VAR_20 = FUNC_7(VAR_13, '}');
      int VAR_21;




      if (!VAR_20) {



 FUNC_6(VAR_6, "No closing '}' in \"%s\"", VAR_8);
 goto out;
      }
      VAR_21 = VAR_20 - VAR_13;




      if (*VAR_13 == '/') {



 VAR_19 = E_File;
 VAR_13++;
 --VAR_21;
      } else if (*(VAR_20-1) == '/') {



 VAR_19 = E_Dir;
 --VAR_21;
      } else if (*VAR_13 == '.') {



 VAR_19 = E_Domain;
 VAR_13++;
 --VAR_21;
      } else if (*(VAR_20-1) == '.') {



 VAR_19 = E_Host;
 --VAR_21;
      } else {



 VAR_19 = E_All;
      }






      if (VAR_21 > VAR_3)
 VAR_21 = VAR_3;
      FUNC_9(VAR_11, VAR_13, VAR_21);
      VAR_11[VAR_21] = '\0';




      VAR_13 = VAR_20 + 1;




      for (VAR_15 = VAR_7; VAR_15->name; VAR_15++) {



 if (VAR_21 == VAR_15->nlen && FUNC_1(VAR_15->name, VAR_11)) {
   char VAR_22[VAR_3 + 3];
   char *VAR_23;




   if (!(!VAR_15->sel_p == !VAR_9)) {



     FUNC_11(VAR_22, sizeof(VAR_22), "${%s%s%s}",
        VAR_19 == E_File ? "/" :
        VAR_19 == E_Domain ? "." : "",
        VAR_11,
        VAR_19 == E_Dir ? "/" :
        VAR_19 == E_Host ? "." : "");
     VAR_23 = VAR_22;




     VAR_19 = E_All;
   } else if (VAR_15->sel_p) {
     VAR_23 = *VAR_15->sel_p;
   } else {
     VAR_23 = *VAR_15->optp;
   }

   if (VAR_23) {
     int VAR_24 = FUNC_8(VAR_23);
     char *VAR_25 = VAR_23;
     switch (VAR_19) {
     case E_Dir:
       VAR_25 = FUNC_10(VAR_23, '/');
       if (VAR_25)
  VAR_24 = VAR_25 - VAR_23;
       VAR_25 = VAR_23;
       break;
     case E_File:
       VAR_25 = FUNC_10(VAR_23, '/');
       if (VAR_25) {
  VAR_25++;
  VAR_24 = FUNC_8(VAR_25);
       } else
  VAR_25 = VAR_23;
       break;
     case E_Domain:
       VAR_25 = FUNC_7(VAR_23, '.');
       if (VAR_25) {
  VAR_25++;
  VAR_24 = FUNC_8(VAR_25);
       } else {
  VAR_25 = "";
  VAR_24 = 0;
       }
       break;
     case E_Host:
       VAR_25 = FUNC_7(VAR_23, '.');
       if (VAR_25)
  VAR_24 = VAR_25 - VAR_23;
       VAR_25 = VAR_23;
       break;
     case E_All:
       break;
     }

     if (FUNC_0(VAR_12, VAR_24+1)) {





       FUNC_4(VAR_12, VAR_25, VAR_24+1);
       VAR_12 += VAR_24;
       *VAR_12 = '\0';
     } else {
       FUNC_6(VAR_5, "No space to expand \"%s\"", VAR_8);
       goto out;
     }
   }



   break;
 }
      }




      if (!VAR_15->name) {





 char *VAR_26 = FUNC_3(VAR_11);

 if (VAR_26) {
   int VAR_27 = FUNC_8(VAR_26);

   if (FUNC_0(VAR_12, VAR_27+1)) {
     FUNC_13(VAR_12, VAR_26, VAR_27+1);
     VAR_12 += VAR_27;
   } else {
     FUNC_6(VAR_5, "No space to expand \"%s\"", VAR_8);
     goto out;
   }
   if (FUNC_2(VAR_0))
     FUNC_6(VAR_4, "Environment gave \"%s\" -> \"%s\"", VAR_11, VAR_26);
 } else {
   FUNC_6(VAR_6, "Unknown sequence \"${%s}\"", VAR_11);
 }
      }
    } else {



      FUNC_6(VAR_6, "Unknown $ sequence in \"%s\"", VAR_8);
    }
  }

out:



  if (VAR_13 == VAR_8) {
    VAR_8 = FUNC_12(VAR_13);
  } else {



    int VAR_28 = FUNC_8(VAR_13);
    if (FUNC_0(VAR_12, VAR_28+1)) {
      FUNC_13(VAR_12, VAR_13, VAR_28+1);

    } else {
      FUNC_6(VAR_5, "No space to expand \"%s\"", VAR_8);
    }




    VAR_8 = FUNC_12(VAR_10);
  }

  FUNC_5(VAR_8);

  if (FUNC_2(VAR_0)) {
    FUNC_6(VAR_4, "Expansion of \"%s\"...", VAR_16);
    FUNC_6(VAR_4, "......... is \"%s\"", VAR_8);
  }
  return VAR_8;
}
