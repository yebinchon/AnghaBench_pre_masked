
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int *) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 () ;
 char* FUNC_7 (char*,char*) ;

int FUNC_8(int VAR_3, char* VAR_4[])
{
 int VAR_5;
 int VAR_6 = 0;
 const char* VAR_7;
 const char* VAR_8 = ((void*)0);
 const char* VAR_9 = VAR_0;
 FUNC_4("unbound-checkconf");
 FUNC_5(((void*)0), 0, ((void*)0));
 FUNC_1();






 while( (VAR_5=FUNC_3(VAR_3, VAR_4, "fho:")) != -1) {
  switch(VAR_5) {
  case 'f':
   VAR_6 = 1;
   break;
  case 'o':
   VAR_8 = VAR_1;
   break;
  case '?':
  case 'h':
  default:
   FUNC_6();
  }
 }
 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;
 if(VAR_3 != 0 && VAR_3 != 1)
  FUNC_6();
 if(VAR_3 == 1)
  VAR_7 = VAR_4[0];
 else VAR_7 = VAR_9;
 FUNC_0(VAR_7, VAR_8, VAR_6);
 FUNC_2();
 return 0;
}
