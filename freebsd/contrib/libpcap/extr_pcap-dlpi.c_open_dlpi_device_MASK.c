
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int dname ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,scalar_t__,char*,char*) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;
 char* FUNC_5 (char*,scalar_t__*,char*) ;
 int FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_10, u_int *VAR_11, char *VAR_12)
{
 int VAR_13;
 char VAR_14[100];
 char *VAR_15;
 int VAR_16;



 char VAR_17[100];
 if (*VAR_10 == '/')
  FUNC_6(VAR_14, VAR_10, sizeof(VAR_14));
 else
  FUNC_4(VAR_14, sizeof(VAR_14), "%s/%s", VAR_4,
      VAR_10);





 VAR_15 = FUNC_5(VAR_14, VAR_11, VAR_12);
 if (VAR_15 == ((void*)0))
  return (VAR_7);





 FUNC_6(VAR_17, VAR_14, sizeof(VAR_14));
 *VAR_15 = '\0';


 if ((VAR_16 = FUNC_2(VAR_14, VAR_3)) < 0) {
  if (VAR_9 != VAR_1) {
   if (VAR_9 == VAR_2 || VAR_9 == VAR_0)
    VAR_13 = VAR_8;
   else
    VAR_13 = VAR_6;
   FUNC_3(VAR_12, VAR_5,
       VAR_9, "%s", VAR_14);
   return (VAR_13);
  }


  if ((VAR_16 = FUNC_2(VAR_17, VAR_3)) < 0) {
   if (VAR_9 == VAR_1) {
    VAR_13 = VAR_7;
    FUNC_4(VAR_12, VAR_5,
        "%s: No DLPI device found", VAR_10);
   } else {
    if (VAR_9 == VAR_2 || VAR_9 == VAR_0)
     VAR_13 = VAR_8;
    else
     VAR_13 = VAR_6;
    FUNC_3(VAR_12,
        VAR_5, VAR_9, "%s", VAR_17);
   }
   return (VAR_13);
  }

  *VAR_11 = 0;
 }

 return (VAR_16);
}
