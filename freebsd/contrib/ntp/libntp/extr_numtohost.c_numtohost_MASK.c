
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
struct hostent {int h_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hostent* FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;

char *
FUNC_5(
 u_int32 VAR_5
 )
{
 char *VAR_6;
 struct hostent *VAR_7;







 if ((((FUNC_2(VAR_5) & VAR_4) == VAR_3)
      && (FUNC_2(VAR_5) != VAR_2))
     || ((VAR_7 = FUNC_1((char *)&VAR_5, sizeof VAR_5, VAR_0))
  == 0))
     return FUNC_3(VAR_5);

 FUNC_0(VAR_6);
 FUNC_4(VAR_6, VAR_7->h_name, VAR_1);

 return VAR_6;
}
