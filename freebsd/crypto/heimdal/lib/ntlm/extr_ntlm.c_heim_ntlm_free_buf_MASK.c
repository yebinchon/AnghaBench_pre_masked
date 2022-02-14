
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {scalar_t__ length; int * data; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct ntlm_buf *VAR_0)
{
    if (VAR_0->data)
 FUNC_0(VAR_0->data);
    VAR_0->data = ((void*)0);
    VAR_0->length = 0;
}
