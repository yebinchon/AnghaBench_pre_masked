
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_buffer {size_t pfrb_type; size_t pfrb_size; size_t pfrb_msize; scalar_t__ pfrb_caddr; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,void const*,size_t) ;
 scalar_t__ FUNC_1 (struct pfr_buffer*,int ) ;

int
FUNC_2(struct pfr_buffer *VAR_4, const void *VAR_5)
{
 size_t VAR_6;

 if (VAR_4 == ((void*)0) || VAR_4->pfrb_type <= 0 || VAR_4->pfrb_type >= VAR_1 ||
     VAR_5 == ((void*)0)) {
  VAR_3 = VAR_0;
  return (-1);
 }
 VAR_6 = VAR_2[VAR_4->pfrb_type];
 if (VAR_4->pfrb_size == VAR_4->pfrb_msize)
  if (FUNC_1(VAR_4, 0))
   return (-1);
 FUNC_0(((caddr_t)VAR_4->pfrb_caddr) + VAR_6 * VAR_4->pfrb_size, VAR_5, VAR_6);
 VAR_4->pfrb_size++;
 return (0);
}
