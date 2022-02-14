
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sglist_seg {int dummy; } ;
struct sglist {int sg_refs; int sg_nseg; int sg_maxseg; TYPE_1__* sg_segs; } ;
struct TYPE_3__ {size_t ss_len; scalar_t__ ss_paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 struct sglist* FUNC_1 (int,int) ;

int
FUNC_2(struct sglist *VAR_4, struct sglist **VAR_5, size_t VAR_6,
    int VAR_7)
{
 struct sglist *VAR_8;
 size_t VAR_9, VAR_10;
 int VAR_11, VAR_12;

 if (VAR_4->sg_refs > 1)
  return (VAR_0);


 VAR_11 = 0;
 VAR_9 = 0;
 VAR_10 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_4->sg_nseg; VAR_12++) {
  VAR_9 += VAR_4->sg_segs[VAR_12].ss_len;
  VAR_11++;
  if (VAR_9 >= VAR_6) {






   VAR_10 = VAR_9 - VAR_6;
   break;
  }
 }


 if (VAR_11 == 0)
  return (0);

 if (*VAR_5 == ((void*)0)) {
  VAR_8 = FUNC_1(VAR_11, VAR_7);
  if (VAR_8 == ((void*)0))
   return (VAR_3);
  *VAR_5 = VAR_8;
 } else {
  VAR_8 = *VAR_5;
  if (VAR_8->sg_maxseg < VAR_11)
   return (VAR_1);
  if (VAR_8->sg_nseg != 0)
   return (VAR_2);
 }


 FUNC_0(VAR_4->sg_segs, VAR_8->sg_segs, VAR_11 *
     sizeof(struct sglist_seg));
 VAR_8->sg_nseg = VAR_11;







 if (VAR_10 != 0) {
  VAR_11--;
  VAR_8->sg_segs[VAR_11].ss_len -= VAR_10;
  VAR_4->sg_segs[VAR_11].ss_paddr =
      VAR_8->sg_segs[VAR_11].ss_paddr + VAR_10;
  VAR_4->sg_segs[VAR_11].ss_len = VAR_10;
 }


 VAR_4->sg_nseg -= VAR_11;
 FUNC_0(VAR_4->sg_segs + VAR_11, VAR_4->sg_segs, VAR_11 *
     sizeof(struct sglist_seg));
 return (0);
}
