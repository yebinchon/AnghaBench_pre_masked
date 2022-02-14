
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,char*) ;
 scalar_t__ FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1)
{


 if (FUNC_0(VAR_1)) {
  if (FUNC_2(VAR_1)) {


   FUNC_1(VAR_1, "jdm-2005",
      "xattrs/ACLs not supported "
      "on pre-v3.6 format filesystems. "
      "Failing mount.");
   return -VAR_0;
  }
 }

 return 0;
}
