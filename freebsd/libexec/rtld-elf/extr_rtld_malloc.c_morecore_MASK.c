
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union overhead {union overhead* ov_next; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 union overhead** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(int VAR_6)
{
 union overhead *VAR_7;
 int VAR_8;
   int VAR_9;
   int VAR_10;

 VAR_8 = VAR_0 << VAR_6;
 if (VAR_8 < VAR_5) {
  VAR_9 = VAR_5;
    VAR_10 = VAR_9 / VAR_8;
 } else {
  VAR_9 = VAR_8;
  VAR_10 = 1;
 }
 if (VAR_9 > VAR_3 - VAR_4)
  if (FUNC_0(VAR_9/VAR_5 + VAR_1) == 0)
   return;
 VAR_7 = (union overhead *)VAR_4;
 VAR_4 += VAR_9;





   VAR_2[VAR_6] = VAR_7;
   while (--VAR_10 > 0) {
  VAR_7->ov_next = (union overhead *)((caddr_t)VAR_7 + VAR_8);
  VAR_7 = (union overhead *)((caddr_t)VAR_7 + VAR_8);
   }
}
