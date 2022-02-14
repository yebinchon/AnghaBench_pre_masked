
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef int sockaddr_u ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int *,int) ;

sockaddr_u *
FUNC_13(
 sockaddr_u *VAR_3
 )
{
 static sockaddr_u VAR_4[8];
 static int VAR_5;
 u_int32 VAR_6;
 sockaddr_u * VAR_7;

 VAR_7 = &VAR_4[VAR_5];
 VAR_5 = (VAR_5 + 1) % FUNC_1(VAR_4);

 FUNC_10(VAR_7, VAR_3, sizeof(*VAR_7));

 if (FUNC_4(VAR_7)) {
  VAR_6 = FUNC_8(VAR_7);






  if (FUNC_3(VAR_6))
   VAR_6 &= VAR_1;
  else if (FUNC_2(VAR_6))
   VAR_6 &= VAR_0;

  FUNC_7(VAR_7, VAR_6);

 } else if (FUNC_5(VAR_7))

  FUNC_12(&FUNC_6(VAR_7)[8], 8);







 return VAR_7;
}
