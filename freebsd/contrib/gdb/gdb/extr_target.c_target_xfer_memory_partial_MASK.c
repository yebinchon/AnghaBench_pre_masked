
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; scalar_t__ cache; } ;
struct mem_region {scalar_t__ hi; TYPE_1__ attrib; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;


 int FUNC_0 (int ,scalar_t__,char*,int,int) ;
 int FUNC_1 (scalar_t__,char*,int,int,TYPE_1__*) ;
 int VAR_1 ;
 struct mem_region* FUNC_2 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_3, char *VAR_4, int VAR_5,
       int VAR_6, int *VAR_7)
{
  int VAR_8;
  int VAR_9;
  struct mem_region *VAR_10;


  if (VAR_5 == 0)
    {
      *VAR_7 = 0;
      return 0;
    }

  VAR_10 = FUNC_2(VAR_3);
  if (VAR_3 + VAR_5 < VAR_10->hi)
    VAR_9 = VAR_5;
  else
    VAR_9 = VAR_10->hi - VAR_3;

  switch (VAR_10->attrib.mode)
    {
    case 129:
      if (VAR_6)
 {
   *VAR_7 = VAR_0;
   return -1;
 }
      break;

    case 128:
      if (VAR_6)
 {
   *VAR_7 = VAR_0;
   return -1;
 }
      break;
    }

  if (VAR_10->attrib.cache)
    VAR_8 = FUNC_0 (VAR_2, VAR_3, VAR_4,
         VAR_9, VAR_6);
  else
    VAR_8 = FUNC_1 (VAR_3, VAR_4, VAR_9, VAR_6,
     &VAR_10->attrib);

  if (VAR_8 <= 0)
    {
      if (VAR_1 != 0)
 *VAR_7 = VAR_1;
      else
 *VAR_7 = VAR_0;

        return -1;
    }

  *VAR_7 = 0;
  return VAR_8;
}
