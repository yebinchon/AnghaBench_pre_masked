
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef size_t vm_offset_t ;
struct sglist_seg {size_t ss_len; int ss_paddr; } ;
struct sglist {int sg_nseg; struct sglist_seg* sg_segs; } ;
typedef int * pmap_t ;


 size_t FUNC_0 (size_t,scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sglist*,struct sglist_seg**,int ,size_t) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static __inline int
FUNC_4(struct sglist *VAR_2, void *VAR_3, size_t VAR_4, pmap_t VAR_5,
    size_t *VAR_6)
{
 struct sglist_seg *VAR_7;
 vm_offset_t VAR_8, VAR_9;
 vm_paddr_t VAR_10;
 size_t VAR_11;
 int VAR_12;

 if (VAR_6)
  *VAR_6 = 0;
 if (VAR_4 == 0)
  return (0);


 VAR_8 = (vm_offset_t)VAR_3;
 VAR_9 = VAR_8 & VAR_0;
 if (VAR_5 != ((void*)0))
  VAR_10 = FUNC_2(VAR_5, VAR_8);
 else
  VAR_10 = FUNC_3(VAR_8);
 VAR_11 = FUNC_0(VAR_4, VAR_1 - VAR_9);
 if (VAR_2->sg_nseg == 0) {
  VAR_7 = VAR_2->sg_segs;
  VAR_7->ss_paddr = VAR_10;
  VAR_7->ss_len = VAR_11;
  VAR_2->sg_nseg = 1;
 } else {
  VAR_7 = &VAR_2->sg_segs[VAR_2->sg_nseg - 1];
  VAR_12 = FUNC_1(VAR_2, &VAR_7, VAR_10, VAR_11);
  if (VAR_12)
   return (VAR_12);
 }
 VAR_8 += VAR_11;
 VAR_4 -= VAR_11;
 if (VAR_6)
  *VAR_6 += VAR_11;

 while (VAR_4 > 0) {
  VAR_11 = FUNC_0(VAR_4, VAR_1);
  if (VAR_5 != ((void*)0))
   VAR_10 = FUNC_2(VAR_5, VAR_8);
  else
   VAR_10 = FUNC_3(VAR_8);
  VAR_12 = FUNC_1(VAR_2, &VAR_7, VAR_10, VAR_11);
  if (VAR_12)
   return (VAR_12);
  VAR_8 += VAR_11;
  VAR_4 -= VAR_11;
  if (VAR_6)
   *VAR_6 += VAR_11;
 }

 return (0);
}
