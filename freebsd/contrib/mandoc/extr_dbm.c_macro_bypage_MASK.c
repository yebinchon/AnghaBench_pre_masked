
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {int value; int pages; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ) ;
 TYPE_1__** VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static char *
FUNC_1(int32_t VAR_3, int32_t VAR_4)
{
 static const int32_t *VAR_5;
 static int32_t VAR_6, VAR_7, VAR_8;



 if (VAR_3 < VAR_0 && VAR_4 != 0) {
  VAR_6 = VAR_3;
  VAR_7 = VAR_4;
  VAR_5 = FUNC_0(VAR_1[VAR_6]->pages);
  VAR_8 = 0;
  return ((void*)0);
 }
 if (VAR_6 >= VAR_0)
  return ((void*)0);



 while (VAR_8 < VAR_2[VAR_6]) {
  if (*VAR_5 == VAR_7)
   break;
  if (*VAR_5 == 0)
   VAR_8++;
  VAR_5++;
 }



 if (VAR_8 == VAR_2[VAR_6]) {
  VAR_6 = VAR_0;
  VAR_7 = 0;
  VAR_5 = ((void*)0);
  return ((void*)0);
 }



 if (++VAR_8 < VAR_2[VAR_6])
  while (*VAR_5++ != 0)
   continue;

 return FUNC_0(VAR_1[VAR_6][VAR_8 - 1].value);
}
