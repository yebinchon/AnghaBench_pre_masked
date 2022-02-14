
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int max_slots; } ;
struct ocfs2_extended_slot {int dummy; } ;
struct inode {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_super *VAR_2,
     struct inode *VAR_3,
     unsigned long long *VAR_4)
{
 unsigned long long VAR_5;

 if (FUNC_2(VAR_2)) {
  VAR_5 = VAR_2->max_slots *
   sizeof(struct ocfs2_extended_slot);
 } else {
  VAR_5 = VAR_2->max_slots * sizeof(__le16);
 }
 if (VAR_5 > FUNC_0(VAR_3)) {
  FUNC_1(VAR_1,
       "Slot map file is too small!  (size %llu, needed %llu)\n",
       FUNC_0(VAR_3), VAR_5);
  return -VAR_0;
 }

 *VAR_4 = VAR_5;
 return 0;
}
