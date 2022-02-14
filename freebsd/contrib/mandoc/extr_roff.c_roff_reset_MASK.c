
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int format; int options; char control; char escape; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct roff*) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;

void
FUNC_1(struct roff *VAR_6)
{
 FUNC_0(VAR_6);
 VAR_6->format = VAR_6->options & (VAR_1 | VAR_0);
 VAR_6->control = '\0';
 VAR_6->escape = '\\';
 VAR_2 = 0;
 VAR_3 = ((void*)0);
 VAR_4 = 0;
 VAR_5 = ((void*)0);
}
