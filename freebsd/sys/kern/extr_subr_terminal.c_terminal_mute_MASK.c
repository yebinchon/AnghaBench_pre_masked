
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terminal {int tm_flags; } ;


 int FUNC_0 (struct terminal*) ;
 int FUNC_1 (struct terminal*) ;
 int VAR_0 ;

void
FUNC_2(struct terminal *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1);
 if (VAR_2)
  VAR_1->tm_flags |= VAR_0;
 else
  VAR_1->tm_flags &= ~VAR_0;
 FUNC_1(VAR_1);
}
