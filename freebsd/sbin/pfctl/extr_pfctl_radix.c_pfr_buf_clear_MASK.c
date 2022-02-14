
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_buffer {scalar_t__ pfrb_msize; scalar_t__ pfrb_size; int * pfrb_caddr; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct pfr_buffer *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_0->pfrb_caddr != ((void*)0))
  FUNC_0(VAR_0->pfrb_caddr);
 VAR_0->pfrb_caddr = ((void*)0);
 VAR_0->pfrb_size = VAR_0->pfrb_msize = 0;
}
