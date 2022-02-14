
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_4, VAR_1, ((void*)0))) == -1)
  FUNC_0(VAR_0, "fcntl()");
 if (FUNC_1(VAR_4, VAR_2, VAR_5 | VAR_3) == -1)
  FUNC_0(VAR_0, "fcntl()");
}
