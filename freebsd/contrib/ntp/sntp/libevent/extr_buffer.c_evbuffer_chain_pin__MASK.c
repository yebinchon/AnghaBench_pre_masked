
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {unsigned int flags; } ;


 int FUNC_0 (int) ;

void
FUNC_1(struct evbuffer_chain *VAR_0, unsigned VAR_1)
{
 FUNC_0((VAR_0->flags & VAR_1) == 0);
 VAR_0->flags |= VAR_1;
}
