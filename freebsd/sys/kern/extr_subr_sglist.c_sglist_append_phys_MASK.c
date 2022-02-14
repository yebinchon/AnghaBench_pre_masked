
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct sgsave {int dummy; } ;
struct sglist_seg {size_t ss_len; int ss_paddr; } ;
struct sglist {scalar_t__ sg_maxseg; int sg_nseg; struct sglist_seg* sg_segs; } ;


 int VAR_0 ;
 int FUNC_0 (struct sglist*,struct sgsave) ;
 int FUNC_1 (struct sglist*,struct sgsave) ;
 int FUNC_2 (struct sglist*,struct sglist_seg**,int ,size_t) ;

int
FUNC_3(struct sglist *VAR_1, vm_paddr_t VAR_2, size_t VAR_3)
{
 struct sglist_seg *VAR_4;
 struct sgsave VAR_5;
 int VAR_6;

 if (VAR_1->sg_maxseg == 0)
  return (VAR_0);
 if (VAR_3 == 0)
  return (0);

 if (VAR_1->sg_nseg == 0) {
  VAR_1->sg_segs[0].ss_paddr = VAR_2;
  VAR_1->sg_segs[0].ss_len = VAR_3;
  VAR_1->sg_nseg = 1;
  return (0);
 }
 VAR_4 = &VAR_1->sg_segs[VAR_1->sg_nseg - 1];
 FUNC_1(VAR_1, VAR_5);
 VAR_6 = FUNC_2(VAR_1, &VAR_4, VAR_2, VAR_3);
 if (VAR_6)
  FUNC_0(VAR_1, VAR_5);
 return (VAR_6);
}
