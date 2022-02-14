
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_buffer {size_t pfrb_type; int pfrb_size; void* pfrb_caddr; } ;
typedef size_t caddr_t ;


 size_t VAR_0 ;
 size_t* VAR_1 ;

void *
FUNC_0(struct pfr_buffer *VAR_2, const void *VAR_3)
{
 size_t VAR_4;

 if (VAR_2 == ((void*)0) || VAR_2->pfrb_type <= 0 || VAR_2->pfrb_type >= VAR_0)
  return (((void*)0));
 if (VAR_2->pfrb_size == 0)
  return (((void*)0));
 if (VAR_3 == ((void*)0))
  return (VAR_2->pfrb_caddr);
 VAR_4 = VAR_1[VAR_2->pfrb_type];
 if ((((caddr_t)VAR_3)-((caddr_t)VAR_2->pfrb_caddr)) / VAR_4 >= VAR_2->pfrb_size-1)
  return (((void*)0));
 return (((caddr_t)VAR_3) + VAR_4);
}
