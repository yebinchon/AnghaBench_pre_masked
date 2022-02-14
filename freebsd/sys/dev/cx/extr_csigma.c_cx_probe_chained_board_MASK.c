
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 scalar_t__ FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2 (port_t VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;


 VAR_6 = FUNC_1 (FUNC_0(VAR_3));
 *VAR_4 = *VAR_5 = 0;
 switch (VAR_6 & VAR_2) {
 case 142: *VAR_4 = 1; break;
 case 141: *VAR_5 = 1; break;
 case 134: *VAR_4 = *VAR_5 = 1; break;
 case 137: *VAR_4 = 1; break;
 case 130: *VAR_4 = *VAR_5 = 1; break;
 case 136: *VAR_4 = 1; break;
 case 129: *VAR_4 = *VAR_5 = 1; break;
 case 135: *VAR_4 = 1; break;
 case 128: *VAR_4 = *VAR_5 = 1; break;
 case 140: *VAR_4 = 1; break;
 case 132: *VAR_4 = *VAR_5 = 1; break;
 case 139: *VAR_4 = 1; break;
 case 131: *VAR_4 = *VAR_5 = 1; break;
 case 138: *VAR_4 = 1; break;
 case 133: *VAR_4 = *VAR_5 = 1; break;
 default: return (0);
 }

 switch (VAR_6 & VAR_0) {
 case 143:
 case 144:
  break;
 default:
  return (0);
 }

 for (VAR_7=2; VAR_7<0x10; VAR_7+=2)
  if ((FUNC_1 (FUNC_0(VAR_3)+VAR_7) & VAR_1) != (VAR_6 & VAR_1))
   return (0);
 return (1);
}
