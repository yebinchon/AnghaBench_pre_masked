
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_bcache_entry {int dummy; } ;
struct bcache_fixture {int bcache; } ;
typedef int bce ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pt_bcache_entry*,int,int) ;
 int FUNC_1 (struct pt_bcache_entry*,int ,scalar_t__) ;
 int FUNC_2 (struct pt_bcache_entry) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct bcache_fixture *VAR_1)
{
 uint64_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  struct pt_bcache_entry VAR_3;
  int VAR_4;

  FUNC_0(&VAR_3, 0xff, sizeof(VAR_3));

  VAR_4 = FUNC_1(&VAR_3, VAR_1->bcache, VAR_2);
  FUNC_3(VAR_4, 0);

  VAR_4 = FUNC_2(VAR_3);
  FUNC_3(VAR_4, 0);
 }

 return FUNC_4();
}
