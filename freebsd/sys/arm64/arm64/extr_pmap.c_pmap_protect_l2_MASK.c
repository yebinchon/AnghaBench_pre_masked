
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(pmap_t VAR_9, pt_entry_t *VAR_10, vm_offset_t VAR_11, pt_entry_t VAR_12,
    pt_entry_t VAR_13)
{
 pd_entry_t VAR_14;
 vm_page_t VAR_15, VAR_16;

 FUNC_3(VAR_9, VAR_7);
 FUNC_1((VAR_11 & VAR_5) == 0,
     ("pmap_protect_l2: sva is not 2mpage aligned"));
 VAR_14 = FUNC_6(VAR_10);
 FUNC_1((VAR_14 & VAR_1) == VAR_4,
     ("pmap_protect_l2: L2e %lx is not a block mapping", VAR_14));





retry:
 if ((VAR_14 & VAR_12) == VAR_13)
  return;






 if ((VAR_14 & VAR_3) != 0 &&
     (VAR_13 & FUNC_0(VAR_0)) != 0 && FUNC_7(VAR_14)) {
  VAR_15 = FUNC_2(VAR_14 & ~VAR_2);
  for (VAR_16 = VAR_15; VAR_16 < &VAR_15[VAR_6 / VAR_8]; VAR_16++)
   FUNC_8(VAR_16);
 }

 if (!FUNC_4(VAR_10, &VAR_14, (VAR_14 & ~VAR_12) | VAR_13))
  goto retry;





 FUNC_5(VAR_9, VAR_11);
}
