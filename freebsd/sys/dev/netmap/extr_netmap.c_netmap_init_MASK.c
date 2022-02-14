
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,int *,int ,int ,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;

int
FUNC_8(void)
{
 int VAR_6;

 FUNC_0();

 VAR_6 = FUNC_4();
 if (VAR_6 != 0)
  goto fail;





 VAR_5 = FUNC_1(VAR_2,
  &VAR_4, 0, ((void*)0), VAR_3, VAR_1, 0600,
         "netmap");
 if (!VAR_5)
  goto fail;

 VAR_6 = FUNC_3();
 if (VAR_6)
  goto fail;





 VAR_6 = FUNC_5();
 if (VAR_6)
  goto fail;

 FUNC_7("netmap: loaded module");
 return (0);
fail:
 FUNC_2();
 return (VAR_0);
}
