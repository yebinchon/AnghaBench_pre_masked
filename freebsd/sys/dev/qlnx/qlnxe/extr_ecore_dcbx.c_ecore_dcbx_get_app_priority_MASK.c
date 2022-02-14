
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum _ecore_status_t
FUNC_0(u8 VAR_3, u8 *VAR_4)
{
 u32 VAR_5, VAR_6 = VAR_1;
 u32 VAR_7 = VAR_1 - 1;
 enum _ecore_status_t VAR_8 = VAR_2;


 if (VAR_3 == 1) {
  *VAR_4 = 0;
  return VAR_8;
 }


 while ((VAR_1 == VAR_6) && VAR_7) {
  VAR_5 = 1 << VAR_7;
  if (VAR_3 & VAR_5)
   VAR_6 = VAR_7;
  VAR_7--;
 }

 if (VAR_6 < VAR_1)
  *VAR_4 = (u8)VAR_6;
 else
  VAR_8 = VAR_0;

 return VAR_8;
}
