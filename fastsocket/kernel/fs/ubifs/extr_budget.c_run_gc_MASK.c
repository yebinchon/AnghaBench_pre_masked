
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int commit_sem; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_0)
{
 int VAR_1, VAR_2;


 FUNC_1(&VAR_0->commit_sem);
 VAR_2 = FUNC_2(VAR_0, 1);
 FUNC_4(&VAR_0->commit_sem);
 if (VAR_2 < 0)
  return VAR_2;


 FUNC_0("GC freed LEB %d", VAR_2);
 VAR_1 = FUNC_3(VAR_0, VAR_2);
 if (VAR_1)
  return VAR_1;
 return 0;
}
