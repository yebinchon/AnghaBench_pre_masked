
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hhook_head {int hhh_refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct hhook_head*) ;

int
FUNC_3(struct hhook_head *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;

 FUNC_0();
 if (VAR_2 == ((void*)0))
  VAR_3 = VAR_1;
 else if (VAR_2->hhh_refcount > 1)
  VAR_3 = VAR_0;
 else
  FUNC_2(VAR_2);
 FUNC_1();

 return (VAR_3);
}
