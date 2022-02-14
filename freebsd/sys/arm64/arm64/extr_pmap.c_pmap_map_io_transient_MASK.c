
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int,int *) ;

boolean_t
FUNC_8(vm_page_t VAR_6[], vm_offset_t VAR_7[], int VAR_8,
    boolean_t VAR_9)
{
 vm_paddr_t VAR_10;
 boolean_t VAR_11;
 int VAR_12, VAR_13;





 VAR_11 = VAR_0;
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_10 = FUNC_3(VAR_6[VAR_13]);
  if (FUNC_4(!FUNC_1(VAR_10))) {
   VAR_12 = FUNC_7(VAR_5, VAR_3,
       VAR_1 | VAR_2, &VAR_7[VAR_13]);
   FUNC_0(VAR_12 == 0, ("vmem_alloc failed: %d", VAR_12));
   VAR_11 = VAR_4;
  } else {
   VAR_7[VAR_13] = FUNC_2(VAR_10);
  }
 }


 if (!VAR_11)
  return (VAR_0);

 if (!VAR_9)
  FUNC_6();
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_10 = FUNC_3(VAR_6[VAR_13]);
  if (!FUNC_1(VAR_10)) {
   FUNC_5(
      "pmap_map_io_transient: TODO: Map out of DMAP data");
  }
 }

 return (VAR_11);
}
