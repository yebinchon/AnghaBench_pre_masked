
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fpemu {int fe_cx; int fe_fsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct fpemu *VAR_7)
{
 u_long VAR_8;
 int VAR_9;





 VAR_9 = VAR_7->fe_cx;
 VAR_8 = VAR_7->fe_fsr | (VAR_9 << VAR_1);
 if (VAR_9 != 0) {
  if (VAR_8 & (VAR_4 << VAR_5)) {
   VAR_7->fe_fsr = (VAR_8 & ~VAR_3) |
       FUNC_0(VAR_2);
   return (VAR_6);
  }
  VAR_8 |= VAR_4 << VAR_0;
 }
 VAR_7->fe_fsr = VAR_8;
 return (0);
}
