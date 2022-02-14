
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_block_cache {int dummy; } ;
struct pt_bcache_entry {int ninsn; int mode; int qualifier; scalar_t__ displacement; } ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;
typedef int bce ;


 int FUNC_0 (struct pt_bcache_entry*,int ,int) ;
 int FUNC_1 (struct pt_block_cache*,scalar_t__,struct pt_bcache_entry) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_2(struct pt_block_cache *VAR_2,
     uint64_t VAR_3, uint64_t VAR_4,
     enum pt_exec_mode VAR_5)
{
 struct pt_bcache_entry VAR_6;
 int64_t VAR_7;


 VAR_7 = (int64_t) (VAR_4 - VAR_3);

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.displacement = (int32_t) VAR_7;
 VAR_6.ninsn = 1;
 VAR_6.mode = VAR_5;
 VAR_6.qualifier = VAR_0;




 if ((int64_t) VAR_6.displacement != VAR_7) {

  FUNC_0(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.ninsn = 1;
  VAR_6.mode = VAR_5;
  VAR_6.qualifier = VAR_1;
 }

 return FUNC_1(VAR_2, VAR_3, VAR_6);
}
