
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_bcache_entry {int ninsn; int displacement; int isize; int qualifier; int mode; } ;
struct bcache_fixture {int bcache; } ;
typedef int exp ;
typedef int bce ;


 int FUNC_0 (struct pt_bcache_entry*,int,int) ;
 int FUNC_1 (int ,int ,struct pt_bcache_entry) ;
 int FUNC_2 (struct pt_bcache_entry*,int ,int ) ;
 int FUNC_3 (struct pt_bcache_entry) ;
 int FUNC_4 (struct pt_bcache_entry) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int,int) ;
 struct ptunit_result FUNC_6 () ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_8(struct bcache_fixture *VAR_2, uint64_t VAR_3)
{
 struct pt_bcache_entry VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4, 0xff, sizeof(VAR_4));
 FUNC_0(&VAR_5, 0x00, sizeof(VAR_5));

 VAR_5.ninsn = 1;
 VAR_5.displacement = 7;
 VAR_5.mode = VAR_1;
 VAR_5.qualifier = VAR_0;
 VAR_5.isize = 7;

 VAR_6 = FUNC_1(VAR_2->bcache, VAR_3, VAR_5);
 FUNC_5(VAR_6, 0);

 VAR_6 = FUNC_2(&VAR_4, VAR_2->bcache, VAR_3);
 FUNC_5(VAR_6, 0);

 FUNC_7(VAR_4.ninsn, VAR_5.ninsn);
 FUNC_5(VAR_4.displacement, VAR_5.displacement);
 FUNC_7(FUNC_3(VAR_4), FUNC_3(VAR_5));
 FUNC_7(FUNC_4(VAR_4), FUNC_4(VAR_5));
 FUNC_7(VAR_4.isize, VAR_5.isize);

 return FUNC_6();
}
