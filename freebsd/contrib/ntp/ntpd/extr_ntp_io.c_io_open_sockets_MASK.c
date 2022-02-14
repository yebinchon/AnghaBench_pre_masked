
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_2 ;

void
FUNC_6(void)
{
 static int VAR_3;

 if (VAR_3 || FUNC_2( VAR_1 ))
  return;

 VAR_3 = 1;




 FUNC_0();
 FUNC_4(VAR_0);
 FUNC_3();

 FUNC_5();

 FUNC_1(3, ("io_open_sockets: maxactivefd %d\n", VAR_2));
}
