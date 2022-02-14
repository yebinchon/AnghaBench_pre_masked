
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fileusage {char* fu_name; scalar_t__ fu_curinodes; scalar_t__ fu_curblocks; } ;
struct dqblk {scalar_t__ dqb_curinodes; scalar_t__ dqb_curblocks; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;

void
FUNC_1(const char *VAR_2, int VAR_3, struct dqblk *VAR_4,
    struct fileusage *VAR_5, u_long VAR_6)
{
 if (!VAR_1)
  return;
 if (VAR_0)
  (void)FUNC_0("%s: ", VAR_2);
 if (VAR_5->fu_name[0] == '\0')
  (void)FUNC_0("%-8lu fixed ", VAR_6);
 else
  (void)FUNC_0("%-8s fixed ", VAR_5->fu_name);
 switch (VAR_3) {

 case 129:
  (void)FUNC_0("(group):");
  break;

 case 128:
  (void)FUNC_0("(user): ");
  break;

 default:
  (void)FUNC_0("(unknown quota type %d)", VAR_3);
  break;
 }
 if (VAR_4->dqb_curinodes != VAR_5->fu_curinodes)
  (void)FUNC_0("\tinodes %lu -> %lu", (u_long)VAR_4->dqb_curinodes,
      (u_long)VAR_5->fu_curinodes);
 if (VAR_4->dqb_curblocks != VAR_5->fu_curblocks)
  (void)FUNC_0("\tblocks %lu -> %lu",
      (u_long)VAR_4->dqb_curblocks,
      (u_long)VAR_5->fu_curblocks);
 (void)FUNC_0("\n");
}
