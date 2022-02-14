
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netband {int dummy; } ;
typedef int netband_head ;


 struct netband* FUNC_0 (int *) ;
 int FUNC_1 (struct netband*,int ) ;
 int FUNC_2 (struct netband*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(netband_head *VAR_1)
{
 struct netband *VAR_2;

 for (;;) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 == ((void*)0))
   break;
  FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
