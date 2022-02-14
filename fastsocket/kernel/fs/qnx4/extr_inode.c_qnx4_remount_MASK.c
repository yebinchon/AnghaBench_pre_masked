
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct qnx4_sb_info {int Version; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qnx4_sb_info* FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_2, int *VAR_3, char *VAR_4)
{
 struct qnx4_sb_info *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 VAR_5->Version = VAR_1;
 *VAR_3 |= VAR_0;
 return 0;
}
