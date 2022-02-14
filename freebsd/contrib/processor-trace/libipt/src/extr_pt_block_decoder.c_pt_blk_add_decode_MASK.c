
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_block_cache {int dummy; } ;
struct pt_bcache_entry {int ninsn; int mode; int qualifier; } ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;
typedef int bce ;


 int FUNC_0 (struct pt_bcache_entry*,int ,int) ;
 int FUNC_1 (struct pt_block_cache*,int ,struct pt_bcache_entry) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct pt_block_cache *VAR_1,
        uint64_t VAR_2, enum pt_exec_mode VAR_3)
{
 struct pt_bcache_entry VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ninsn = 1;
 VAR_4.mode = VAR_3;
 VAR_4.qualifier = VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_4);
}
