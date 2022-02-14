
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {scalar_t__ len; int * str; scalar_t__ type; scalar_t__ role; scalar_t__ user; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct context*) ;

__attribute__((used)) static inline void FUNC_2(struct context *VAR_0)
{
 VAR_0->user = VAR_0->role = VAR_0->type = 0;
 FUNC_0(VAR_0->str);
 VAR_0->str = ((void*)0);
 VAR_0->len = 0;
 FUNC_1(VAR_0);
}
