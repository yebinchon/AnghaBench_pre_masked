
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_conf {int md_type; int md_size; int md_addr; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (int *,int *,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,int ,struct md_conf*) ;
 int FUNC_11 (char*,int ) ;

int
FUNC_12(int VAR_6, char *VAR_7[])
{
 pthread_t VAR_8;
 struct md_conf VAR_9;
 int VAR_10, VAR_11;

 if (VAR_6 != 2)
  FUNC_3(1);

 VAR_9.md_addr = FUNC_1(1, VAR_0);
 VAR_9.md_size = VAR_0;
 VAR_9.md_type = VAR_2;

 VAR_11 = FUNC_6();
 FUNC_0(VAR_11, "rump_daemonize_begin");

 VAR_11 = FUNC_8();
 FUNC_0(VAR_11, "rump_init");

 VAR_11 = FUNC_9("unix://commsock");
 FUNC_0(VAR_11, "init server");

 if ((VAR_10 = FUNC_11(VAR_7[1], VAR_3)) == -1)
  FUNC_2(1, "open");
 VAR_11 = FUNC_4(&VAR_8, ((void*)0), VAR_5, VAR_7[1]);
 FUNC_0(VAR_11, "pthread_create");
 FUNC_5(VAR_8);

 if (FUNC_10(VAR_10, VAR_1, &VAR_9) == -1) {
  FUNC_7(VAR_4);
  FUNC_3(1);
 }

 return 0;
}
