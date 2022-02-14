
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenix_super_block {int s_type; int s_magic; } ;
struct sysv_sb_info {void* s_type; int s_bytesex; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ __le32 ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sysv_sb_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct sysv_sb_info *VAR_3, struct buffer_head *VAR_4)
{
 struct xenix_super_block *VAR_5 = (struct xenix_super_block *)VAR_4->b_data;
 if (*(__le32 *)&VAR_5->s_magic == FUNC_1(0x2b5544))
  VAR_3->s_bytesex = VAR_1;
 else if (*(__be32 *)&VAR_5->s_magic == FUNC_0(0x2b5544))
  VAR_3->s_bytesex = VAR_0;
 else
  return 0;
 switch (FUNC_2(VAR_3, VAR_5->s_type)) {
 case 1:
  VAR_3->s_type = VAR_2;
  return 1;
 case 2:
  VAR_3->s_type = VAR_2;
  return 2;
 default:
  return 0;
 }
}
