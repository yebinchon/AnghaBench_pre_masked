
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(void)
{
 static u16 VAR_2;
 int VAR_3 = 0;

 do {
  if (VAR_2 == 0)
   VAR_2 = VAR_1;

  if (++VAR_2 > VAR_0) {
   if (!VAR_3) {
    VAR_3 = 1;
    VAR_2 = 0;
    continue;
   } else
    return 0;
  }

 } while (FUNC_0(VAR_2));

 return VAR_2;
}
