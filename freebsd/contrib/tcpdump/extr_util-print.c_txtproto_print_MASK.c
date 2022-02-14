
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef char u_char ;
typedef int token ;
struct TYPE_6__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,scalar_t__,scalar_t__,char*,int) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*,char*,char const*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char) ;

void
FUNC_6(netdissect_options *VAR_2, const u_char *VAR_3, u_int VAR_4,
    const char *VAR_5, const char **VAR_6, u_int VAR_7)
{
 u_int VAR_8, VAR_9;
 u_char VAR_10[VAR_0+1];
 const char *VAR_11;
 int VAR_12 = 0;
 const char *VAR_13;

 if (VAR_6 != ((void*)0)) {





  VAR_8 = FUNC_2(VAR_2, VAR_3, 0, VAR_4, VAR_10, sizeof(VAR_10));
  if (VAR_8 != 0) {

   while ((VAR_11 = *VAR_6++) != ((void*)0)) {
    if (FUNC_1((const char *)VAR_10, VAR_11) == 0) {

     VAR_12 = 1;
     break;
    }
   }







   if (VAR_7 & VAR_1) {



    VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_8, VAR_4, VAR_10,
        sizeof(VAR_10));
   }
   if (VAR_8 != 0) {
    if (FUNC_3(VAR_10[0]) && FUNC_3(VAR_10[1]) &&
        FUNC_3(VAR_10[2]) && VAR_10[3] == '\0') {

     VAR_12 = 1;
    }
   }
  }
 } else {






  VAR_12 = 1;
 }


 for (VAR_13 = VAR_5; *VAR_13 != '\0'; VAR_13++)
  FUNC_0((VAR_2, "%c", FUNC_5((u_char)*VAR_13)));

 if (VAR_12) {
  if (VAR_2->ndo_vflag) {





   FUNC_0((VAR_2, ", length: %u", VAR_4));
   for (VAR_8 = 0;
       VAR_8 < VAR_4 && (VAR_9 = FUNC_4(VAR_2, VAR_5, "\n\t", VAR_3, VAR_8, VAR_4)) != 0;
       VAR_8 = VAR_9)
    ;
  } else {



   FUNC_4(VAR_2, VAR_5, ": ", VAR_3, 0, VAR_4);
  }
 }
}
