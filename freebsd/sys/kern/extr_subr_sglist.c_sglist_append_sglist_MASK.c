
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgsave {int dummy; } ;
struct sglist_seg {size_t ss_len; scalar_t__ ss_paddr; } ;
struct sglist {scalar_t__ sg_maxseg; int sg_nseg; struct sglist_seg* sg_segs; } ;


 int VAR_0 ;
 int FUNC_0 (struct sglist*,struct sgsave) ;
 int FUNC_1 (struct sglist*,struct sgsave) ;
 int FUNC_2 (struct sglist*,struct sglist_seg**,scalar_t__,size_t) ;

int
FUNC_3(struct sglist *VAR_1, struct sglist *VAR_2, size_t VAR_3,
    size_t VAR_4)
{
 struct sgsave VAR_5;
 struct sglist_seg *VAR_6;
 size_t VAR_7;
 int VAR_8, VAR_9;

 if (VAR_1->sg_maxseg == 0 || VAR_4 == 0)
  return (VAR_0);
 FUNC_1(VAR_1, VAR_5);
 VAR_8 = VAR_0;
 VAR_6 = &VAR_1->sg_segs[VAR_1->sg_nseg - 1];
 for (VAR_9 = 0; VAR_9 < VAR_2->sg_nseg; VAR_9++) {
  if (VAR_3 >= VAR_2->sg_segs[VAR_9].ss_len) {
   VAR_3 -= VAR_2->sg_segs[VAR_9].ss_len;
   continue;
  }
  VAR_7 = VAR_2->sg_segs[VAR_9].ss_len - VAR_3;
  if (VAR_7 > VAR_4)
   VAR_7 = VAR_4;
  VAR_8 = FUNC_2(VAR_1, &VAR_6,
      VAR_2->sg_segs[VAR_9].ss_paddr + VAR_3, VAR_7);
  if (VAR_8)
   break;
  VAR_3 = 0;
  VAR_4 -= VAR_7;
  if (VAR_4 == 0)
   break;
 }
 if (VAR_4 != 0)
  VAR_8 = VAR_0;
 if (VAR_8)
  FUNC_0(VAR_1, VAR_5);
 return (VAR_8);
}
