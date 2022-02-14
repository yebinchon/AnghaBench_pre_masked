
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array {int * parts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct flex_array*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct flex_array *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->parts[VAR_2]);
}
