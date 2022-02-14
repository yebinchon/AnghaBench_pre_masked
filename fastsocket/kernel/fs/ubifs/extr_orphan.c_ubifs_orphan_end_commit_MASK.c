
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ cmt_orphans; } ;


 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*) ;

int FUNC_3(struct ubifs_info *VAR_0)
{
 int VAR_1;

 if (VAR_0->cmt_orphans != 0) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1)
   return VAR_1;
 }
 FUNC_2(VAR_0);
 VAR_1 = FUNC_1(VAR_0);
 return VAR_1;
}
