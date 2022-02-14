
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int dummy; } ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_lprops const*) ;
 int FUNC_1 (struct ubifs_lprops const*) ;
 int FUNC_2 (struct ubifs_lprops*,struct ubifs_lprops const*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct ubifs_info*) ;
 struct ubifs_lprops* FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*) ;

int FUNC_7(struct ubifs_info *VAR_0, int VAR_1, struct ubifs_lprops *VAR_2)
{
 int VAR_3 = 0;
 const struct ubifs_lprops *VAR_4;

 FUNC_4(VAR_0);

 VAR_4 = FUNC_5(VAR_0, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_3 = FUNC_1(VAR_4);
  FUNC_3("cannot read properties of LEB %d, error %d",
     VAR_1, VAR_3);
  goto out;
 }

 FUNC_2(VAR_2, VAR_4, sizeof(struct ubifs_lprops));

out:
 FUNC_6(VAR_0);
 return VAR_3;
}
