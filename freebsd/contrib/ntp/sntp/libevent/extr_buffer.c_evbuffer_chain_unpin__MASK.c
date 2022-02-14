
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {unsigned int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct evbuffer_chain*) ;

void
FUNC_2(struct evbuffer_chain *VAR_1, unsigned VAR_2)
{
 FUNC_0((VAR_1->flags & VAR_2) != 0);
 VAR_1->flags &= ~VAR_2;
 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_1);
}
