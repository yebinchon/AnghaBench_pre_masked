
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int sockaddr_u ;


 int FUNC_0 (int const*) ;



 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int VAR_1 ;
 int FUNC_5 (int const,int ,char*,int ) ;
 int FUNC_6 (char*,int ,char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char*,int ) ;

const char *
FUNC_10(
 const sockaddr_u *VAR_2
 )
{
 int VAR_3;
 char * VAR_4;
 char * VAR_5;
 u_long VAR_6;

 VAR_3 = FUNC_7();
 FUNC_1(VAR_4);

 if (((void*)0) == VAR_2) {
  FUNC_9(VAR_4, "(null)", VAR_0);
 } else {
  switch(FUNC_0(VAR_2)) {

  case 130:
  case 128:
   FUNC_5(130, FUNC_2(VAR_2), VAR_4,
      VAR_0);
   break;

  case 129:
   FUNC_5(129, FUNC_3(VAR_2), VAR_4,
      VAR_0);
   VAR_6 = FUNC_4(VAR_2);
   if (0 != VAR_6 && !FUNC_8(VAR_4, '%')) {
    VAR_5 = VAR_4;
    FUNC_1(VAR_4);
    FUNC_6(VAR_4, VAR_0, "%s%%%lu",
      VAR_5, VAR_6);
    VAR_4[VAR_0 - 1] = '\0';
   }
   break;

  default:
   FUNC_6(VAR_4, VAR_0,
     "(socktoa unknown family %d)",
     FUNC_0(VAR_2));
  }
 }
 VAR_1 = VAR_3;

 return VAR_4;
}
