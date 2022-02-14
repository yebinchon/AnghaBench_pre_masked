
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int flags; } ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*,struct ubifs_lprops*,int) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_lprops*) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_lprops*,int) ;

void FUNC_3(struct ubifs_info *VAR_2, struct ubifs_lprops *VAR_3)
{
 int VAR_4 = VAR_3->flags & VAR_0;

 if (VAR_4 != VAR_1)
  return;
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 == VAR_1)
  return;
 FUNC_2(VAR_2, VAR_3, VAR_1);
 FUNC_0(VAR_2, VAR_3, VAR_4);
}
