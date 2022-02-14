
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sglist_seg {scalar_t__ ss_paddr; scalar_t__ ss_len; } ;
struct sglist {int sg_nseg; int sg_maxseg; struct sglist_seg* sg_segs; } ;


 int VAR_0 ;
 int FUNC_0 (struct sglist_seg*,struct sglist_seg*,int) ;
 int FUNC_1 (struct sglist*) ;

int
FUNC_2(struct sglist *VAR_1, struct sglist *VAR_2)
{
 struct sglist_seg *VAR_3, *VAR_4;
 int VAR_5;


 if (VAR_2->sg_nseg == 0)
  return (0);





 VAR_5 = 0;
 VAR_3 = &VAR_1->sg_segs[VAR_1->sg_nseg - 1];
 VAR_4 = &VAR_2->sg_segs[0];
 if (VAR_1->sg_nseg != 0 &&
     VAR_3->ss_paddr + VAR_3->ss_len == VAR_4->ss_paddr)
  VAR_5 = 1;


 if (VAR_1->sg_nseg + VAR_2->sg_nseg - VAR_5 > VAR_1->sg_maxseg)
  return (VAR_0);


 if (VAR_5)
  VAR_3->ss_len += VAR_4->ss_len;


 FUNC_0(VAR_1->sg_segs + VAR_1->sg_nseg, VAR_2->sg_segs + VAR_5,
     (VAR_2->sg_nseg - VAR_5) * sizeof(struct sglist_seg));
 VAR_1->sg_nseg += VAR_2->sg_nseg - VAR_5;
 FUNC_1(VAR_2);
 return (0);
}
