
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {scalar_t__ s_len; void* s_drain_arg; int * s_drain_func; } ;
typedef int sbuf_drain_func ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,int ) ;

void
FUNC_3(struct sbuf *VAR_0, sbuf_drain_func *VAR_1, void *VAR_2)
{

 FUNC_2(VAR_0, 0);
 FUNC_1(VAR_0);
 FUNC_0(VAR_1 == VAR_0->s_drain_func || VAR_0->s_len == 0,
     ("Cannot change drain to %p on non-empty sbuf %p", VAR_1, VAR_0));
 VAR_0->s_drain_func = VAR_1;
 VAR_0->s_drain_arg = VAR_2;
}
