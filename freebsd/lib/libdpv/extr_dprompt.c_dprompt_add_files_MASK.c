
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct dpv_file_node {scalar_t__ length; char* name; char* msg; scalar_t__ status; int read; struct dpv_file_node* next; } ;
typedef int pbar ;
typedef enum dprompt_state { ____Placeholder_dprompt_state } dprompt_state ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (char const*,...) ;
 int VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* VAR_19 ;
 int FUNC_4 (char*,int,int ,char*,int ,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 char* VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 char* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,int ) ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;

__attribute__((used)) static int
FUNC_10(struct dpv_file_node *VAR_38,
    struct dpv_file_node *VAR_39, int VAR_40)
{
 char VAR_41;
 char VAR_42 = 'b';
 char VAR_43 = '4';
 uint8_t VAR_44 = VAR_39 != ((void*)0) ? VAR_2 : VAR_8;
 uint8_t VAR_45 = 0;
 char *VAR_46;
 char *VAR_47;
 char *VAR_48;
 const char *VAR_49;
 const char *VAR_50;
 const char *VAR_51;
 enum dprompt_state VAR_52;
 int VAR_53;
 int VAR_54;
 int VAR_55;
 int VAR_56;
 int VAR_57;
 int VAR_58 = 0;
 int VAR_59 = 0;
 int VAR_60;
 int VAR_61;
 struct dpv_file_node *VAR_62;
 char VAR_63[VAR_3 + 1];
 char VAR_64[32];
 char VAR_65[VAR_26 + 16];
 char VAR_66[sizeof(VAR_65)];
 char VAR_67[sizeof(VAR_65)];



 if (VAR_34 || VAR_37) {
  VAR_43 = VAR_19[0];

  VAR_42 = VAR_19[2];
 }




 *VAR_65 = '\0';
 if (VAR_26 >= 0 && VAR_40 >= 0 && VAR_39 != ((void*)0) &&
     (VAR_39->length >= 0 || VAR_9)) {
  FUNC_5(VAR_65, VAR_26 + 1, "%*s%3u%%%*s", VAR_27, "",
      VAR_40, VAR_28, "");
  if (VAR_33) {

   VAR_60 = VAR_40 * VAR_26 / 100;

   if ((VAR_40 * VAR_26 % 100) > 50)
    VAR_60++;






   *VAR_67 = '\0';
   *VAR_66 = '\0';
   FUNC_9(VAR_67, (const char *)(VAR_65), VAR_14);
   *(VAR_67 + VAR_60) = '\0';
   FUNC_9(VAR_66, (const char *)(VAR_65+VAR_60), VAR_14);


   FUNC_5(VAR_65, sizeof(VAR_65),
       "\\Z%c\\Zr\\Z%c%s%s%s\\Zn", VAR_42, VAR_43,
       VAR_67, "\\ZR", VAR_66);
  }
 }

 for (VAR_62 = VAR_38; VAR_62 != ((void*)0); VAR_62 = VAR_62->next) {
  VAR_55 = VAR_20;
  VAR_48 = VAR_62->name;
  VAR_59++;






  if (VAR_35)
   VAR_45 = FUNC_1(VAR_32);
  VAR_58 += FUNC_2(VAR_48, VAR_45);
  VAR_47 = FUNC_0(VAR_48, 1);
  if (VAR_48 != VAR_47) {
   VAR_41 = *VAR_47;
   *VAR_47 = '\0';
   FUNC_3("%s", VAR_48);
   *VAR_47 = VAR_41;
   VAR_48 = VAR_47;
  }


  if ((VAR_35 || VAR_36) && VAR_33) {
   VAR_46 = VAR_48;
   while (*VAR_46 != '\0') {
    if (*VAR_46 == '\\' && *(VAR_46 + 1) != '\0' &&
        *(++VAR_46) == 'Z' && *(VAR_46 + 1) != '\0') {
     VAR_46++;
     VAR_55 += 3;
    }
    VAR_46++;
   }
   if (VAR_55 > VAR_3)
    VAR_55 = VAR_3;
  }


  if (VAR_26 < 0 && VAR_55 <= VAR_3 - 2 &&
      VAR_25 == VAR_2)
   VAR_55 += 2;


  if (FUNC_5(VAR_63, VAR_55 + 1, "%s", VAR_48) >
      VAR_55) FUNC_7(VAR_63 + VAR_55 - 3, "...");




  if (VAR_62 == VAR_39 && VAR_40 < 100) {





   VAR_46 = VAR_63 + FUNC_8(VAR_63);
   if (VAR_46 < (VAR_63 + VAR_55))
    FUNC_5(VAR_46, VAR_55 -
        (VAR_46 - VAR_63) + 1, "...");


   FUNC_3("%s%-*s%s %c", VAR_33 ? "\\Zb" : "",
       VAR_55, VAR_63, VAR_33 ? "\\Zn" : "",
       FUNC_6());
  } else
   FUNC_3("%-*s%s %s", VAR_55,
       VAR_63, VAR_33 ? "\\Zn" : "", " ");




  VAR_52 = 130;
  if (VAR_62->msg != ((void*)0))
   VAR_52 = 134;
  else if (VAR_26 < 0)
   VAR_52 = 130;
  else if (VAR_26 < 4)
   VAR_52 = 131;
  else if (VAR_44)
   VAR_52 = 128;
  else if (VAR_62 == VAR_39) {
   if (*VAR_65 == '\0') {
    if (VAR_62->length < 0)
     VAR_52 = 133;
    else if (VAR_62->status == VAR_1)
     VAR_52 = 133;
    else
     VAR_52 = 132;
   }
   else if (VAR_9)
    VAR_52 = VAR_40 < 100 ?
        129 : 132;
   else if (VAR_62->status == VAR_1)
    VAR_52 = VAR_62->length < 0 ?
        133 : 129;
   else
    VAR_52 = VAR_62->length < 0 ?
        133 : 132;
  } else {
   if (VAR_9)
    VAR_52 = 132;
   else
    VAR_52 = VAR_62->length < 0 ?
        133 : 132;
  }
  VAR_51 = VAR_33 ?
      " [\\Z%c%s%-*s%s%-*s\\Zn]\\n" :
      " [%-*s%s%-*s]\\n";
  if (VAR_62->status == VAR_0) {
   VAR_49 = "\\Zr\\Z1";
   VAR_53 = VAR_16;
   VAR_54 = VAR_17;
   VAR_50 = VAR_15;
  } else {
   VAR_49 = "\\Zr\\Z2";
   VAR_53 = VAR_12;
   VAR_54 = VAR_13;
   VAR_50 = VAR_11;
  }
  switch (VAR_52) {
  case 128:
   FUNC_3(" [%-*s%s%-*s]\\n",
       VAR_30, "", VAR_29, VAR_31, "");
   break;
  case 129:
   FUNC_3(" [%s]\\n", VAR_65);
   break;
  case 132:
   if (VAR_33)
    FUNC_3(VAR_51, VAR_42, VAR_49,
        VAR_53, "", VAR_50,
        VAR_54, "");
   else
    FUNC_3(VAR_51,
        VAR_53, "", VAR_50,
        VAR_54, "");
   break;
  case 133:
   FUNC_4(VAR_64, VAR_26 + 2, VAR_62->read, "",
       VAR_4, VAR_6 | VAR_5);


   VAR_56 = (int)FUNC_8(VAR_64);
   VAR_57 = (VAR_26 - VAR_56) / 2;
   VAR_61 = VAR_57;
   if ((VAR_57+VAR_56+VAR_61) != VAR_26)
    VAR_61++;

   if (VAR_33)
    FUNC_3(VAR_51, VAR_42, VAR_49,
        VAR_57, "", VAR_64, VAR_61, "");
   else
    FUNC_3(VAR_51,
        VAR_57, "", VAR_64, VAR_61, "");
   break;
  case 134:
   FUNC_5(VAR_24, VAR_7 + 1, "%s", VAR_62->msg);
   if (VAR_26 < (VAR_23 = FUNC_8(VAR_24))) {
    VAR_21 = VAR_22 = 0;
    *(VAR_24 + VAR_26) = '\0';
    VAR_23 = VAR_26;
   } else {
    VAR_21 = (VAR_26 - VAR_23) / 2;
    VAR_22 = VAR_21;
    if ((VAR_22 + VAR_23 + VAR_21)
        != VAR_26)
     VAR_22++;
   }
   if (VAR_33)
    FUNC_3(VAR_51, VAR_42, VAR_49,
        VAR_21, "", VAR_24, VAR_22, "");
   else
    FUNC_3(VAR_51, VAR_21, "", VAR_24,
        VAR_22, "");
   break;
  case 131:
   if (VAR_33)
    FUNC_3(VAR_51, VAR_42, VAR_49,
        VAR_26, "", "", 0, "");
   else
    FUNC_3(VAR_51, VAR_26, "", "", 0, "");
   break;
  case 130:

  default:
   FUNC_3(" \\n");





  }


  if (VAR_59 >= VAR_10)
   break;


  if (VAR_62 == VAR_39)
   VAR_44 = VAR_8;
 }
 while (VAR_58 < VAR_18) {
  FUNC_3("\n");
  VAR_58++;
 }

 return (VAR_59);
}
