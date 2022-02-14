
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct sglist_seg {scalar_t__ ss_paddr; size_t ss_len; } ;
struct sglist {scalar_t__ sg_nseg; scalar_t__ sg_maxseg; } ;


 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(struct sglist *VAR_1, struct sglist_seg **VAR_2,
    vm_paddr_t VAR_3, size_t VAR_4)
{
 struct sglist_seg *VAR_5;

 VAR_5 = *VAR_2;
 if (VAR_5->ss_paddr + VAR_5->ss_len == VAR_3)
  VAR_5->ss_len += VAR_4;
 else {
  if (VAR_1->sg_nseg == VAR_1->sg_maxseg)
   return (VAR_0);
  VAR_5++;
  VAR_5->ss_paddr = VAR_3;
  VAR_5->ss_len = VAR_4;
  VAR_1->sg_nseg++;
  *VAR_2 = VAR_5;
 }
 return (0);
}
