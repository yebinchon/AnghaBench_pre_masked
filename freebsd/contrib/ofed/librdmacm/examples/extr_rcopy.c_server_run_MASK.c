
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union rsocket_address {int sa; } ;
typedef int socklen_t ;


 int VAR_0 ;
 char* FUNC_0 (union rsocket_address*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int *,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_1, VAR_2;
 union rsocket_address VAR_3;
 socklen_t VAR_4;

 VAR_1 = FUNC_6();
 if (VAR_1 < 0)
  return VAR_1;

 while (1) {
  VAR_4 = sizeof VAR_3;
  FUNC_2("waiting for connection...");
  FUNC_1(((void*)0));
  VAR_2 = FUNC_3(VAR_1, &VAR_3.sa, &VAR_4);

  FUNC_2("client: %s\n", FUNC_0(&VAR_3));
  FUNC_7(VAR_2);

  FUNC_5(VAR_2, VAR_0);
  FUNC_4(VAR_2);
 }
 return 0;
}
