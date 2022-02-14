
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array_part {scalar_t__* elements; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct flex_array_part *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(struct flex_array_part); VAR_2++)
  if (VAR_1->elements[VAR_2] != VAR_0)
   return 0;
 return 1;
}
