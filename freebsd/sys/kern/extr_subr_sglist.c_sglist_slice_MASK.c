
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sglist_seg {int dummy; } ;
struct sglist {int sg_nseg; int sg_maxseg; TYPE_1__* sg_segs; } ;
struct TYPE_3__ {size_t ss_len; scalar_t__ ss_paddr; } ;


 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,char*,int,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 struct sglist* FUNC_3 (int,int) ;

int
FUNC_4(struct sglist *VAR_4, struct sglist **VAR_5, size_t VAR_6,
    size_t VAR_7, int VAR_8)
{
 struct sglist *VAR_9;
 size_t VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;


 if (VAR_7 == 0)
  return (0);


 VAR_11 = VAR_6 + VAR_7;
 VAR_10 = 0;
 VAR_14 = 0;
 VAR_16 = 0;
 VAR_12 = VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_4->sg_nseg; VAR_15++) {
  VAR_10 += VAR_4->sg_segs[VAR_15].ss_len;
  if (VAR_10 > VAR_6) {





   if (VAR_14 == 0) {
    VAR_16 = VAR_15;
    VAR_12 = VAR_6 - (VAR_10 -
        VAR_4->sg_segs[VAR_15].ss_len);
    FUNC_0(VAR_3, "sglist_slice: foffs = %08lx",
        VAR_12);
   }
   VAR_14++;






   if (VAR_10 >= VAR_11) {
    VAR_13 = VAR_10 - VAR_11;
    FUNC_0(VAR_3, "sglist_slice: loffs = %08lx",
        VAR_13);
    break;
   }
  }
 }


 if (VAR_10 < VAR_11)
  return (VAR_1);

 if (*VAR_5 == ((void*)0)) {
  VAR_9 = FUNC_3(VAR_14, VAR_8);
  if (VAR_9 == ((void*)0))
   return (VAR_2);
  *VAR_5 = VAR_9;
 } else {
  VAR_9 = *VAR_5;
  if (VAR_9->sg_maxseg < VAR_14)
   return (VAR_0);
  if (VAR_9->sg_nseg != 0)
   return (VAR_1);
 }





 FUNC_2(VAR_4->sg_segs + VAR_16, VAR_9->sg_segs,
     VAR_14 * sizeof(struct sglist_seg));
 VAR_9->sg_nseg = VAR_14;


 if (VAR_12 != 0) {
  VAR_9->sg_segs[0].ss_paddr += VAR_12;
  VAR_9->sg_segs[0].ss_len -= VAR_12;
  FUNC_1(VAR_3, "sglist_slice seg[0]: %08lx:%08lx",
      (long)VAR_9->sg_segs[0].ss_paddr, VAR_9->sg_segs[0].ss_len);
 }
 if (VAR_13 != 0) {
  VAR_9->sg_segs[VAR_14 - 1].ss_len -= VAR_13;
  FUNC_1(VAR_3, "sglist_slice seg[%d]: len %08x", VAR_14 - 1,
      VAR_9->sg_segs[VAR_14 - 1].ss_len);
 }
 return (0);
}
