
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_memattr_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef scalar_t__ pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int * FUNC_4 (scalar_t__*,int) ;
 scalar_t__* FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__* FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10(vm_offset_t VAR_8, vm_size_t VAR_9, vm_memattr_t VAR_10)
{
 pd_entry_t *VAR_11, *VAR_12;
 pt_entry_t *VAR_13;
 vm_offset_t VAR_14, VAR_15, VAR_16, VAR_17;
 pmap_t VAR_18;

 VAR_14 = VAR_8;
 VAR_15 = VAR_8 + VAR_9;
 if (VAR_15 < VAR_8)
  return (VAR_0);

 VAR_18 = VAR_7;
 FUNC_0(VAR_18);

 for (; VAR_8 < VAR_15; VAR_8 = VAR_17) {
  VAR_12 = FUNC_7(VAR_18, VAR_8);
  VAR_17 = (VAR_8 + VAR_1) & ~VAR_4;
  if (VAR_17 < VAR_8)
   VAR_17 = VAR_15;

  VAR_11 = FUNC_5(VAR_12, VAR_8);
  if (*VAR_11 == ((void*)0))
   continue;






  if (VAR_17 > VAR_15)
   VAR_17 = VAR_15;

  VAR_16 = VAR_17;
  for (VAR_13 = FUNC_4(VAR_11, VAR_8); VAR_8 != VAR_17; VAR_13++,
      VAR_8 += VAR_3) {
   if (!FUNC_9(VAR_13, VAR_5) || FUNC_8(VAR_13) == VAR_10) {
    if (VAR_16 != VAR_17) {
     FUNC_3(VAR_18, VAR_16, VAR_8);
     VAR_16 = VAR_17;
    }
    continue;
   }
   if (VAR_16 == VAR_17)
    VAR_16 = VAR_8;

   FUNC_6(VAR_13, VAR_10);
  }
  if (VAR_16 != VAR_17)
   FUNC_3(VAR_18, VAR_16, VAR_8);
 }
 FUNC_1(VAR_18);


 FUNC_2(VAR_14, VAR_9);
 return 0;
}
