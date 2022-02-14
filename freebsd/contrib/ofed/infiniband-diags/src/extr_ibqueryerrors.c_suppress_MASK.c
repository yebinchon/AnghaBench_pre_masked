
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum MAD_FIELDS { ____Placeholder_MAD_FIELDS } MAD_FIELDS ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_0(enum MAD_FIELDS VAR_2)
{
 int VAR_3 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2 == VAR_1[VAR_3])
   return 1;
 return 0;
}
