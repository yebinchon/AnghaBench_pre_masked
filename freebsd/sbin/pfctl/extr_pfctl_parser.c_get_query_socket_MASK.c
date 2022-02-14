
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;

int
FUNC_3(void)
{
 static int VAR_1 = -1;

 if (VAR_1 == -1) {
  if ((VAR_1 = FUNC_2(FUNC_1(), VAR_0, 0)) == -1)
   FUNC_0(1, "socket");
 }

 return (VAR_1);
}
