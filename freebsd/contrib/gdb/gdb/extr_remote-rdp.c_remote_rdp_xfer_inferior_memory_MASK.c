
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4,
     int VAR_5, struct mem_attrib *VAR_6,
     struct target_ops *VAR_7)
{


  int VAR_8 = 0;
  while (VAR_8 < VAR_4)
    {
      int VAR_9;
      int VAR_10 = VAR_4 - VAR_8;
      if (VAR_10 > VAR_1)
 VAR_10 = VAR_1;

      VAR_0;

      if (VAR_5)
 {
   VAR_9 = FUNC_1 (VAR_2 + VAR_8, VAR_3 + VAR_8, VAR_10);
 }
      else
 {
   VAR_9 = FUNC_0 (VAR_2 + VAR_8, VAR_3 + VAR_8, VAR_10);
 }

      VAR_8 += VAR_9;

      if (VAR_9 != VAR_10)
 break;
    }
  return VAR_8;
}
