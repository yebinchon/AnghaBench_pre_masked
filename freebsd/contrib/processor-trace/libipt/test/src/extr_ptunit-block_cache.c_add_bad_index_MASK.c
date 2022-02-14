
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_bcache_entry {int dummy; } ;
struct bcache_fixture {int bcache; } ;
typedef int bce ;


 int VAR_0 ;
 int FUNC_0 (struct pt_bcache_entry*,int ,int) ;
 int FUNC_1 (int ,int ,struct pt_bcache_entry) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct bcache_fixture *VAR_2)
{
 struct pt_bcache_entry VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_4 = FUNC_1(VAR_2->bcache, VAR_0, VAR_3);
 FUNC_2(VAR_4, -VAR_1);

 return FUNC_3();
}
