
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intervaltimer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int *,int *) ;

void
FUNC_4(
 const intervaltimer * VAR_4
 )
{
 const char * VAR_5;
 int VAR_6;





 VAR_5 = "setitimer";
 VAR_6 = FUNC_2(VAR_0, &VAR_2, ((void*)0));

 if (-1 == VAR_6) {
  FUNC_1(VAR_1, "interval timer %s failed, %m",
   VAR_5);
  FUNC_0(1);
 }
}
