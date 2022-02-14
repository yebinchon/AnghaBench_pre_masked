
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char const*,int,...) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

const char *
FUNC_4(void)
{
 const char *VAR_4 = "test_flopen_lock_self";
 const char *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 FUNC_3(VAR_4);
 VAR_6 = FUNC_1(VAR_4, VAR_2|VAR_0, 0640);
 if (VAR_6 < 0) {
  VAR_5 = FUNC_2(VAR_3);
 } else {
  VAR_7 = FUNC_1(VAR_4, VAR_2|VAR_1);
  if (VAR_7 >= 0) {
   VAR_5 = "second open succeeded";
   FUNC_0(VAR_7);
  }
  FUNC_0(VAR_6);
 }
 FUNC_3(VAR_4);
 return (VAR_5);
}
