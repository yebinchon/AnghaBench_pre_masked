
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int*,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static boolean_t
FUNC_9(pmap_t VAR_13, pd_entry_t *VAR_14, vm_offset_t VAR_15, vm_prot_t VAR_16)
{
 pd_entry_t VAR_17, VAR_18;
 vm_page_t VAR_19, VAR_20;
 boolean_t VAR_21;
 pt_entry_t VAR_22, VAR_23, VAR_24;

 VAR_22 = FUNC_4(VAR_13);
 VAR_23 = FUNC_6(VAR_13);
 VAR_24 = FUNC_7(VAR_13);

 FUNC_2(VAR_13, VAR_1);
 FUNC_0((VAR_15 & VAR_4) == 0,
     ("pmap_protect_pde: sva is not 2mpage aligned"));
 VAR_21 = VAR_0;
retry:
 VAR_18 = VAR_17 = *VAR_14;
 if ((VAR_16 & VAR_10) == 0) {
  if ((VAR_18 & (VAR_5 | VAR_23 | VAR_24)) ==
      (VAR_5 | VAR_23 | VAR_24)) {
   VAR_19 = FUNC_1(VAR_18 & VAR_7);
   for (VAR_20 = VAR_19; VAR_20 < &VAR_19[VAR_2 / VAR_3]; VAR_20++)
    FUNC_8(VAR_20);
  }
  VAR_17 &= ~(VAR_24 | VAR_23);
 }
 if ((VAR_16 & VAR_9) == 0)
  VAR_17 |= VAR_12;
 if (VAR_17 != VAR_18) {





  if (!FUNC_3(VAR_14, VAR_18, VAR_17 & ~VAR_6))
   goto retry;
  if ((VAR_18 & VAR_22) != 0)
   FUNC_5(VAR_11, VAR_15, VAR_18);
  else
   VAR_21 = VAR_8;
 }
 return (VAR_21);
}
