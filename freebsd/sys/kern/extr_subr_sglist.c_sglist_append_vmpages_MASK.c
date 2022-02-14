
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef void* vm_paddr_t ;
struct sgsave {int dummy; } ;
struct sglist_seg {size_t ss_len; void* ss_paddr; } ;
struct sglist {scalar_t__ sg_maxseg; int sg_nseg; struct sglist_seg* sg_segs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sglist*,struct sgsave) ;
 int FUNC_1 (struct sglist*,struct sgsave) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sglist*,struct sglist_seg**,void*,size_t) ;
 size_t FUNC_4 (scalar_t__,size_t) ;

int
FUNC_5(struct sglist *VAR_2, vm_page_t *VAR_3, size_t VAR_4,
    size_t VAR_5)
{
 struct sgsave VAR_6;
 struct sglist_seg *VAR_7;
 vm_paddr_t VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;

 if (VAR_2->sg_maxseg == 0)
  return (VAR_0);
 if (VAR_5 == 0)
  return (0);

 FUNC_1(VAR_2, VAR_6);
 VAR_11 = 0;
 if (VAR_2->sg_nseg == 0) {
  VAR_9 = FUNC_4(VAR_1 - VAR_4, VAR_5);
  VAR_2->sg_segs[0].ss_paddr = FUNC_2(VAR_3[0]) + VAR_4;
  VAR_2->sg_segs[0].ss_len = VAR_9;
  VAR_2->sg_nseg = 1;
  VAR_4 = 0;
  VAR_5 -= VAR_9;
  VAR_11++;
 }
 VAR_7 = &VAR_2->sg_segs[VAR_2->sg_nseg - 1];
 for (; VAR_5 > 0; VAR_11++, VAR_5 -= VAR_9) {
  VAR_9 = FUNC_4(VAR_1 - VAR_4, VAR_5);
  VAR_8 = FUNC_2(VAR_3[VAR_11]) + VAR_4;
  VAR_10 = FUNC_3(VAR_2, &VAR_7, VAR_8, VAR_9);
  if (VAR_10) {
   FUNC_0(VAR_2, VAR_6);
   return (VAR_10);
  }
  VAR_4 = 0;
 }
 return (0);
}
