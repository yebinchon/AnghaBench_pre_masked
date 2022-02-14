
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_8 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int FUNC_11(void)
{
 int VAR_9;

 FUNC_3();
 VAR_9 = FUNC_1();
 if (VAR_9 < 0) {
  FUNC_6("TUI initialization failed.\n");
  goto out;
 }

 FUNC_0((char *)"^(kB)", VAR_5);

 FUNC_4(VAR_6, ((void*)0));
 FUNC_9();
 FUNC_8();
 FUNC_10();

 FUNC_7(VAR_3, VAR_8);
 FUNC_7(VAR_0, VAR_8);
 FUNC_7(VAR_1, VAR_8);
 FUNC_7(VAR_2, VAR_8);
 FUNC_7(VAR_4, VAR_8);

 FUNC_5(&VAR_7);

 FUNC_2();
out:
 return VAR_9;
}
