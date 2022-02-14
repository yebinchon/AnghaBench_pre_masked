
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char const*,int,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

const char *
FUNC_4(void)
{
 const char *VAR_3 = "test_flopen_create";
 const char *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_3(VAR_3);
 VAR_5 = FUNC_1(VAR_3, VAR_1|VAR_0, 0640);
 if (VAR_5 < 0) {
  VAR_4 = FUNC_2(VAR_2);
 } else {
  FUNC_0(VAR_5);
 }
 FUNC_3(VAR_3);
 return (VAR_4);
}
