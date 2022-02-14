
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_long ;
struct spglist {int dummy; } ;
typedef int pt_entry_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
struct TYPE_6__ {int ss; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_7__ {scalar_t__ ref_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct spglist*) ;
 int FUNC_7 (struct spglist*,TYPE_2__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int*,int ) ;
 TYPE_3__ VAR_13 ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int* FUNC_10 (scalar_t__) ;
 int* FUNC_11 (int*,scalar_t__) ;
 int* FUNC_12 (int*,scalar_t__) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (struct spglist*,int) ;
 int FUNC_15 (int ,scalar_t__,scalar_t__) ;

void
FUNC_16(void *VAR_14, vm_size_t VAR_15)
{
 vm_offset_t VAR_16, VAR_17;
 vm_size_t VAR_18;
 pdp_entry_t *VAR_19, VAR_20;
 pd_entry_t *VAR_21, VAR_22;
 pt_entry_t *VAR_23;
 vm_page_t VAR_24;
 struct spglist VAR_25;

 VAR_16 = (vm_offset_t)VAR_14;
 if (VAR_15 == 0 || VAR_16 + VAR_15 < VAR_16 || (VAR_16 >= VAR_1 &&
     VAR_16 + VAR_15 <= VAR_1 + VAR_10))
  return;

 FUNC_6(&VAR_25);
 FUNC_1(FUNC_3(VAR_16) &&
     FUNC_3(VAR_16 + VAR_15 - 1),
     ("not largemap range %#lx %#lx", (u_long)VAR_14, (u_long)VAR_14 + VAR_15));
 FUNC_4(VAR_11);
 for (VAR_17 = VAR_16; VAR_17 < VAR_16 + VAR_15; VAR_17 += VAR_18) {
  VAR_19 = FUNC_10(VAR_17);
  VAR_20 = *VAR_19;
  FUNC_1((VAR_20 & VAR_8) != 0,
      ("invalid pdp va %#lx pdpe %#lx pdp %#lx", VAR_17,
      (u_long)VAR_19, VAR_20));
  if ((VAR_20 & VAR_7) != 0) {
   FUNC_1((VAR_9 & VAR_0) != 0,
       ("no 1G pages, va %#lx pdpe %#lx pdp %#lx", VAR_17,
       (u_long)VAR_19, VAR_20));
   FUNC_1((VAR_17 & VAR_5) == 0,
       ("PDPMASK bit set, va %#lx pdpe %#lx pdp %#lx", VAR_17,
       (u_long)VAR_19, VAR_20));
   FUNC_1(VAR_17 + VAR_2 <= VAR_16 + VAR_15,
       ("unmap covers partial 1GB page, sva %#lx va %#lx "
       "pdpe %#lx pdp %#lx len %#lx", VAR_16, VAR_17,
       (u_long)VAR_19, VAR_20, VAR_15));
   *VAR_19 = 0;
   VAR_18 = VAR_2;
   continue;
  }
  VAR_21 = FUNC_12(VAR_19, VAR_17);
  VAR_22 = *VAR_21;
  FUNC_1((VAR_22 & VAR_8) != 0,
      ("invalid pd va %#lx pde %#lx pd %#lx", VAR_17,
      (u_long)VAR_21, VAR_22));
  if ((VAR_22 & VAR_7) != 0) {
   FUNC_1((VAR_17 & VAR_6) == 0,
       ("PDRMASK bit set, va %#lx pde %#lx pd %#lx", VAR_17,
       (u_long)VAR_21, VAR_22));
   FUNC_1(VAR_17 + VAR_3 <= VAR_16 + VAR_15,
       ("unmap covers partial 2MB page, sva %#lx va %#lx "
       "pde %#lx pd %#lx len %#lx", VAR_16, VAR_17, (u_long)VAR_21,
       VAR_22, VAR_15));
   FUNC_8(VAR_21, 0);
   VAR_18 = VAR_3;
   VAR_24 = FUNC_2(FUNC_0((vm_offset_t)VAR_21));
   VAR_24->ref_count--;
   if (VAR_24->ref_count == 0) {
    *VAR_19 = 0;
    FUNC_7(&VAR_25, VAR_24, VAR_13.s.ss);
   }
   continue;
  }
  VAR_23 = FUNC_11(VAR_21, VAR_17);
  FUNC_1((*VAR_23 & VAR_8) != 0,
      ("invalid pte va %#lx pte %#lx pt %#lx", VAR_17,
      (u_long)VAR_23, *VAR_23));
  FUNC_13(VAR_23);
  VAR_18 = VAR_4;
  VAR_24 = FUNC_2(FUNC_0((vm_offset_t)VAR_23));
  VAR_24->ref_count--;
  if (VAR_24->ref_count == 0) {
   *VAR_21 = 0;
   FUNC_7(&VAR_25, VAR_24, VAR_13.s.ss);
   VAR_24 = FUNC_2(FUNC_0((vm_offset_t)VAR_21));
   VAR_24->ref_count--;
   if (VAR_24->ref_count == 0) {
    *VAR_19 = 0;
    FUNC_7(&VAR_25, VAR_24, VAR_13.s.ss);
   }
  }
 }
 FUNC_9(VAR_11, VAR_16, VAR_16 + VAR_15);
 FUNC_5(VAR_11);
 FUNC_14(&VAR_25, 0);
 FUNC_15(VAR_12, VAR_16, VAR_15);
}
