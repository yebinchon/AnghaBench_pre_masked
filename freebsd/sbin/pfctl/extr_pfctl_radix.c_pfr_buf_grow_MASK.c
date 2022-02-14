
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_buffer {size_t pfrb_type; int pfrb_msize; int * pfrb_caddr; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t* VAR_4 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (size_t,int) ;
 int VAR_5 ;
 int * FUNC_2 (int *,int) ;

int
FUNC_3(struct pfr_buffer *VAR_6, int VAR_7)
{
 caddr_t VAR_8;
 size_t VAR_9;

 if (VAR_6 == ((void*)0) || VAR_6->pfrb_type <= 0 || VAR_6->pfrb_type >= VAR_2) {
  VAR_5 = VAR_0;
  return (-1);
 }
 if (VAR_7 != 0 && VAR_7 <= VAR_6->pfrb_msize)
  return (0);
 VAR_9 = VAR_4[VAR_6->pfrb_type];
 if (!VAR_6->pfrb_msize) {
  if (VAR_7 < 64)
   VAR_7 = 64;
  VAR_6->pfrb_caddr = FUNC_1(VAR_9, VAR_7);
  if (VAR_6->pfrb_caddr == ((void*)0))
   return (-1);
  VAR_6->pfrb_msize = VAR_7;
 } else {
  if (VAR_7 == 0)
   VAR_7 = VAR_6->pfrb_msize * 2;
  if (VAR_7 < 0 || VAR_7 >= VAR_3 / VAR_9) {

   VAR_5 = VAR_1;
   return (-1);
  }
  VAR_8 = FUNC_2(VAR_6->pfrb_caddr, VAR_7 * VAR_9);
  if (VAR_8 == ((void*)0))
   return (-1);
  FUNC_0(VAR_8 + VAR_6->pfrb_msize * VAR_9, (VAR_7 - VAR_6->pfrb_msize) * VAR_9);
  VAR_6->pfrb_caddr = VAR_8;
  VAR_6->pfrb_msize = VAR_7;
 }
 return (0);
}
