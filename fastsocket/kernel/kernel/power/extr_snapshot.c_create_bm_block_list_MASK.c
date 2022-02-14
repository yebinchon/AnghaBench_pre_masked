
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct chain_allocator {int dummy; } ;
struct bm_block {int hook; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long,int ) ;
 int VAR_1 ;
 struct bm_block* FUNC_1 (struct chain_allocator*,int) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_2,
    struct list_head *VAR_3,
    struct chain_allocator *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_2, VAR_0);

 while (VAR_5-- > 0) {
  struct bm_block *VAR_6;

  VAR_6 = FUNC_1(VAR_4, sizeof(struct bm_block));
  if (!VAR_6)
   return -VAR_1;
  FUNC_2(&VAR_6->hook, VAR_3);
 }

 return 0;
}
