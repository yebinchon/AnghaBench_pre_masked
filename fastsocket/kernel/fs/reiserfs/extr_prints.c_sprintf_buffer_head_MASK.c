
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_bdev; int b_page; int b_state; int b_count; scalar_t__ b_blocknr; int b_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (char*,char*,char*,int ,unsigned long long,int ,int ,int ,char*,char*,char*) ;

__attribute__((used)) static void FUNC_6(char *VAR_1, struct buffer_head *VAR_2)
{
 char VAR_3[VAR_0];

 FUNC_5(VAR_1,
  "dev %s, size %zd, blocknr %llu, count %d, state 0x%lx, page %p, (%s, %s, %s)",
  FUNC_1(VAR_2->b_bdev, VAR_3), VAR_2->b_size,
  (unsigned long long)VAR_2->b_blocknr, FUNC_0(&(VAR_2->b_count)),
  VAR_2->b_state, VAR_2->b_page,
  FUNC_4(VAR_2) ? "UPTODATE" : "!UPTODATE",
  FUNC_2(VAR_2) ? "DIRTY" : "CLEAN",
  FUNC_3(VAR_2) ? "LOCKED" : "UNLOCKED");
}
