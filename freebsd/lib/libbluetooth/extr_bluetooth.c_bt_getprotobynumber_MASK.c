
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int p_proto; } ;


 int FUNC_0 () ;
 struct protoent* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

struct protoent *
FUNC_3(int VAR_1)
{
 struct protoent *VAR_2;

 FUNC_2(VAR_0);
 while ((VAR_2 = FUNC_1()) != ((void*)0))
  if (VAR_2->p_proto == VAR_1)
   break;
 FUNC_0();

 return (VAR_2);
}
