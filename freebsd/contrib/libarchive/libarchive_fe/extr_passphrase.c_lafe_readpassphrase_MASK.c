
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,char*) ;
 char* FUNC_1 (char const*,char*,size_t,int ) ;

char *
FUNC_2(const char *VAR_2, char *VAR_3, size_t VAR_4)
{
 char *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0);
 if (VAR_5 == ((void*)0)) {
  switch (VAR_1) {
  case 128:
   break;
  default:
   FUNC_0(1, VAR_1, "Couldn't read passphrase");
   break;
  }
 }
 return (VAR_5);
}
