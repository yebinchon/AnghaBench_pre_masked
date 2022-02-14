
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmm_stat_type {int index; int nelems; char* desc; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_1 ;
 struct vmm_stat_type** VAR_2 ;

int
FUNC_2(int VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6;
 struct vmm_stat_type *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = VAR_2[VAR_6];
  if (VAR_3 >= VAR_7->index && VAR_3 < VAR_7->index + VAR_7->nelems) {
   if (VAR_7->nelems > 1) {
    FUNC_0(VAR_4, VAR_5, "%s[%d]",
      VAR_7->desc, VAR_3 - VAR_7->index);
   } else {
    FUNC_1(VAR_4, VAR_7->desc, VAR_5);
   }
   return (0);
  }
 }

 return (VAR_0);
}
