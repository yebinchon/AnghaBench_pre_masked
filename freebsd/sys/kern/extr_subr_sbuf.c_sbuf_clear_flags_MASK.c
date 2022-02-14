
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int s_flags; } ;


 int VAR_0 ;

void
FUNC_0(struct sbuf *VAR_1, int VAR_2)
{

 VAR_1->s_flags &= ~(VAR_2 & VAR_0);
}
