
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int *,int ,int *,struct lwp**,char*) ;
 int FUNC_1 (struct lwp*) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;

void
FUNC_3()
{
 struct lwp *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_1 | VAR_0, ((void*)0),
     VAR_3, ((void*)0), &VAR_5, "jointest");
 if (VAR_6)
  FUNC_2("thread creation failed: %d", VAR_6);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  FUNC_2("thread join failed: %d", VAR_6);

 if (VAR_4 != 1)
  FUNC_2("new thread did not run");
}
