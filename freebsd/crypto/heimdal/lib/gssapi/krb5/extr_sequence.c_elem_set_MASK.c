
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_msg_order {unsigned int jitter_window; int * elem; } ;
typedef int OM_uint32 ;



__attribute__((used)) static void
FUNC_0(struct gss_msg_order *VAR_0, unsigned int VAR_1, OM_uint32 VAR_2)
{
    VAR_0->elem[VAR_1 % VAR_0->jitter_window] = VAR_2;
}
