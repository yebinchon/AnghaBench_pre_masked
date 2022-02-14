
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intr_info {int flags; int fatal; struct intr_details* details; int cause_reg; int name; int enable_reg; } ;
struct intr_details {int mask; int msg; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,char*,int,...) ;
 int VAR_0 ;
 char FUNC_1 (int,int,int) ;
 int FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_1, const struct intr_info *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 const struct intr_details *VAR_7;
 char VAR_8;

 VAR_4 = FUNC_2(VAR_1, VAR_2->enable_reg);
 if (VAR_2->flags & VAR_0)
  VAR_5 = VAR_2->fatal & FUNC_2(VAR_1, VAR_2->enable_reg);
 else
  VAR_5 = VAR_2->fatal;
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_1, "%c %s 0x%x = 0x%08x, E 0x%08x, F 0x%08x\n",
     VAR_8, VAR_2->name, VAR_2->cause_reg, VAR_3, VAR_4, VAR_5);

 VAR_6 = VAR_3;
 for (VAR_7 = VAR_2->details; VAR_7 && VAR_7->mask != 0; VAR_7++) {
  u32 VAR_9 = VAR_7->mask & VAR_3;
  if (VAR_9 == 0)
   continue;
  VAR_8 = FUNC_1(VAR_9, VAR_4, VAR_2->fatal);
  FUNC_0(VAR_1, "  %c [0x%08x] %s\n", VAR_8, VAR_9,
      VAR_7->msg);
  VAR_6 &= ~VAR_9;
 }
 if (VAR_6 != 0 && VAR_6 != VAR_3)
  FUNC_0(VAR_1, "  ? [0x%08x]\n", VAR_6);
}
