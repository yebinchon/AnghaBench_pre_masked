
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int state; } ;


 scalar_t__ FUNC_0 (struct rsocket*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct rsocket *VAR_1)
{
 return FUNC_0(VAR_1) || !(VAR_1->state & VAR_0);
}
