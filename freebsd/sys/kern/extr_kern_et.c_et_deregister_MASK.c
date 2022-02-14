
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {int (* et_deregister_cb ) (struct eventtimer*,int ) ;int et_sysctl; int et_arg; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct eventtimer*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct eventtimer*,int ) ;
 int FUNC_4 (int ,int,int) ;

int
FUNC_5(struct eventtimer *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->et_deregister_cb != ((void*)0)) {
  if ((VAR_4 = VAR_3->et_deregister_cb(VAR_3, VAR_3->et_arg)) != 0)
   return (VAR_4);
 }

 FUNC_0();
 FUNC_2(&VAR_2, VAR_3, VAR_1, VAR_0);
 FUNC_1();
 FUNC_4(VAR_3->et_sysctl, 1, 1);
 return (0);
}
