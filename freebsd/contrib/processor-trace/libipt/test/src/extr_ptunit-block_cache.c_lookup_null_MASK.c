
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_block_cache {int dummy; } ;
struct pt_bcache_entry {int dummy; } ;


 int FUNC_0 (struct pt_bcache_entry*,struct pt_block_cache*,unsigned long long) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(void)
{
 struct pt_bcache_entry VAR_1;
 struct pt_block_cache VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1, ((void*)0), 0ull);
 FUNC_1(VAR_3, -VAR_0);

 VAR_3 = FUNC_0(((void*)0), &VAR_2, 0ull);
 FUNC_1(VAR_3, -VAR_0);

 return FUNC_2();
}
