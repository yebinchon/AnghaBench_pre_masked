
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct media {scalar_t__ baudrate; int subtype; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct media** VAR_5 ;
 struct media** VAR_6 ;

__attribute__((used)) static u32
FUNC_1(u32 VAR_7, bool VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 struct media VAR_13 = {};

 switch (VAR_7) {
 case 129:
  VAR_7 = VAR_0;
  break;
 case 128:
  VAR_7 = VAR_1;
  break;
 }

 VAR_12 = VAR_8 ? VAR_2 :
     VAR_4;

 for (VAR_9 = 0; VAR_9 != VAR_12; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_3 ; ++VAR_10) {
   VAR_13 = VAR_8 ? VAR_5[VAR_9][VAR_10] :
       VAR_6[VAR_9][VAR_10];
   if (VAR_13.baudrate == 0)
    continue;
   if (VAR_13.subtype == VAR_7) {
    VAR_11 |= FUNC_0(VAR_9);
   }
  }
 }

 return (VAR_11);
}
