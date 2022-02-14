
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int ftree_port_group_t ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(ftree_port_group_t ** VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = 0;
 uint32_t VAR_3 = 0;
 ftree_port_group_t *VAR_4 = VAR_0[0];




 for (VAR_2 = 0; VAR_4 != ((void*)0); VAR_2++) {

  VAR_4 = ((void*)0);

  for (VAR_3 = 1; VAR_3 < (VAR_1 - VAR_2); VAR_3++) {

   if (FUNC_0(VAR_0[VAR_3],
             VAR_0[VAR_3 - 1]) < 0) {

    VAR_4 = VAR_0[VAR_3 - 1];
    VAR_0[VAR_3 - 1] = VAR_0[VAR_3];
    VAR_0[VAR_3] = VAR_4;
   }
  }
 }
}
