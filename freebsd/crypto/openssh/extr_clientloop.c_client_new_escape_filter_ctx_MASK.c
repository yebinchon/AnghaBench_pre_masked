
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct escape_filter_ctx {int escape_char; scalar_t__ escape_pending; } ;


 struct escape_filter_ctx* FUNC_0 (int,int) ;

void *
FUNC_1(int VAR_0)
{
 struct escape_filter_ctx *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(*VAR_1));
 VAR_1->escape_pending = 0;
 VAR_1->escape_char = VAR_0;
 return (void *)VAR_1;
}
