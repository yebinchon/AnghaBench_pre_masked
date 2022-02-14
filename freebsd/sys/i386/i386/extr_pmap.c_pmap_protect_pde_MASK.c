
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_offset_t ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int*,int,int) ;
 int VAR_16 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static boolean_t
FUNC_6(pmap_t VAR_17, pd_entry_t *VAR_18, vm_offset_t VAR_19, vm_prot_t VAR_20)
{
 pd_entry_t VAR_21, VAR_22;
 vm_page_t VAR_23, VAR_24;
 boolean_t VAR_25;

 FUNC_2(VAR_17, VAR_1);
 FUNC_0((VAR_19 & VAR_4) == 0,
     ("pmap_protect_pde: sva is not 4mpage aligned"));
 VAR_25 = VAR_0;
retry:
 VAR_22 = VAR_21 = *VAR_18;
 if ((VAR_20 & VAR_13) == 0) {
  if ((VAR_22 & (VAR_7 | VAR_6 | VAR_10)) ==
      (VAR_7 | VAR_6 | VAR_10)) {
   VAR_23 = FUNC_1(VAR_22 & VAR_9);
   for (VAR_24 = VAR_23; VAR_24 < &VAR_23[VAR_2 / VAR_3]; VAR_24++)
    FUNC_5(VAR_24);
  }
  VAR_21 &= ~(VAR_10 | VAR_6);
 }




 if (VAR_21 != VAR_22) {





  if (!FUNC_3(VAR_18, VAR_22, VAR_21 & ~VAR_8))
   goto retry;
  if ((VAR_22 & VAR_5) != 0)
   FUNC_4(VAR_15, VAR_19, VAR_22);
  else
   VAR_25 = VAR_11;
 }
 return (VAR_25);
}
