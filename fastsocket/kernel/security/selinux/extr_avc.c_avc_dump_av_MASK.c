
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct audit_buffer {int dummy; } ;
typedef int av ;
struct TYPE_2__ {char** perms; } ;


 int FUNC_0 (struct audit_buffer*,char*,...) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct audit_buffer *VAR_1, u16 VAR_2, u32 VAR_3)
{
 const char **VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3 == 0) {
  FUNC_0(VAR_1, " null");
  return;
 }

 VAR_4 = VAR_0[VAR_2-1].perms;

 FUNC_0(VAR_1, " {");
 VAR_5 = 0;
 VAR_6 = 1;
 while (VAR_5 < (sizeof(VAR_3) * 8)) {
  if ((VAR_6 & VAR_3) && VAR_4[VAR_5]) {
   FUNC_0(VAR_1, " %s", VAR_4[VAR_5]);
   VAR_3 &= ~VAR_6;
  }
  VAR_5++;
  VAR_6 <<= 1;
 }

 if (VAR_3)
  FUNC_0(VAR_1, " 0x%x", VAR_3);

 FUNC_0(VAR_1, " }");
}
