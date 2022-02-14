
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pt_entry_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(pt_entry_t *VAR_2, pt_entry_t VAR_3)
{
 pt_entry_t *VAR_4;

 for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_0; VAR_4++) {
  *VAR_4 = VAR_3;
  VAR_3 += VAR_1;
 }
}
