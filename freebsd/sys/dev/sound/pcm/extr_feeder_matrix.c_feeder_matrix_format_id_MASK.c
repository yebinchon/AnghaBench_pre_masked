
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t channels; size_t ext; int id; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_2(uint32_t VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = FUNC_1(VAR_4);

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5++) {
  if (VAR_3[VAR_5].channels == VAR_6 &&
      VAR_3[VAR_5].ext == VAR_7)
   return (VAR_3[VAR_5].id);
 }

 return (VAR_2);
}
