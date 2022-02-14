
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int ocs_os_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,void**,int) ;

__attribute__((used)) static void
FUNC_1(ocs_os_handle_t VAR_1, void **VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 if (VAR_2) {
  if (VAR_4) {
   uint32_t VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 ++) {
    FUNC_1(VAR_1, VAR_2[VAR_5], VAR_3, VAR_4-1);
   }

   FUNC_0(VAR_1, VAR_2, VAR_0*sizeof(*VAR_2));
  }
 }
}
