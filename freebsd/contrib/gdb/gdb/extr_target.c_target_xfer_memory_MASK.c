
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
 scalar_t__ VAR_1 ;
 struct mem_region* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR VAR_3, char *VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7;
  int VAR_8;
  struct mem_region *VAR_9;


  if (VAR_5 == 0)
    {
      return 0;
    }

  while (VAR_5 > 0)
    {
      VAR_9 = FUNC_2(VAR_3);
      if (VAR_3 + VAR_5 < VAR_9->hi)
 VAR_8 = VAR_5;
      else
 VAR_8 = VAR_9->hi - VAR_3;

      switch (VAR_9->attrib.mode)
 {
 case 129:
   if (VAR_6)
     return VAR_0;
   break;

 case 128:
   if (!VAR_6)
     return VAR_0;
   break;
 }

      while (VAR_8 > 0)
 {
   if (VAR_9->attrib.cache)
     VAR_7 = FUNC_0 (VAR_2, VAR_3, VAR_4,
         VAR_8, VAR_6);
   else
     VAR_7 = FUNC_1 (VAR_3, VAR_4, VAR_8, VAR_6,
     &VAR_9->attrib);

   if (VAR_7 <= 0)
     {



       if (!VAR_6)
  FUNC_3 (VAR_4, 0, VAR_5);
       if (VAR_1 == 0)
  return VAR_0;
       else
  return VAR_1;
     }

   VAR_3 += VAR_7;
   VAR_4 += VAR_7;
   VAR_5 -= VAR_7;
   VAR_8 -= VAR_7;
 }
    }

  return 0;
}
