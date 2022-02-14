
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int ec_type; scalar_t__ ec_start; scalar_t__ ec_len; scalar_t__ ec_blk; } ;
struct inode {TYPE_1__ i_ext_cache; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static inline void
FUNC_1(struct inode *VAR_0, uint32_t VAR_1,
   uint32_t VAR_2, uint32_t VAR_3, int VAR_4)
{

 FUNC_0(VAR_2 != 0, ("ext4_ext_put_in_cache: bad input"));

 VAR_0->i_ext_cache.ec_type = VAR_4;
 VAR_0->i_ext_cache.ec_blk = VAR_1;
 VAR_0->i_ext_cache.ec_len = VAR_2;
 VAR_0->i_ext_cache.ec_start = VAR_3;
}
