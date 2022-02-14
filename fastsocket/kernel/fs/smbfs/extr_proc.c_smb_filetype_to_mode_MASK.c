
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_1(u32 VAR_3)
{
 if (VAR_3 > VAR_0) {
  FUNC_0("Filetype out of range: %d\n", VAR_3);
  return VAR_1;
 }
 return VAR_2[VAR_3];
}
