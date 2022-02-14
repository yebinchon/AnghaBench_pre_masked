
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int tcsh_number_t ;
struct stat {int st_mode; int st_dm_key; int st_dmonflags; int st_ctime; int st_mtime; int st_atime; int st_size; int st_gid; int st_uid; int st_nlink; scalar_t__ st_ino; scalar_t__ st_dev; int st_dm_mode; } ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
struct cvxstat {int dummy; } ;
typedef int string0 ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_17 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int ,char*) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (char*,struct stat*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_16 (char*,char) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,int (*) (char*)) ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (int *) ;
 int FUNC_22 (char*,int,char***) ;
 int FUNC_23 (char*,int ) ;
 char* FUNC_24 (char*,int ) ;
 scalar_t__ FUNC_25 (char*,int ) ;
 int FUNC_26 (int ) ;
 char* FUNC_27 (int) ;
 int FUNC_28 (char*,int ) ;
 char* FUNC_29 (char*) ;
 int FUNC_30 (int) ;
 char* FUNC_31 (char*) ;
 char FUNC_32 (char) ;
 int VAR_23 ;
 int FUNC_33 (char*) ;
 struct group* FUNC_34 (int ) ;
 struct passwd* FUNC_35 (int ) ;
 char* FUNC_36 (int) ;
 int FUNC_37 (char*,int,char*,unsigned int) ;

Char *
FUNC_38(Char *VAR_24, Char ***VAR_25, int VAR_26)
{





    struct stat VAR_27, *VAR_28 = ((void*)0);
    tcsh_number_t VAR_29 = 0;
    unsigned VAR_30 = 0xffff;
    int VAR_31 = 0;
    Char *VAR_32 = VAR_24, *VAR_33, *VAR_34, *VAR_35, *VAR_36, *VAR_37, *VAR_38, VAR_39 = '\0',
    *VAR_40 = VAR_10;
    char *VAR_41, VAR_42[22 + VAR_8 + 1];
    time_t VAR_43;
    struct passwd *VAR_44;
    struct group *VAR_45;

    while(FUNC_16(VAR_4, *++VAR_32))
 continue;

    if (!*VAR_32 && *(VAR_32 - 1) == 'L')
 --VAR_32;

    if (FUNC_16(VAR_5, *VAR_32)) {
 VAR_39 = *VAR_32++;





 VAR_40 = VAR_39 == 'F' ? VAR_12 : VAR_13;

 if (VAR_39 == 'P' && *VAR_32 >= '0' && *VAR_32 <= '7') {
     VAR_30 = (char) *VAR_32 - '0';
     while ( *++VAR_32 >= '0' && *VAR_32 <= '7' )
  VAR_30 = 8 * VAR_30 + ((char) *VAR_32 - '0');
 }
 if (FUNC_10(VAR_32, VAR_12) == 0 && FUNC_16("AMCUGP", VAR_39)) {
     VAR_31 = 1;
     ++VAR_32;
 }
    }

    if (*VAR_32 || VAR_32 == VAR_24 + 1)
 FUNC_30(VAR_3 | VAR_1);
    if (FUNC_25(**VAR_25, VAR_0) && FUNC_0(FUNC_29(**VAR_25), &VAR_27))
 FUNC_30(VAR_3 | VAR_2);

    VAR_33 = *(*VAR_25)++;
    if (VAR_26 & VAR_20)
 return (FUNC_13(VAR_11));
    VAR_34 = FUNC_24(VAR_33, VAR_6);
    FUNC_19(VAR_34, FUNC_33);
    VAR_32 = &VAR_24[1];
    do
 switch (*VAR_32) {

 case 'r':
     VAR_29 = !FUNC_28(VAR_34, VAR_9);
     break;

 case 'w':
     VAR_29 = !FUNC_28(VAR_34, VAR_21);
     break;

 case 'x':
     VAR_29 = !FUNC_28(VAR_34, VAR_22);
     break;

 case 'X':


     VAR_29 = FUNC_23(VAR_34, 0);
     break;

 case 't':
     VAR_29 = FUNC_26(FUNC_18(FUNC_29(VAR_34)));
     break;

 default:
  if (!VAR_28) {
      VAR_28 = &VAR_27;
      if (FUNC_0(FUNC_29(VAR_34), VAR_28) == -1) {
   FUNC_20(VAR_34);
   return (FUNC_13(VAR_40));
      }
  }

     switch (*VAR_32) {

     case 'f':



  VAR_29 = 0;

  break;

     case 'd':



  VAR_29 = 0;

  break;

     case 'p':



  VAR_29 = 0;

  break;

     case 'm' :



       VAR_29 = 0;

       break ;

     case 'K' :



       VAR_29 = 0;

       break ;


     case 'l':



  VAR_29 = 0;

  break;

     case 'S':



  VAR_29 = 0;

  break;

     case 'b':



  VAR_29 = 0;

  break;

     case 'c':



  VAR_29 = 0;

  break;

     case 'u':
  VAR_29 = (VAR_18 & VAR_28->st_mode) != 0;
  break;

     case 'g':
  VAR_29 = (VAR_17 & VAR_28->st_mode) != 0;
  break;

     case 'k':
  VAR_29 = (VAR_19 & VAR_28->st_mode) != 0;
  break;

     case 'z':
  VAR_29 = VAR_28->st_size == 0;
  break;







     case 's':
  VAR_29 = VAR_27.st_size != 0;
  break;

     case 'e':
  VAR_29 = 1;
  break;

     case 'o':
  VAR_29 = VAR_28->st_uid == VAR_23;
  break;





     case 'D':
  VAR_29 = (tcsh_number_t) VAR_28->st_dev;
  break;

     case 'I':
  VAR_29 = (tcsh_number_t) VAR_28->st_ino;
  break;

     case 'F':
  VAR_35 = FUNC_27( (int) VAR_28->st_dev);
  VAR_36 = FUNC_27( (int) VAR_28->st_ino);
  VAR_37 = FUNC_36((2 + FUNC_12(VAR_35) + FUNC_12(VAR_36))
          * sizeof(Char));
  (void) FUNC_8(FUNC_8(FUNC_11(VAR_37, VAR_35), VAR_12), VAR_36);
  FUNC_33(VAR_35);
  FUNC_33(VAR_36);
  FUNC_20(VAR_34);
  return(VAR_37);

     case 'L':
  if ( *(VAR_32 + 1) ) {
      VAR_29 = 1;
      break;
  }
  VAR_29 = 0;
  break;



     case 'N':
  VAR_29 = (tcsh_number_t) VAR_28->st_nlink;
  break;

     case 'P':
  VAR_41 = VAR_42 + 1;
  (void) FUNC_37(VAR_41, sizeof(VAR_42) - 1, "%o",
      VAR_30 & (unsigned int)
      ((VAR_16|VAR_14|VAR_15|VAR_18|VAR_17) & VAR_28->st_mode));
  if (VAR_31 && *VAR_41 != '0')
      *--VAR_41 = '0';
  FUNC_20(VAR_34);
  return(FUNC_13(FUNC_31(VAR_41)));

     case 'U':
  if (VAR_31 && (VAR_44 = FUNC_35(VAR_28->st_uid))) {
      FUNC_20(VAR_34);
      return(FUNC_13(FUNC_31(VAR_44->pw_name)));
  }
  VAR_29 = (tcsh_number_t) VAR_28->st_uid;
  break;

     case 'G':
  if (VAR_31 && (VAR_45 = FUNC_34(VAR_28->st_gid))) {
      FUNC_20(VAR_34);
      return(FUNC_13(FUNC_31(VAR_45->gr_name)));
  }
  VAR_29 = (tcsh_number_t) VAR_28->st_gid;
  break;

     case 'Z':
  VAR_29 = (tcsh_number_t) VAR_28->st_size;
  break;

     case 'A': case 'M': case 'C':
  VAR_43 = *VAR_32 == 'A' ? VAR_28->st_atime :
      *VAR_32 == 'M' ? VAR_28->st_mtime : VAR_28->st_ctime;
  if (VAR_31) {
      VAR_37 = FUNC_31(FUNC_21(&VAR_43));
      if ((VAR_38 = FUNC_9(VAR_37, '\n')) != ((void*)0))
   *VAR_38 = (Char) '\0';
      FUNC_20(VAR_34);
      return(FUNC_13(VAR_37));
  }
  VAR_29 = (tcsh_number_t) VAR_43;
  break;

     }
 }
    while (*++VAR_32 && VAR_29);
    FUNC_22("exp6 -? i", VAR_29, VAR_25);
    FUNC_20(VAR_34);
    return (FUNC_27(VAR_29));
}
