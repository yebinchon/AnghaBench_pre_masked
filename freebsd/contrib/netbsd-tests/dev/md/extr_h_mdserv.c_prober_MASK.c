
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void *
FUNC_6(void *VAR_4)
{
 int VAR_5, VAR_6;
 char VAR_7[4];
 ssize_t VAR_8;

 VAR_5 = FUNC_3(VAR_4, VAR_2);
 for (;;) {
  VAR_8 = FUNC_4(VAR_5, VAR_7, sizeof(VAR_7));

  switch (VAR_8) {
  case 4:
   VAR_6 = 0;
   goto out;

  case -1:
   if (VAR_3 == VAR_0) {
    FUNC_5(1000);
    continue;
   }


  default:
   VAR_6 = VAR_1;
   goto out;
  }
 }
 out:

 VAR_6 = FUNC_2(VAR_6);
 FUNC_0(VAR_6, "rump_daemonize_done");

 if (VAR_6)
  FUNC_1(1);

 return ((void*)0);
}
