
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* b_cont; scalar_t__ b_rptr; scalar_t__ b_wptr; } ;
typedef TYPE_1__ mblk_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static unsigned long
FUNC_1(
       mblk_t **VAR_0
       )
{
 while (*VAR_0 != (mblk_t *)((void*)0))
 {
  if ((*VAR_0)->b_wptr - (*VAR_0)->b_rptr)
  {
   return (unsigned long)(*(unsigned char *)((*VAR_0)->b_rptr++));
  }
  else
  {
   register mblk_t *VAR_1 = *VAR_0;

   *VAR_0 = (*VAR_0)->b_cont;
   FUNC_0(VAR_1);
  }
 }
 return (unsigned long)~0;
}
